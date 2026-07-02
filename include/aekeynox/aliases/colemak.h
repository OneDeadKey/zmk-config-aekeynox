#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Z)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(B)
#define X_REDO  &kp CMD(P)

#define X_CTL_W &kp LC(W)
#define X_SAVE  &kp CMD(D)
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
#define S_GT    &kp RA(F)
#define S_DLLR  &kp RA(P)
#define S_PRCNT &kp RA(B)
#define S_AT    &kp RA(J)
#define S_AMPS  &kp RA(L)
#define S_STAR  &kp RA(O)
#define S_SQT   &kp SQT
#define S_GRAVE &kp GRAVE

// second row
#define S_LBRC  &kp RA(A)
#define S_LPAR  &kp RA(R)
#define S_RPAR  &kp RA(S)
#define S_RBRC  &kp RA(T)
#define S_EQUAL &kp RA(G)
#define S_BSLH  &kp RA(H)
#define S_PLUS  &kp RA(N)
#define S_MINUS &kp RA(E)
#define S_FSLH  &kp RA(I)
#define S_DQT   &kp RA(U)

// third row
#define S_TILDE &kp RA(Z)
#define S_LBKT  &kp RA(X)
#define S_RBKT  &kp RA(C)
#define S_UNDER &kp RA(D)
#define S_HASH  &kp RA(V)
#define S_PIPE  &kp RA(K)
#define S_EXCL  &kp RA(M)
#define S_SEMI  &kp LS(COMMA)
#define S_COLON &kp LS(DOT)
#define S_QMARK &kp LS(FLSH)

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp LS(N1)
