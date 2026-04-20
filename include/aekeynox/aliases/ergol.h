#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Z)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(W)
#define X_PASTE &kp CMD(V)
#define X_REDO  &kp CMD(P)

#define X_CTL_W &kp LC(T)
#define X_SAVE  &kp CMD(S)
#define X_ALL   &kp CMD(A)

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
#define S_AT    &kp RPAR
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
#define S_HASH  &kp LPAR
#define S_PIPE  &kp PIPE
#define S_EXCL  &kp RS(O)
#define S_SEMI  &kp LS(DOT)
#define S_COLON &kp LS(N)
#define S_QMARK &kp LS(C)

// extra
#define S_COMMA &kp DOT
#define S_DOT   &kp N
#define S_MONEY &kp LS(N1)
