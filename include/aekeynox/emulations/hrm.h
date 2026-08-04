// Disable home row modifiers when necessary:
// this is just a hack to re-define the base keymap,
// keeping the same syntax whether HRMs are enabled or not.
#if defined HT_NONE || defined HT_THUMB_TAPS
  #undef  H_A
  #define H_A &kp
  #undef  H_S
  #define H_S &kp
  #undef  H_D
  #define H_D &kp
  #undef  H_F
  #define H_F &kp
  #undef  H_J
  #define H_J &kp
  #undef  H_K
  #define H_K &kp
  #undef  H_L
  #define H_L &kp
  #undef  H_SEMI
  #define H_SEMI &kp
#endif
