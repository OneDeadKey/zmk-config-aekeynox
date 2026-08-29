// Slovakia
// https://kbdlayout.info/kbdsl

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

#if LINUX // same as CZ
  #define DEAD_ABOVE_RING TILDE
  #define DEAD_CARON      SA(N2)
  #define DEAD_CIRCUMFLEX SA(N3)
  #define DEAD_GRAVE      SA(N7)
  #define DEAD_ACUTE      SA(N9)
  #define DEAD_DIAERESIS  SA(MINUS)
#else
  #define DEAD_ABOVE_RING TILDE
  #define DEAD_CARON      RA(N2)
  #define DEAD_CIRCUMFLEX RA(N3)
  #define DEAD_ACUTE      RA(N9)
  #define DEAD_DIAERESIS  RA(MINUS)
#endif

// Note: on Windows, CapsLock does not work on these letters below.

// caron/mäkčeň: ľščťž (ščž same as CZ)
#define C_LCAR  &kp N2
#define C_SCAR  &kp N3
#define C_CCAR  &kp N4
#define C_TCAR  &kp N5
#define C_ZCAR  &kp N6
#define C_NCAR  &kp BSLH

// acute accent: ýáíéú (same as CZ)
#define C_YACU  &kp N7
#define C_AACU  &kp N8
#define C_IACU  &kp N9
#define C_EACU  &kp N0
#define C_UACU  &kp LBKT

// circumflex: ô
#define C_OCIR  &kp SEMI

// diaeresis: ä
#define C_ADIA  &kp RBKT

// QWERTZ…
#define SC_ZCAR  DI_CAR LS(Y)
#define SC_YACU  DI_ACU LS(Z)

// Shift+1dk keeps the default behavior
#define SC_ODK  &kp COLON

#include "dead_keys.h"

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

#if LINUX
  #define S_CARET &kp RA(N6)
  #define S_SQT   &kp RA(J)
  #define S_GRAVE &kp RA(GRAVE)
  #define S_TILDE &kp RA(TILDE)
#else
  #define S_CARET DI_CIR SPACE
  #define S_SQT   &kp RA(P)
  #define S_GRAVE &kp RA(N7)
  #define S_TILDE &kp RA(N1)
#endif

// first row
// XXX: S_CARET is OS-specific
#define S_LT    &kp RA(COMMA)
#define S_GT    &kp RA(DOT)
#define S_DLLR  &kp RA(SEMI)
#define S_PRCNT &kp UNDER
#define S_AT    &kp RA(V)
#define S_AMPS  &kp RA(C)
#define S_STAR  &kp RA(FSLH)
// XXX: S_SQT   is OS-specific
// XXX: S_GRAVE is OS-specific

// second row
#define S_LBRC  &kp RA(B)
#define S_LPAR  &kp RBRC
#define S_RPAR  &kp PIPE
#define S_RBRC  &kp RA(N)
#define S_EQUAL &kp MINUS
#define S_BSLH  &kp RA(Q)
#define S_PLUS  &kp N1
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LBRC
#define S_DQT   &kp COLON

// third row
// XXX: S_TILDE is OS-specific
#define S_LBKT  &kp RA(F)
#define S_RBKT  &kp RA(G)
#define S_UNDER &kp QMARK
#define S_HASH  &kp RA(X)
#define S_PIPE  &kp RA(W)
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

#define C_EURO  &kp RA(E)   // €
#define C_SILC  &kp SQT     // §
#ifdef LINUX
  #define C_SZ  &kp SA(SQT) // ß
#else
  #define C_SZ  &kp RA(SQT) // ß
#endif

/**
 * Caps-Word
 */

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P \
    A  S  D  F  G    H  J  K  L \
    Z  X  C  V  B    N  M

#ifdef LINUX
  #define CAPS_WORD_CONTINUE_LIST SEMI RA(SQT) PIPE LBKT RBKT \
    DEAD_ABOVE_RING DEAD_CARON DEAD_CIRCUMFLEX DEAD_GRAVE DEAD_ACUTE DEAD_DIAERESIS
#else
  #define CAPS_WORD_CONTINUE_LIST SEMI RA(SQT) PIPE LBKT RBKT \
    DEAD_ABOVE_RING DEAD_CARON DEAD_CIRCUMFLEX DEAD_ACUTE DEAD_DIAERESIS
#endif
