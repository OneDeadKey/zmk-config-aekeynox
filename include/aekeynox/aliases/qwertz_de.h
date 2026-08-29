// Germany, Austria
// https://kbdlayout.info/kbdgr

#ifdef KB_EXTRA_LAYERS_AUTO
  #define KB_EXTRA_LAYERS_TRANSALP
#endif

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Y)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(V)
#define X_REDO  &kp CMD(Z)

#define X_CTL_W &kp LC(W)
#define X_SAVE  &kp CMD(S)
#define X_ALL   &kp CMD(A)

/**
 * Diacritics
 */

#define DEAD_CIRCUMFLEX GRAVE
#define DEAD_ACUTE      EQUAL
#define DEAD_GRAVE      PLUS

// ö ä ü ß
#define  C_ODIA &kp SEMI  // ö
#define SC_ODIA &kp COLON // Ö
#define  C_ADIA &kp SQT   // ä
#define SC_ADIA &kp DQT   // Ä
#define  C_UDIA &kp LBKT  // ü
#define SC_UDIA &kp LBRC  // Ü
#define  C_SZ   &kp MINUS // ß

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
#define S_DLLR  &kp LS(N4)
#define S_PRCNT &kp LS(N5)
#define S_AT    &kp RA(Q)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp RBRC
#define S_SQT   &kp BSLH
#define S_GRAVE DI_GRV SPACE

// second row
#define S_LBRC  &kp RA(N7)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(N0)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp RA(MINUS)
#define S_PLUS  &kp RBKT
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE &kp RA(RBKT)
#define S_LBKT  &kp RA(N8)
#define S_RBKT  &kp RA(N9)
#define S_UNDER &kp QMARK
#define S_HASH  &kp BSLH
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

// Unsupported French chars
#define  C_CCDL &kp    C             // ç
#define SC_CCDL &kp LS(C)            // Ç
#define  C_OE   &digraph    O     E  // œ
#define SC_OE   &digraph LS(O) LS(E) // Œ
#define  C_AE   &digraph    A     E  // æ
#define SC_AE   &digraph LS(A) LS(E) // Æ

// Other symbols
#define C_MICRO &kp RA(M)
#define C_POUND &none     // unsupported
#define C_CENT  &kp C     // unsupported
#define C_NOT   S_MINUS   // unsupported
#define C_DEG   &kp TILDE
#define C_SILC  &kp LS(N3)

/**
 * Caps-Word
 */

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P  LBKT \
    A  S  D  F  G    H  J  K  L SEMI SQT \
    Z  X  C  V  B    N  M

#define CAPS_WORD_CONTINUE_LIST FSLH MINUS \
  DEAD_CIRCUMFLEX DEAD_ACUTE DEAD_GRAVE
