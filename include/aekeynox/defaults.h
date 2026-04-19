// Timing is Key!

#ifndef TAPPING_TERM
#define TAPPING_TERM 300
#endif

#ifndef SHORT_TAPPING_TERM
#define SHORT_TAPPING_TERM 150
#endif

#ifndef QUICK_TAP
#define QUICK_TAP 200
#endif

// Hold-Tap Flavor

#ifdef FOUR_THUMB_KEYS
  #undef HT_NONE
  #undef HT_THUMB_TAPS
  #undef HT_HOME_ROW_MODS
  #define HT_TWO_THUMB_KEYS
#elif !defined HT_NONE && !defined HT_THUMB_TAPS && !defined HT_HOME_ROW_MODS && !defined HT_TWO_THUMB_KEYS
  #define HT_HOME_ROW_MODS
#elif defined HT_NONE + defined HT_THUMB_TAPS + defined HT_HOME_ROW_MODS + defined HT_TWO_THUMB_KEYS > 1
  #error "Please select only up to one hold-tap configuration at a time"
#endif

#if (defined HT_HOME_ROW_MODS || defined HT_TWO_THUMB_KEYS) && !defined CALLUM_NAVIGATION
  #define ENABLE_HOME_ROW_MODS
#endif

#if defined VIM_NAVIGATION + defined CALLUM_NAVIGATION > 1
  #error "Please select only one navigation style at a time"
#endif

// Half-layers

#ifdef VIM_NAVIGATION
  #define DEFAULT_NAV_LEFT  HL_SHORTCUTS
  #define DEFAULT_NAV_RIGHT HL_ARROWS_HJKL
#elifdef CALLUM_NAVIGATION
  #define DEFAULT_NAV_LEFT  HL_CALLUM
  #define DEFAULT_NAV_RIGHT HL_ARROWS_IJKL
#else
  #define DEFAULT_NAV_LEFT  HL_ARROWS_ESDF
  #define DEFAULT_NAV_RIGHT HL_NUMPAD
#endif

#if defined VIM_NAVIGATION || defined CALLUM_NAVIGATION
  #define DEFAULT_L_LAYER_2 NUM_ROW_LAYER
  #define DEFAULT_R_LAYER_2 NUM_ROW_LAYER
  #define DEFAULT_NUM_LAYER NUM_ROW_LAYER
#else
  #define DEFAULT_L_LAYER_2 FN_MEDIA_LAYER
  #define DEFAULT_R_LAYER_2 FN_MEDIA_LAYER
  #define DEFAULT_NUM_LAYER NAV_LAYER
#endif

#ifndef NAV_LEFT
#define NAV_LEFT DEFAULT_NAV_LEFT
#endif

#ifndef NAV_RIGHT
#define NAV_RIGHT DEFAULT_NAV_RIGHT
#endif

#ifndef FN_LEFT
#define FN_LEFT HL_FUN_PAD
#endif

#ifndef FN_RIGHT
#define FN_RIGHT HL_MEDIA
#endif

#ifndef L_LAYER_1
#define L_LAYER_1 NAV_LAYER
#endif

#ifndef R_LAYER_1
#define R_LAYER_1 NAV_LAYER
#endif

#ifndef L_LAYER_2
#define L_LAYER_2 DEFAULT_L_LAYER_2
#endif

#ifndef R_LAYER_2
#define R_LAYER_2 DEFAULT_R_LAYER_2
#endif

#ifndef NUM_LAYER
#define NUM_LAYER DEFAULT_NUM_LAYER
#endif

// Memory

#ifdef LOW_MEMORY_DEVICE
  #define OMIT_IF_NO_REF /omit-if-no-ref/
  // #undef memery-hungry options here
#else
  #define OMIT_IF_NO_REF
#endif
