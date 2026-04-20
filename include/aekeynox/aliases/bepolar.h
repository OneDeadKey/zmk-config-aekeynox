#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Y)
#define X_CUT   &kp CMD(C)
#define X_COPY  &kp CMD(H)
#define X_PASTE &kp CMD(U)
#define X_REDO  &kp CMD(Q)

#define X_CTL_W &kp LC(T)
#define X_SAVE  &kp CMD(K)
#define X_ALL   &kp CMD(A)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp RA(Q)
#define S_LT    &kp RA(W)
#define S_GT    &kp RA(E)
#define S_DLLR  &kp BSLH
#define S_PRCNT &kp EQUAL
#define S_AT    &kp CARET
#define S_AMPS  &kp RA(U)
#define S_STAR  &kp LS(N0)
#define S_SQT   &kp SQT
#define S_GRAVE &kp RA(P)

// second row
#define S_LBRC  &kp LBRC
#define S_LPAR  &kp RS(N4)
#define S_RPAR  &kp RS(N5)
#define S_RBRC  &kp RBRC
#define S_EQUAL &kp MINUS
#define S_BSLH  &kp PIPE2
#define S_PLUS  &kp LS(N7)
#define S_MINUS &kp Z
#define S_FSLH  &kp NUBS
#define S_DQT   &kp DQT

// third row
#define S_TILDE &kp RA(Z)
#define S_LBKT  &kp LBKT
#define S_RBKT  &kp RBKT
#define S_UNDER &kp RA(V)
#define S_HASH  &kp RS(N1)
#define S_PIPE  &kp RA(N)
#define S_EXCL  &kp RS(Z)
#define S_SEMI  &kp RS(G)
#define S_COLON &kp RS(V)
#define S_QMARK &kp LS(N)

// extra
#define S_COMMA &kp G
#define S_DOT   &kp V
#define S_MONEY &kp LS(BSLH)
