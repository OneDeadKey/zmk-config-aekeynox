#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(FSLH)
#define X_CUT   &kp CMD(B)
#define X_COPY  &kp CMD(I)
#define X_PASTE &kp CMD(DOT)
#define X_REDO  &kp CMD(T)

#define X_CTL_W &kp RC(COMMA)
#define X_SAVE  &kp CMD(SEMI)
#define X_ALL   &kp CMD(A)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp CARET
#define S_LT    &kp RS(W)
#define S_GT    &kp RS(E)
#define S_DLLR  &kp DLLR
#define S_PRCNT &kp PRCNT
#define S_AT    &kp AT
#define S_AMPS  &kp AMPS
#define S_STAR  &kp STAR
#define S_SQT   &kp Q
#define S_GRAVE &kp GRAVE

// second row
#define S_LBRC  &kp UNDER
#define S_LPAR  &kp LPAR
#define S_RPAR  &kp RPAR
#define S_RBRC  &kp PLUS
#define S_EQUAL &kp RBKT
#define S_BSLH  &kp BSLH
#define S_PLUS  &kp RBRC
#define S_MINUS &kp SQT
#define S_FSLH  &kp LBKT
#define S_DQT   &kp RS(Q)

// third row
#define S_TILDE &kp TILDE
#define S_LBKT  &kp MINUS
#define S_RBKT  &kp EQUAL
#define S_UNDER &kp DQT
#define S_HASH  &kp HASH
#define S_PIPE  &kp PIPE
#define S_EXCL  &kp EXCL
#define S_SEMI  &kp Z
#define S_COLON &kp RS(Z)
#define S_QMARK &kp LBRC

// extra
#define S_COMMA &kp W
#define S_DOT   &kp E
#define S_MONEY &kp DLLR
