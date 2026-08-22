// United States (International)
// https://kbdlayout.info/00020409/

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
 * Dead Keys
 */

#define DEAD_ACUTE      SQT
#define DEAD_GRAVE      GRAVE
#define DEAD_TILDE      TILDE
#define DEAD_CIRCUMFLEX CARET
#define DEAD_DIAERESIS  DQT

#include "dead_keys.h"

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &digraph CARET SPACE
#define S_LT    &kp LT
#define S_GT    &kp GT
#define S_DLLR  &kp DLLR
#define S_PRCNT &kp PRCNT
#define S_AT    &kp AT
#define S_AMPS  &kp AMPS
#define S_STAR  &kp STAR
#define S_SQT   &digraph SQT SPACE
#define S_GRAVE &digraph GRAVE SPACE

// second row
#define S_LBRC  &kp LBRC
#define S_LPAR  &kp LPAR
#define S_RPAR  &kp RPAR
#define S_RBRC  &kp RBRC
#define S_EQUAL &kp EQUAL
#define S_BSLH  &kp BSLH
#define S_PLUS  &kp PLUS
#define S_MINUS &kp MINUS
#define S_FSLH  &kp FSLH
#define S_DQT   &digraph DQT SPACE

// third row
#define S_TILDE &digraph TILDE SPACE
#define S_LBKT  &kp LBKT
#define S_RBKT  &kp RBKT
#define S_UNDER &kp UNDER
#define S_HASH  &kp HASH
#define S_PIPE  &kp PIPE
#define S_EXCL  &kp EXCL
#define S_SEMI  &kp SEMI
#define S_COLON &kp COLON
#define S_QMARK &kp QMARK

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp DLLR

/**
 * Non-ASCII Symbols
 * https://commons.wikimedia.org/wiki/File:KB_US-International.svg
 */

#define SA(key) RS(RA(key))

// cedilla
#ifdef MACOS
  #define  C_CCDL &digraph SQT C     // ç
  #define SC_CCDL &digraph SQT RS(C) // Ç
#else
  #define  C_CCDL &kp RA(COMMA)      // ç
  #define SC_CCDL &kp SA(COMMA)      // Ç
#endif

// spectal letters
#ifdef LINUX
  #define  C_OE  &kp RA(K)           // œ
  #define SC_OE  &kp SA(K)           // Œ
#elifdef ENABLE_CP1252_ALT_CODES
  #define  C_OE  CP1252_LOWERCASE_OE // œ
  #define SC_OE  CP1252_UPPERCASE_OE // Œ
#else
  #define  C_OE  &digraph O E
  #define SC_OE  &digraph LS(O) LS(E)
#endif
#define  C_AE    &kp RA(Z) // æ
#define SC_AE    &kp SA(Z) // Æ
#define  C_ARING &kp RA(W) // å
#define SC_ARING &kp SA(W) // Å
#define  C_OSTRK &kp RA(L) // ø
#define SC_OSTRK &kp SA(L) // Ø
#define  C_ETH   &kp RA(D) // ð
#define SC_ETH   &kp SA(D) // Ð
#define  C_THORN &kp RA(R) // Þ
#define SC_THORN &kp SA(R) // þ
#define  C_SZ    &kp RA(S) // ß

// quote signs
#ifdef MACOS
  #define C_APOS &kp SA(RBKT) // ’
#else
  #define C_APOS &kp RA(N0)   // ’
#endif
#define C_LSQT  &kp RA(N9)    // ‘
#define C_RSQT  &kp RA(N0)    // ’
#define C_LGQT  &kp RA(LBKT)  // «
#define C_RGQT  &kp RA(RBKT)  // »
#ifdef LINUX
  #define C_LODQT &none
  #define C_LDQT  &kp RA(LBRC)
  #define C_RDQT  &kp RA(RBRC)
#elifdef ENABLE_CP1252_ALT_CODES
  #define C_LODQT CP1252_LOW_DOUBLE_QUOTE   // „
  #define C_LDQT  CP1252_LEFT_DOUBLE_QUOTE  // “
  #define C_RDQT  CP1252_RIGHT_DOUBLE_QUOTE // ”
#else
  #define C_LODQT &none
  #define C_LDQT  &none
  #define C_RDQT  &none
#endif

// other punctuation signs
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_NDASH CP1252_EN_DASH            // –
  #define C_MDASH CP1252_EM_DASH            // —
  #define C_ELLIP CP1252_ELLIPSIS           // …
  #define C_BLLT  CP1252_BULLET             // •
  #define C_MDOT  CP1252_MIDDLE_DOT         // ·
  #define C_FEM   CP1252_FEMININE_ORDINAL   // ª
  #define C_MASC  CP1252_MASCULINE_ORDINAL  // º
  #define C_NBSP  CP1252_NO_BREAK_SPACE
#else // unsupported
  #define C_NDASH &digraph MINUS MINUS // --
  #define C_MDASH &digraph MINUS MINUS // --
  #define C_ELLIP &ellipsis            // ...
  #define C_BLLT  &kp MINUS            // -
  #define C_MDOT  &kp DOT              // .
  #define C_FEM   &none
  #define C_MASC  &none
  #define C_NBSP  &kp SPACE
#endif
#define C_SECT  &kp SA(S)     // §
#define C_PAR   &kp RA(SEMI)  // ¶
#define C_LCXE  &kp RA(N1)    // ¡
#define C_KRAMQ &kp RA(FSLH)  // ¿

// currencies
#define C_CURR  &kp RA(N4)    // ¤
#define C_POUND &kp SA(N4)    // £
#define C_EURO  &kp RA(N5)    // €
#define C_YEN   &kp RA(MINUS) // ¥
#define C_COPY  &kp RA(C)     // ©
#define C_CENT  &kp SA(C)     // ¢
#define C_RGSTR &kp RA(R)     // ®
#define C_TM    &kp SA(R)     // ™

// math
#define C_NOT   &kp RA(BSLH)  // ¬
#define C_DEG   &kp SA(SEMI)  // °
#define C_BPIPE &kp SA(BSLH)  // ¦
#define C_DIV   &kp SA(EQUAL) // ÷
#define C_MULT  &kp RA(EQUAL) // ×
#define C_EXP1  &kp SA(N1)    // ¹
#define C_EXP2  &kp RA(N2)    // ²
#define C_EXP3  &kp RA(N3)    // ³
#define C_QRT1  &kp RA(N6)    // ¼
#define C_QRT2  &kp RA(N7)    // ½
#define C_QRT3  &kp RA(N8)    // ¾
#define C_MICRO &kp RA(M)     // µ
