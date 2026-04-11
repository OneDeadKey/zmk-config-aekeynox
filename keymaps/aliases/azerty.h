#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(W)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(V)
#define X_REDO  &kp CMD(Y)

#define X_CTL_W &kp RC(Z)
#define X_SAVE  &kp CMD(S)
#define X_ALL   &kp CMD(Q)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp RA(N9)
#define S_LT    &kp NUBS
#define S_GT    &kp PIPE2
#define S_DLLR  &kp RBKT
#define S_PRCNT &kp LS(SQT)
#define S_AT    &kp RA(N0)
#define S_AMPS  &kp N1
#define S_STAR  &kp BSLH
#define S_SQT   &kp N4
#define S_GRAVE &digraph RA(N7) SPACE

// second row
#define S_LBRC  &kp RA(N4)
#define S_LPAR  &kp N5
#define S_RPAR  &kp MINUS
#define S_RBRC  &kp RA(EQUAL)
#define S_EQUAL &kp EQUAL
#define S_BSLH  &kp RA(N8)
#define S_PLUS  &kp PLUS
#define S_MINUS &kp N6
#define S_FSLH  &kp LS(DOT)
#define S_DQT   &kp N3

// third row
#define S_TILDE &digraph RA(N2) SPACE
#define S_LBKT  &kp RA(N5)
#define S_RBKT  &kp RA(MINUS)
#define S_UNDER &kp N8
#define S_HASH  &kp RA(N3)
#define S_PIPE  &kp RA(N6)
#define S_EXCL  &kp FSLH
#define S_SEMI  &kp COMMA
#define S_COLON &kp DOT
#define S_QMARK &kp LS(M)

// extra
#define S_COMMA &kp M
#define S_DOT   &kp LS(COMMA)
#define S_MONEY &kp RA(E)

// GRAVE and TILDE are no dead keys on Linux
#ifdef LINUX
  #undef S_GRAVE
  #define S_GRAVE &kp RA(N7)
  #undef S_TILDE
  #define S_TILDE &kp RA(N2)
#endif


/**
 * Non-ASCII Symbols
 * https://commons.wikimedia.org/wiki/File:KB_-_AZERTY_-_FR_-_Windows_-_FR.png
 */

#define C_EACU &kp N2  // é
#define C_AGRV &kp N0  // à
#define C_EGRV &kp N7  // è
#define C_UGRV &kp SQT // ù
#define C_CCDL &kp N9  // ç

#ifdef LINUX
  #define C_OE   &kp RA(K) // œ
  #define C_AE   &kp RA(X) // æ
  #define C_NTLD &kp N // unsupported
#else
  #define C_OE   &digraph O E // unsupported
  #define C_AE   &digraph Q E // unsupported
  #define C_NTLD &digraph RA(N2) N // ñ
#endif

#define C_MU &kp PIPE // µ

// circumflex accent
#define C_ACRC &digraph LBKT Q // â
#define C_ECRC &digraph LBKT E // ê
#define C_ICRC &digraph LBKT I // î
#define C_OCRC &digraph LBKT O // ô
#define C_UCRC &digraph LBKT U // û
#define C_YCRC &digraph LBKT Y // ŷ

// diaeresis
#define C_ADIA &digraph LBRC Q // ä
#define C_EDIA &digraph LBRC E // ë
#define C_IDIA &digraph LBRC I // ï
#define C_ODIA &digraph LBRC O // ö
#define C_UDIA &digraph LBRC U // ü
#define C_YDIA &digraph LBRC Y // ÿ
