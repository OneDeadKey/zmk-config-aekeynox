target_include_directories(app PUBLIC include)

if ((NOT CONFIG_ZMK_SPLIT) OR CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
  target_sources_ifdef(CONFIG_ZMK_BEHAVIOR_MOD_HOLD app PRIVATE src/behaviors/behavior_mod_hold.c)
  target_sources_ifdef(CONFIG_ZMK_BEHAVIOR_DEAD_KEY app PRIVATE src/behaviors/behavior_dead_key.c)
endif() # ((NOT CONFIG_ZMK_SPLIT) OR CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
