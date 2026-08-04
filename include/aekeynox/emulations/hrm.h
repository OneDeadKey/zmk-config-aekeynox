// Disable home row modifiers when necessary:
// this is just a hack to re-define the base keymap,
// keeping the same syntax whether HRMs are enabled or not.
#if defined HT_NONE || defined HT_THUMB_TAPS
  #undefine H_A
  #undefine H_S
  #undefine H_D
  #undefine H_F
  #undefine H_J
  #undefine H_K
  #undefine H_L
  #undefine H_SEMI
  #define H_A &kp
  #define H_S &kp
  #define H_D &kp
  #define H_F &kp
  #define H_J &kp
  #define H_K &kp
  #define H_L &kp
  #define H_SEMI &kp
#endif
