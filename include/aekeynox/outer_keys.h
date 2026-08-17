// By default, use non-alpha keys on outer columns
#ifndef USE_ALPHA_ON_OUTER_KEYS
  #define LTOP  TAB
  #define LHOME ESCAPE
  #define RTOP  BACKSPACE
  #define RHOME ENTER

// QWERTY-intl users might want to customize this section to better match their main language.
// Here's an example that should work well with Latin/Romance languages.
#elifdef KB_LAYOUT_QWERTY_INTL
  #define LTOP  LS(N6) // dead circumflex
  #define LHOME DQT    // dead diaeresis
  #define RTOP  GRAVE  // dead grave accent
  #define RHOME SQT    // dead accute accent

// Other QWERTY and QWERTZ variants probably want the following:
// keep the 6th column on the right, move the 7th column to the left.
#else
  #define LTOP  RBKT
  #define LHOME BSLH
  #define RTOP  LBKT
  #define RHOME SQT
#endif
