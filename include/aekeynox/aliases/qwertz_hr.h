// Bosnia, Croatia, Serbia (Latin), Slovenia
// https://kbdlayout.info/kbdycl

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

#define SA(key) RA(RS(key))

#if LINUX
  #define DEAD_CIRCUMFLEX SA(N3)
  #define DEAD_GRAVE      SA(N7)
  #define DEAD_ACUTE      RA(SQT)
#else
  #define DEAD_CIRCUMFLEX RA(N3)
  #define DEAD_ACUTE      RA(N9)
  #define DEAD_DIAERESIS  RA(MINUS)
#endif
#define DEAD_CARON      RA(N2)
#define DEAD_ABOVE_RING RA(N5)

// caron: ščž
#define  C_SCAR  &kp LBKT
#define SC_SCAR  &kp LBRC
#define  C_CCAR  &kp SEMI
#define SC_CCAR  &kp COLON
#define  C_ZCAR  &kp BSLH
#define SC_ZCAR  &kp PIPE

// acute: ć
#define  C_CACU  &kp SQT
#define SC_CACU  &kp DQT

// stroke: đł
#define  C_DSTR  &kp RBKT
#define SC_DSTR  &kp RBRC
#ifdef LINUX // not used in Serbo-Croatian, but present in the layout
  #define  C_LSTR &kp RA(L)
  #define SC_LSTR &kp SA(L)
#else
  #define  C_LSTR &kp RA(K)
  #define SC_LSTR &kp RA(L)
#endif

#include "dead_keys.h"

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

#if LINUX
  #define S_CARET &kp RA(N3)
#else
  #define S_CARET DI_CIR SPACE
#endif

// first row
// XXX: S_CARET is OS-specific
#define S_LT    &kp RA(COMMA)
#define S_GT    &kp RA(DOT)
#define S_DLLR  &kp DLLR
#define S_PRCNT &kp PRCNT
#define S_AT    &kp RA(V)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp PLUS
#define S_SQT   &kp MINUS
#define S_GRAVE &kp RA(N7)

// second row
#define S_LBRC  &kp RA(B)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(N)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp RA(Q)
#define S_PLUS  &kp EQUAL
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE &kp RA(N1)
#define S_LBKT  &kp RA(F)
#define S_RBKT  &kp RA(G)
#define S_UNDER &kp QMARK
#define S_HASH  &kp LS(N3)
#define S_PIPE  &kp RA(W)
#define S_EXCL  &kp LS(N1)
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

#ifdef LINUX
  #define C_SZ  &digraph S S
#elifdef MACOS
  #define C_SZ  &kp RA(S)
#else
  #define C_SZ  &kp RA(SQT) // ß
#endif
#define C_EURO  &kp RA(E)   // €
#define C_SILC  &kp RA(M)   // §

/**
 * Caps-Word
 */

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P  LBKT RBKT \
    A  S  D  F  G    H  J  K  L SEMI SQT PIPE \
    Z  X  C  V  B    N  M

#ifdef LINUX
  #define CAPS_WORD_CONTINUE_LIST FSLH \
    DEAD_CARON DEAD_ABOVE_RING DEAD_CIRCUMFLEX DEAD_ACUTE DEAD_GRAVE
#else
  #define CAPS_WORD_CONTINUE_LIST FSLH \
    DEAD_CARON DEAD_ABOVE_RING DEAD_CIRCUMFLEX DEAD_ACUTE DEAD_DIAERESIS
#endif
