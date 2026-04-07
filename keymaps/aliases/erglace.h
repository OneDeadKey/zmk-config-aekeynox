#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(B)
#define X_CUT   &kp CMD(FSLH)
#define X_COPY  &kp CMD(O)
#define X_PASTE &kp CMD(Y)
#define X_REDO  &kp CMD(Q)

#define X_CTL_W &kp RC(DOT)
#define X_SAVE  &kp CMD(L)
#define X_ALL   &kp CMD(S)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp CARET
#define S_LT    &kp NUBS
#define S_GT    &kp PIPE2
#define S_DLLR  &kp DLLR
#define S_PRCNT &kp PRCNT
#define S_AT    &kp AT
#define S_AMPS  &kp AMPS
#define S_STAR  &kp STAR
#define S_SQT   &kp SQT
#define S_GRAVE &kp GRAVE

// second row
#define S_LBRC  &kp LBRC
#define S_LPAR  &kp RA(S)
#define S_RPAR  &kp RA(D)
#define S_RBRC  &kp RBRC
#define S_EQUAL &kp EQUAL
#define S_BSLH  &kp BSLH
#define S_PLUS  &kp PLUS
#define S_MINUS &kp C
#define S_FSLH  &kp MINUS
#define S_DQT   &kp DQT

// third row
#define S_TILDE &kp TILDE
#define S_LBKT  &kp LBKT
#define S_RBKT  &kp RBKT
#define S_UNDER &kp UNDER
#define S_HASH  &kp HASH
#define S_PIPE  &kp PIPE
#define S_EXCL  &kp RA(M)
#define S_SEMI  &kp RS(G)
#define S_COLON &kp RS(X)
#define S_QMARK &kp RS(C)

// extra
#define S_COMMA &kp G
#define S_DOT   &kp X
#define S_MONEY &kp RS(N1)
