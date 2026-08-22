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

#ifdef LESS_THAN_3X5_KEYS
  #define ENABLE_HUMMINGBIRD_MODE
#endif

// Memory

#ifdef LOW_MEMORY_DEVICE
  #define OMIT_IF_NO_REF /omit-if-no-ref/
  // #undef memery-hungry options here
#else
  #define OMIT_IF_NO_REF
#endif

// Extra Layers

#if !defined KB_EXTRA_LAYERS_TRANSALP \
  && !defined KB_EXTRA_LAYERS_TRANSAT \
  && !defined KB_EXTRA_LAYERS_NONE    \
  && !defined KB_EXTRA_LAYERS_AUTO    \
  // use the default extra layers if needed
  #define KB_EXTRA_LAYERS_AUTO
#endif

// Outer Keys

#if defined KB_EXTRA_LAYERS_NONE || \
  (defined KB_EXTRA_LAYERS_AUTO && defined KB_LAYOUT_QWERTY_INTL)
  // enable outer alpha keys if needed
  #define USE_ALPHA_ON_OUTER_KEYS
#endif
