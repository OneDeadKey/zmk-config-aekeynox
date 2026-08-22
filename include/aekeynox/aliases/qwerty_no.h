// Norway
// https://kbdlayout.info/kbdno

#ifdef KB_EXTRA_LAYERS_AUTO
  #define KB_EXTRA_LAYERS_NORDIC
#endif

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Z)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(V)
#define X_REDO  &kp CMD(Y)

#define X_CTL_W &kp LC(W)
#define X_SAVE  &kp CMD(S)
#define X_ALL   &kp CMD(A)

/**
 * Diacritics
 */

#define DEAD_ACUTE      RA(EQUAL)
#define DEAD_GRAVE      PLUS
#define DEAD_DIAERESIS  RBKT
#define DEAD_CIRCUMFLEX RBRC
#define DEAD_TILDE      RA(RBKT)

#include "dead_keys.h"

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET DI_CIR SPACE
#define S_LT    &kp NUBS
#define S_GT    &kp PIPE2
#define S_DLLR  &kp RA(N4)
#define S_PRCNT &kp LS(N5)
#define S_AT    &kp RA(N2)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp PIPE
#define S_SQT   &kp BSLH
#define S_GRAVE DI_GRV SPACE

// second row
#define S_LBRC  &kp RA(N7)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(N0)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp EQUAL
#define S_PLUS  &kp MINUS
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE DI_TLD SPACE
#define S_LBKT  &kp RA(N8)
#define S_RBKT  &kp RA(N9)
#define S_UNDER &kp QMARK
#define S_HASH  &kp LS(N3)
#define S_PIPE  &kp GRAVE
#define S_EXCL  &kp RS(N1)
#define S_SEMI  &kp LS(COMMA)
#define S_COLON &kp LS(DOT)
#define S_QMARK &kp UNDER

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp RA(E)

/**
 * Non-ASCII Symbols
 */

// special letters
#ifdef ENABLE_CP1252_ALT_CODES
  #define  C_THRN CP1252_LOWERCASE_THORN // þ
  #define SC_THRN CP1252_UPPERCASE_THORN // Þ
  #define  C_ETH  CP1252_LOWERCASE_ETH   // ð
  #define SC_ETH  CP1252_UPPERCASE_ETH   // Ð
  #define  C_SZ   CP1252_LOWERCASE_SZ    // ß
#else
  #define  C_THRN &kp    T
  #define SC_THRN &kp LS(T)
  #define  C_ETH  &kp    D
  #define SC_ETH  &kp LS(D)
  #define  C_SZ   &digraph S S
#endif
#define  C_AE   &kp SEMI  // æ
#define SC_AE   &kp COLON // Æ
#define  C_OSTR &kp SQT   // ø
#define SC_OSTR &kp DQT   // Ø
#define  C_ARNG &kp LBKT  // å
#define SC_ARNG &kp LBRC  // Å

// Other symbols
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_CENT  CP1252_CENT    // ¢
  #define C_DEG   CP1252_DEGREE  // °
#else
  #define C_CENT  &none
  #define C_DEG   &none
#endif
#define C_EURO  &kp RA(E)  // €
#define C_POUND &kp RA(N3) // £
#define C_SILC  &kp TILDE  // §
#define C_MICRO &kp RA(M)  // µ
