// Estonia
// https://kbdlayout.info/kbdest

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

#define DEAD_ACUTE EQUAL
#define DEAD_GRAVE PLUS
#define DEAD_CARON GRAVE
#define DEAD_TILDE TILDE

#define SA(key) RS(RA(key))

#ifdef LINUX
  #define S_CARET     &kp RA(SQT)
  #define DEAD_CIRCUMFLEX SA(SQT)
  #define DEAD_DIAERESIS  RA(LBKT)
  #define DEAD_ABOVE_RING SA(LBKT)
#else
  #define S_CARET     &kp SA(SQT)
  #define DEAD_CIRCUMFLEX RA(SQT)
#endif

#define  C_ADIA &kp SQT   // ä
#define SC_ADIA &kp DQT   // Ä
#define  C_ODIA &kp SEMI  // ö
#define SC_ODIA &kp COLON // Ö
#define  C_UDIA &kp LBKT  // ü
#define SC_UDIA &kp LBRC  // Ü
#define  C_OTLD &kp RBKT  // õ
#define SC_OTLD &kp RBRC  // Õ
#define  C_SCAR &kp RA(S) // č
#define SC_SCAR &kp SA(S) // Č
#define  C_ZCAR &kp RA(Z) // ž
#define SC_ZCAR &kp SA(Z) // Ž

#include "dead_keys.h"

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
// XXX: S_CARET is OS-specific
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
#define S_BSLH  &kp RA(MINUS)
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
#define S_PIPE  &kp RA(NUBS)
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
  #define  C_AE   CP1252_LOWERCASE_AE       // æ
  #define SC_AE   CP1252_UPPERCASE_AE       // Æ
  #define  C_OSTR CP1252_LOWERCASE_O_STROKE // ø
  #define SC_OSTR CP1252_UPPERCASE_O_STROKE // Ø
  #define  C_THRN CP1252_LOWERCASE_THORN    // þ
  #define SC_THRN CP1252_UPPERCASE_THORN    // Þ
  #define  C_ETH  CP1252_LOWERCASE_ETH      // ð
  #define SC_ETH  CP1252_UPPERCASE_ETH      // Ð
#else
  #define  C_AE    C_ADIA
  #define SC_AE   SC_ADIA
  #define  C_OSTR  C_ODIA
  #define SC_OSTR SC_ODIA
  #define  C_THRN &kp    T
  #define SC_THRN &kp LS(T)
  #define  C_ETH  &kp    D
  #define SC_ETH  &kp LS(D)
#endif

// ß, «»
#ifdef LINUX
  #define C_SZ   &kp RA(W)  // ß
  #define C_LGQT &kp SA(X)  // «
  #define C_RGQT &kp RA(X)  // »
#elifdef ENABLE_CP1252_ALT_CODES
  #define C_SZ   CP1252_LOWERCASE_SZ    // ß
  #define C_LGQT CP1252_LEFT_GUILLEMET  // «
  #define C_RGQT CP1252_RIGHT_GUILLEMET // »
#else
  #define C_SZ   &digraph S S
  #define C_LGQT &kp S_DQT
  #define C_RGQT &kp S_DQT
#endif

// Other symbols
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_CENT  CP1252_CENT   // ¢
  #define C_DEG   CP1252_DEGREE // °
  #define C_MICRO CP1252_MICRO  // µ
#else
  #define C_CENT  &none
  #define C_DEG   &none
  #define C_MICRO &none
#endif
#define C_EURO  &kp RA(E)    // €
#define C_POUND &kp RA(N3)   // £
#define C_SILC  &kp RA(RBKT) // §

/**
 * Caps-Word
 */

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P  LBKT RBKT \
    A  S  D  F  G    H  J  K  L SEMI SQT \
    Z  X  C  V  B    N  M

#define CAPS_WORD_CONTINUE_LIST FSLH \
  DEAD_ACUTE DEAD_GRAVE DEAD_CARON DEAD_TILDE
