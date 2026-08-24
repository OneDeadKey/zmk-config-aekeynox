// Brazil (ABNT2)
// https://kbdlayout.info/kbdbr

#ifdef KB_EXTRA_LAYERS_AUTO
  #define KB_EXTRA_LAYERS_TRANSAT
#endif

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Z)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(V)
#define X_REDO  &kp CMD(Y)

#define X_CTL_W &kp LC(W)
#define X_SAVE  &kp CMD(S)
#define X_ALL   &kp CMD(A)

/**
 * Diacritics
 */

#define DEAD_ACUTE      LBKT
#define DEAD_GRAVE      LBRC
#define DEAD_TILDE      SQT
#define DEAD_CIRCUMFLEX DQT
#define DEAD_DIAERESIS  LS(N6)

#define  C_CCDL &kp SEMI  // ç
#define SC_CCDL &kp COLON // Ç

#include "dead_keys.h"

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET DI_CIR SPACE
#define S_LT    &kp LT
#define S_GT    &kp GT
#define S_DLLR  &kp DLLR
#define S_PRCNT &kp PRCNT
#define S_AT    &kp AT
#define S_AMPS  &kp AMPS
#define S_STAR  &kp STAR
#define S_SQT   &kp GRAVE
#define S_GRAVE DI_GRV SPACE

// second row
#define S_LBRC  &kp RBRC
#define S_LPAR  &kp LPAR
#define S_RPAR  &kp RPAR
#define S_RBRC  &kp PIPE
#define S_EQUAL &kp EQUAL
#define S_BSLH  &kp NUBS
#define S_PLUS  &kp PLUS
#define S_MINUS &kp MINUS
#define S_FSLH  &kp RA(Q)
#define S_DQT   &kp TILDE

// third row
#define S_TILDE DI_TLD SPACE
#define S_LBKT  &kp RBKT
#define S_RBKT  &kp BSLH
#define S_UNDER &kp UNDER
#define S_HASH  &kp HASH
#define S_PIPE  &kp PIPE2
#define S_EXCL  &kp EXCL
#define S_SEMI  &kp FSLH
#define S_COLON &kp QMARK
#define S_QMARK &kp RA(W)

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp DLLR

/**
 * Non-ASCII Symbols
 */

#ifdef ENABLE_CP1252_ALT_CODES
  #define C_KRAMQ CP1252_INVERTED_QMARK    // ¿
  #define C_LCXE  CP1252_INVERTED_XMARK    // ¡
  #define C_LGQT  CP1252_LEFT_GUILLEMET    // «
  #define C_RGQT  CP1252_RIGHT_GUILLEMET   // »
  #define C_FEM   CP1252_FEMININE_ORDINAL  // ª
  #define C_MASC  CP1252_MASCULINE_ORDINAL // º
  #define C_MDOT  CP1252_MIDDLE_DOT        // ·
  #define C_EURO  CP1252_EURO              // €
  #define C_CENT  CP1252_CENT              // ¢
  #define C_MICRO CP1252_MICRO             // µ
#else
  #define C_KRAMQ &none
  #define C_LCXE  &none
  #define C_LGQT  &none
  #define C_RGQT  &none
  #define C_FEM   &none
  #define C_MASC  &none
  #define C_MDOT  &none
  #define C_EURO  &none
  #define C_CENT  &none
  #define C_MICRO &none
#endif

#define C_FEM   &kp RA(BSLH)
#define C_MASC  &kp RA(RBKT)
#define C_POUND &kp RA(N4)
#define C_CENT  &kp RA(N5)
#define C_NOT   &kp RA(N6)
#define C_DEG   &kp RA(E)
#define C_SILC  &kp RA(EQUAL)

/**
* Caps-Word
*/

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P \
    A  S  D  F  G    H  J  K  L SEMI \
    Z  X  C  V  B    N  M

#define CAPS_WORD_CONTINUE_LIST \
  DEAD_ACUTE DEAD_GRAVE DEAD_TILDE DEAD_CIRCUMFLEX DEAD_DIAERESIS
