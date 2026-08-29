// Hungary
// https://kbdlayout.info/kbdhu

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

#define DEAD_CARON      RA(N2)
#define DEAD_DIAERESIS  RA(MINUS)

#ifdef LINUX
  #define S_CARET &kp RA(N3)
#else // tested on Windows
  #define DEAD_CIRCUMFLEX RA(N3)
  #define S_CARET DI_CIR SPACE
#endif

// acute
#define  C_AACU &kp SQT
#define SC_AACU &kp DQT
#define  C_EACU &kp SEMI
#define SC_EACU &kp COLON
#define  C_IACU &kp RA(J)
#define SC_IACU &kp RA(I)
#define  C_OACU &kp EQUAL
#define SC_OACU &kp PLUS
#define  C_UACU &kp RBKT
#define SC_UACU &kp RBRC

// double acute
#define  C_ODAC &kp LBKT
#define SC_ODAC &kp LBRC
#define  C_UDAC &kp BSLH
#define SC_UDAC &kp PIPE

// diaeresis
#define  C_ADIA &kp RA(A)
#define SC_ADIA &kp RA(E)
#define  C_ODIA &kp    N0
#define SC_ODIA &kp LS(N0)
#define  C_UDIA &kp    MINUS
#define SC_UDIA &kp LS(MINUS)

// đł, ß
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
// XXX: S_CARET is OS-specific
#define S_LT    &kp RA(M)
#define S_GT    &kp RA(DOT)
#define S_DLLR  &kp RA(SEMI)
#define S_PRCNT &kp LS(N5)
#define S_AT    &kp RA(V)
#define S_AMPS  &kp RA(C)
#define S_STAR  &kp RA(FSLH)
#define S_SQT   &kp LS(N1)
#define S_GRAVE &kp RA(N7)

// second row
#define S_LBRC  &kp RA(B)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(N)
#define S_EQUAL &kp LS(N7)
#define S_BSLH  &kp RA(Q)
#define S_PLUS  &kp LS(N3)
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N6)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE &kp RA(N1)
#define S_LBKT  &kp RA(F)
#define S_RBKT  &kp RA(G)
#define S_UNDER &kp QMARK
#define S_HASH  &kp RA(X)
#define S_PIPE  &kp RA(W)
#define S_EXCL  &kp RS(N4)
#define S_SEMI  &kp RA(COMMA)
#define S_COLON &kp LS(DOT)
#define S_QMARK &kp LS(COMMA)

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp RA(U)

/**
 * Non-ASCII Symbols
 */

#define C_SILC  &kp TILDE
#define C_EURO  S_MONEY

/**
 * Caps-Word
 */

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P  LBKT RBKT \
    A  S  D  F  G    H  J  K  L SEMI SQT PIPE \
    Z  X  C  V  B    N  M

#ifdef LINUX
  #define CAPS_WORD_CONTINUE_LIST FSLH \
    DEAD_CARON DEAD_DIAERESIS
#else
  #define CAPS_WORD_CONTINUE_LIST FSLH \
    DEAD_CARON DEAD_DIAERESIS DEAD_CIRCUMFLEX
#endif
