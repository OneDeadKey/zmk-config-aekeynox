// Italy (142)
// https://kbdlayout.info/kbdit142 => recommended (1)
// https://kbdlayout.info/kbdit    => lacks GRAVE, HASH, TILDE (2)

#ifdef KB_EXTRA_LAYERS_AUTO
  #define KB_EXTRA_LAYERS_TRANSALP
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

#ifdef LINUX
  #define DEAD_ACUTE      RA(COMMA)
  #define DEAD_GRAVE      RA(BSLH)
  #define DEAD_CIRCUMFLEX PLUS
  #define DEAD_DIAERESIS  RA(GT)
  #define DEAD_CEDILLA    RA(COLON)
#endif

#define C_EACU &kp LBRC  // é
#define C_AGRV &kp SQT   // à
#define C_EGRV &kp LBKT  // è
#define C_IGRV &kp EQUAL // ì
#define C_OGRV &kp SEMI  // ò
#define C_UGRV &kp BSLH  // ù
#define C_CCDL &kp COLON // ç

#include "dead_keys.h"

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp PLUS
#define S_LT    &kp NUBS
#define S_GT    &kp PIPE2
#define S_DLLR  &kp LS(N4)
#define S_PRCNT &kp LS(N5)
#define S_AT    &kp RA(Q)     // (1)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp RBRC
#define S_SQT   &kp MINUS
// XXX: S_GRAVE is OS-specific

// second row
#define S_LBRC  &kp RA(N7)    // (1)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(N0)    // (1)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp GRAVE
#define S_PLUS  &kp RBKT
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
// XXX: S_TILDE is OS-specific
#define S_LBKT  &kp RA(N8)    // (1)
#define S_RBKT  &kp RA(N9)    // (1)
#define S_UNDER &kp QMARK
// XXX: S_HASH  is OS-specific
#define S_PIPE  &kp TILDE
#define S_EXCL  &kp RS(N1)
#define S_SEMI  &kp LS(COMMA)
#define S_COLON &kp LS(DOT)
#define S_QMARK &kp UNDER

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp RA(E)

#ifdef LINUX
  #define S_GRAVE &kp RA(MINUS)
  #define S_TILDE &kp RA(EQUAL)
  #define S_HASH  &kp RA(SQT)
#else
  #define S_GRAVE &kp RA(BSLH)  // (1) (2)
  #define S_TILDE &kp RA(RBKT)  // (1) (2)
  #define S_HASH  &kp RA(N3)    // (1)
#endif

// Notes:
// (1): as defined on Windows' "Italian (142)" driver (position differs on the standard Windows driver)
// (2): not available with the standard Windows driver (unless using CP1252)

/**
 * Non-ASCII Symbols
 */

// other French and German chars
#ifdef ENABLE_CP1252_ALT_CODES
  #define  C_OE CP1252_LOWERCASE_OE // œ
  #define SC_OE CP1252_UPPERCASE_OE // Œ
  #define  C_AE CP1252_LOWERCASE_AE // æ
  #define SC_AE CP1252_UPPERCASE_AE // Æ
  #define  C_SZ CP1252_LOWERCASE_SZ // ß
#else
  #define  C_OE &digraph    O     E
  #define SC_OE &digraph LS(O) LS(E)
  #define  C_AE &digraph    A     E
  #define SC_AE &digraph LS(A) LS(E)
  #define  C_SZ &digraph    S     S
#endif

// Other symbols
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_MICRO CP1252_MICRO
  #define C_CENT  CP1252_CENT
  #define C_NOT   CP1252_NOT
#else
  #define C_MICRO &none
  #define C_CENT  &kp C
  #define C_NOT   S_MINUS
#endif
#define C_POUND &kp LS(N3)
#define C_DEG   &kp DQT
#define C_SILC  &kp PIPE

/**
* Caps-Word
*/

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P \
    A  S  D  F  G    H  J  K  L \
    Z  X  C  V  B    N  M

#ifdef LINUX
  #define CAPS_WORD_CONTINUE_LIST SEMI SQT PIPE LBKT
    DEAD_ACUTE DEAD_GRAVE DEAD_CIRCUMFLEX DEAD_DIAERESIS DEAD_CEDILLA
#else
  #define CAPS_WORD_CONTINUE_LIST SEMI SQT PIPE LBKT
#endif
