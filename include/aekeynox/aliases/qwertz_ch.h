// Switzerland
// https://kbdlayout.info/kbdsg (German)
// https://kbdlayout.info/kbdsf (French)

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
#define DEAD_DIAERESIS  RBKT
#define DEAD_TILDE      RA(EQUAL)

// Main French/German letters
#ifdef KB_LAYOUT_QWERTZ_CH_FR
  #define C_EACU &kp SEMI  // é
  #define C_AGRV &kp SQT   // à
  #define C_EGRV &kp LBKT  // è
  #define C_ODIA &kp COLON // ö
  #define C_ADIA &kp DQT   // ä
  #define C_UDIA &kp LBRC  // ü
#else
  #define C_ODIA &kp SEMI  // ö
  #define C_ADIA &kp SQT   // ä
  #define C_UDIA &kp LBKT  // ü
  #define C_EACU &kp COLON // é
  #define C_AGRV &kp DQT   // à
  #define C_EGRV &kp LBRC  // è
#endif
#define C_CCDL &kp LS(N4)  // ç
#define C_SZ &digraph S S  // ss

// Unsupported French chars
#define SC_CCDL &kp LS(C)
#define  C_OE   &digraph    O     E
#define SC_OE   &digraph LS(O) LS(E)
#define  C_AE   &digraph    A     E
#define SC_AE   &digraph LS(A) LS(E)

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
#define S_DLLR  &kp BSLH
#define S_PRCNT &kp LS(N5)
#define S_AT    &kp RA(N2)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp RS(N3)
#define S_SQT   &kp MINUS
#define S_GRAVE &digraph PLUS SPACE

// second row
#define S_LBRC  &kp RA(SQT)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(BSLH)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp RA(NUBS)
#define S_PLUS  &kp RS(N1)
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE DI_TLD SPACE
#define S_LBKT  &kp RA(LBKT)
#define S_RBKT  &kp RA(RBKT)
#define S_UNDER &kp QMARK
#define S_HASH  &kp BSLH
#define S_PIPE  &kp RA(N7)
#define S_EXCL  &kp RBRC
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

#define C_MICRO &kp U // unsupported
#define C_POUND &kp PIPE
#define C_CENT  &kp RA(N8)
#define C_NOT   &kp RA(N6)
#define C_DEG   &kp TILDE
#define C_SILC  &kp GRAVE
