// Czech Republic
// https://kbdlayout.info/kbdcz

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

#define DEAD_RING_ABOVE RA(TILDE)
#define DEAD_CARON      RA(N2)
#define DEAD_CIRCUMFLEX RA(N3)
#define DEAD_GRAVE      RA(N7)
#define DEAD_ACUTE      RA(N9)
#define DEAD_DIAERESIS  BSLH

// áéíúý
#define C_AACU &kp N8
#define C_EACU &kp N0
#define C_IACU &kp N9
#define C_UACU &kp LBKT
#define C_YACU &kp N7

// čěřšž
#define C_CCAR &kp N7
#define C_ECAR &kp N2
#define C_RCAR &kp N5
#define C_SCAR &kp N3
#define C_ZCAR &kp N6

// ů
#define C_URNG &kp SEMI

// đ, ł, ß
#define  C_DSTR &kp RA(S)
#define SC_DSTR &kp RA(D)
#define  C_LSTR &kp RA(K)
#define SC_LSTR &kp RA(L)
#define  C_SZ   &kp RA(SQT)

#include "dead_keys.h"

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET DI_CIR SPACE
#define S_LT    &kp RA(COMMA)
#define S_GT    &kp RA(DOT)
#define S_DLLR  &kp RA(SEMI)
#define S_PRCNT &kp UNDER
#define S_AT    &kp RA(V)
#define S_AMPS  &kp RA(C)
#define S_STAR  &kp RA(FSLH)
#define S_SQT   &kp BSLH
#define S_GRAVE DI_GRV SPACE

// second row
#define S_LBRC  &kp RA(B)
#define S_LPAR  &kp LBRC
#define S_RPAR  &kp RBRC
#define S_RBRC  &kp RA(N)
#define S_EQUAL &kp MINUS
#define S_BSLH  &kp NUBS
#define S_PLUS  &kp N0
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LBRC
#define S_DQT   &kp COLON

// third row
#define S_TILDE &kp RA(N1)
#define S_LBKT  &kp RA(F)
#define S_RBKT  &kp RA(G)
#define S_UNDER &kp QMARK
#define S_HASH  &kp RA(X)
#define S_PIPE  &kp PIPE2
#define S_EXCL  &kp DQT
#define S_SEMI  &kp GRAVE
#define S_COLON &kp LS(DOT)
#define S_QMARK &kp LS(COMMA)

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp RA(E)

/**
 * Non-ASCII Symbols
 */

#define C_SILC  &kp RA(SQT)
#define C_EURO  &kp RA(E)
