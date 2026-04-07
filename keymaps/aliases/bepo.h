#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(LBKT)
#define X_CUT   &kp CMD(C)
#define X_COPY  &kp CMD(H)
#define X_PASTE &kp CMD(U)
#define X_REDO  &kp CMD(Q)

#define X_CTL_W &kp RC(RBKT)
#define X_SAVE  &kp CMD(K)
#define X_ALL   &kp CMD(A)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp RA(N6)
#define S_LT    &kp RA(N2)
#define S_GT    &kp RA(N3)
#define S_DLLR  &kp GRAVE
#define S_PRCNT &kp EQUAL
#define S_AT    &kp N6
#define S_AMPS  &kp RA(E)
#define S_STAR  &kp N0
#define S_SQT   &kp RA(G)
#define S_GRAVE &kp LS(EQUAL)

// second row
#define S_LBRC  &kp RA(X)
#define S_LPAR  &kp N4
#define S_RPAR  &kp N5
#define S_RBRC  &kp RA(C)
#define S_EQUAL &kp MINUS
#define S_BSLH  &kp RA(Z)
#define S_PLUS  &kp N7
#define S_MINUS &kp N8
#define S_FSLH  &kp N9
#define S_DQT   &kp N1

// third row
#define S_TILDE &ascii_tilde
#define S_LBKT  &kp RA(N4)
#define S_RBKT  &kp RA(N5)
#define S_UNDER &kp RA(SPACE)
#define S_HASH  &kp RS(GRAVE)
#define S_PIPE  &kp RA(Q)
#define S_EXCL  &kp LS(Y)
#define S_SEMI  &kp RS(G)
#define S_COLON &kp RS(V)
#define S_QMARK &kp LS(N)

// extra
#define S_COMMA &kp G
#define S_DOT   &kp V
#define S_MONEY &kp RA(F)

/ {
  behaviors {
    ascii_tilde: ascii_tilde {
      compatible = "zmk,behavior-macro";
      #binding-cells = <0>;
      tap-ms = <0>;
      wait-ms = <0>;
      bindings = <&kp RA(SEMI) &kp SPACE>;
    };
  };
};
