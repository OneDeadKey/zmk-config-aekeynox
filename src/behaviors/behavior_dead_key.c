/*
 * Dead Key Behavior
 * Tap a non-modified dead key before the target key.
 * This ensures the dead key is always applied without any modifier, even if
 * Shift or Ctrl or Cmd are pressed while the target key is tapped.
 */

#define DT_DRV_COMPAT zmk_behavior_dead_key

#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <drivers/behavior.h>
#include <dt-bindings/zmk/modifiers.h>
#include <zmk/event_manager.h>
#include <zmk/events/position_state_changed.h>
#include <zmk/hid.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/behavior.h>

#if DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT)

struct behavior_dead_key_config {
    uint32_t dead_key;
};

struct behavior_dead_key_data {
    uint32_t position;
    uint32_t dead_key;
    bool is_down;
};

static struct behavior_dead_key_data active_dead_key;

static int on_dead_key_binding_pressed(
    struct zmk_behavior_binding *binding,
    struct zmk_behavior_binding_event event
) {
    const struct device *dev = zmk_behavior_get_binding(binding->behavior_dev);
    const struct behavior_dead_key_config *cfg = dev->config;

    struct zmk_behavior_binding kp_binding = {
        .behavior_dev = "key_press",
        .param1 = cfg->dead_key,
    };

    const zmk_mod_flags_t mods_before = zmk_hid_get_explicit_mods();
    zmk_hid_masked_modifiers_set(0xff);  /* Temporarily disable any active modifier */
    zmk_behavior_invoke_binding(&kp_binding, event, true);
    zmk_hid_masked_modifiers_clear();

    active_dead_key = (struct behavior_dead_key_data) {
        .position = event.position,
        .dead_key = cfg->dead_key,
        .is_down = true,
    };

    const zmk_mod_flags_t mods_after = zmk_hid_get_explicit_mods();
    const zmk_mod_flags_t sticky_mods = mods_before ^ mods_after;
    kp_binding.param1 = APPLY_MODS(sticky_mods, binding->param1);
    zmk_behavior_invoke_binding(&kp_binding, event, true);

    return ZMK_BEHAVIOR_OPAQUE;
}

static int on_dead_key_binding_released(
    struct zmk_behavior_binding *binding,
    struct zmk_behavior_binding_event event
) {
    struct zmk_behavior_binding kp_binding = {
        .behavior_dev = "key_press",
        .param1 = active_dead_key.dead_key,
    };

    if (active_dead_key.is_down) {
        active_dead_key.is_down = false;
        zmk_behavior_invoke_binding(&kp_binding, event, false);
    };

    kp_binding.param1 = binding->param1;
    zmk_behavior_invoke_binding(&kp_binding, event, false);

    return ZMK_BEHAVIOR_OPAQUE;
}

static const struct behavior_driver_api dead_key_driver_api = {
    .binding_pressed  = on_dead_key_binding_pressed,
    .binding_released = on_dead_key_binding_released,
};

static int dead_key_position_state_changed_listener(const zmk_event_t *eh);

ZMK_LISTENER(behavior_dead_key, dead_key_position_state_changed_listener);
ZMK_SUBSCRIPTION(behavior_dead_key, zmk_position_state_changed);

static int dead_key_position_state_changed_listener(const zmk_event_t *eh) {
    struct zmk_position_state_changed *ev = as_zmk_position_state_changed(eh);
    if (ev == NULL || !active_dead_key.is_down) {
        return ZMK_EV_EVENT_BUBBLE;
    }

    struct zmk_behavior_binding kp_binding = {
        .behavior_dev = "key_press",
        .param1 = active_dead_key.dead_key,
    };

    struct zmk_behavior_binding_event event = {
        .position = active_dead_key.position,
        .timestamp = ev->timestamp,
        #if IS_ENABLED(CONFIG_ZMK_SPLIT)
        .source = ev->source,
        #endif
    };

    zmk_behavior_invoke_binding(&kp_binding, event, false);
    active_dead_key.is_down = false;

    return ZMK_EV_EVENT_BUBBLE;
}

#define DEAD_KEY_INST(n)                                                      \
    static struct behavior_dead_key_config behavior_dead_key_config_##n = {   \
        .dead_key = DT_INST_PROP(n, dead_key)                                 \
    };                                                                        \
                                                                              \
    BEHAVIOR_DT_INST_DEFINE(                                                  \
        n,     /* Instance Number (Automatically populated by macro) */       \
        NULL,  /* Initialization Function */                                  \
        NULL,  /* Power Management Device Pointer */                          \
        NULL,  /* Behavior Data Pointer */                                    \
        &behavior_dead_key_config_##n,  /* Behavior Configuration Pointer */  \
        POST_KERNEL,  /* Initialization Level */                              \
        CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,  /* Device Priority */           \
        &dead_key_driver_api);  /* API struct */

DT_INST_FOREACH_STATUS_OKAY(DEAD_KEY_INST)

#endif /* DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT) */
