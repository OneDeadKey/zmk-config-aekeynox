#define DT_DRV_COMPAT zmk_behavior_mod_hold

#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <drivers/behavior.h>
#include <dt-bindings/zmk/modifiers.h>
#include <zmk/event_manager.h>
#include <zmk/events/keycode_state_changed.h>
#include <zmk/hid.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/behavior.h>

#if DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT)

struct behavior_mod_hold_config {
    struct zmk_behavior_binding binding;
    zmk_mod_flags_t mods_to_hold;
};


static int on_mod_hold_binding_pressed(
    struct zmk_behavior_binding *binding,
    struct zmk_behavior_binding_event event
) {
    const struct device *dev = zmk_behavior_get_binding(binding->behavior_dev);
    const struct behavior_mod_hold_config *cfg = dev->config;

    struct zmk_behavior_binding invoked_binding = *binding;
    invoked_binding.behavior_dev = cfg->binding.behavior_dev;
    zmk_behavior_invoke_binding(&invoked_binding, event, true);
    zmk_hid_register_mods(zmk_hid_get_explicit_mods() & cfg->mods_to_hold);

    return ZMK_BEHAVIOR_OPAQUE;
}


static int on_mod_hold_binding_released(
    struct zmk_behavior_binding *binding,
    struct zmk_behavior_binding_event event
) {
    const struct device *dev = zmk_behavior_get_binding(binding->behavior_dev);
    const struct behavior_mod_hold_config *cfg = dev->config;

    struct zmk_behavior_binding kp_binding = {
        .behavior_dev = "key_press",
        .param1 = LEFT_CONTROL,
    };

    struct zmk_behavior_binding invoked_binding = *binding;
    invoked_binding.behavior_dev = cfg->binding.behavior_dev;
    zmk_behavior_invoke_binding(&invoked_binding, event, false);

    /* Release mods using a key press, because `zmk_hid_unregister_mods` is lazy. */
    zmk_mod_flags_t mods_to_release = zmk_hid_get_explicit_mods() & cfg->mods_to_hold;
    for (int i = 0; i < 8; i++) {
        if ((mods_to_release & (1 << i)) != 0) {
            kp_binding.param1 = LEFT_CONTROL + i;
            zmk_behavior_invoke_binding(&kp_binding, event, false);
        }
    }

    return ZMK_BEHAVIOR_OPAQUE;
}


static const struct behavior_driver_api mod_hold_driver_api = {
    .binding_pressed  = on_mod_hold_binding_pressed,
    .binding_released = on_mod_hold_binding_released,
};


#define INST_KEYMAP_EXTRACT_BINDING(n, binding_name) {                        \
    .behavior_dev = DEVICE_DT_NAME(DT_INST_PHANDLE(n, binding_name)),         \
    .param1 = DT_INST_PHA_BY_IDX_OR(n, binding_name, 0, param1, 0),           \
    .param2 = DT_INST_PHA_BY_IDX_OR(n, binding_name, 1, param2, 0),           \
}

#define mod_hold_INST(n)                                                      \
    static struct behavior_mod_hold_config behavior_mod_hold_config_##n = {   \
        .mods_to_hold = DT_INST_PROP(n, mods_to_hold),                        \
        .binding = INST_KEYMAP_EXTRACT_BINDING(n, binding)                    \
    };                                                                        \
                                                                              \
    BEHAVIOR_DT_INST_DEFINE(                                                  \
        n,     /* Instance Number (Automatically populated by macro) */       \
        NULL,  /* Initialization Function */                                  \
        NULL,  /* Power Management Device Pointer */                          \
        NULL,  /* Behavior Data Pointer */                                    \
        &behavior_mod_hold_config_##n,  /* Behavior Configuration Pointer */  \
        POST_KERNEL,  /* Initialization Level */                              \
        CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,  /* Device Priority */           \
        &mod_hold_driver_api);  // API struct

DT_INST_FOREACH_STATUS_OKAY(mod_hold_INST)

#endif /* DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT) */
