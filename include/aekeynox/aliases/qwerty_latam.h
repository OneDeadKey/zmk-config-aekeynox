// Latin America
// https://kbdlayout.info/0000080a/

/**
 * Dead Keys
 */

#define DK_ACU &kp LBKT     // acute
#define DK_GRV &kp RA(BSLH) // grave
#define DK_CIR &kp RA(SQT)  // circumflex
#define DK_DIA &kp LBRC     // diaeresis
#define DK_TLD &none        // tilde (unsupported)

#define DEAD_ACUTE      &digraph LBKT
#define DEAD_GRAVE      &digraph RA(BSLH)
#define DEAD_CIRCUMFLEX &digraph RA(SQT)
#define DEAD_DIAERESIS  &digraph LBRC
#define DEAD_TILDE      &kp

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
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET DEAD_CIRCUMFLEX SPACE
#define S_LT    &kp NUBS
#define S_GT    &kp PIPE2
#define S_DLLR  &kp LS(N4)
#define S_PRCNT &kp LS(N5)
#define S_AT    &kp RA(Q)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp RBRC
#define S_SQT   &kp MINUS
#define S_GRAVE DEAD_GRAVE SPACE

// second row
#define S_LBRC  &kp DQT
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp PIPE
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp RA(MINUS)
#define S_PLUS  &kp RBKT
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE &kp RA(RBKT)
#define S_LBKT  &kp SQT
#define S_RBKT  &kp BSLH
#define S_UNDER &kp QMARK
#define S_HASH  &kp RS(N3)
#define S_PIPE  &kp GRAVE
#define S_EXCL  &kp RS(N1)
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

// tilde, cedilla
#define  C_ATLD DEAD_TILDE    A  // ã
#define SC_ATLD DEAD_TILDE LS(A) // Ã
#define  C_OTLD DEAD_TILDE    O  // õ
#define SC_OTLD DEAD_TILDE LS(O) // Õ
#define  C_NTLD &kp SEMI         // ñ
#define SC_NTLD &kp COLON        // Ñ
#define  C_CCDL &kp    C  // unsupported
#define SC_CCDL &kp LS(C) // unsupported

// Other symbols
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_LGQT  CP1252_LEFT_GUILLEMET    // «
  #define C_RGQT  CP1252_RIGHT_GUILLEMET   // »
  #define C_FEM   CP1252_FEMININE_ORDINAL  // ª
  #define C_MASC  CP1252_MASCULINE_ORDINAL // º
  #define C_MDOT  CP1252_MIDDLE_DOT        // ·
  #define C_EURO  CP1252_EURO              // €
  #define C_POUND CP1252_POUND             // £
  #define C_CENT  CP1252_CENT              // ¢
  #define C_MICRO CP1252_MICRO             // µ
  #define C_SILC  CP1252_SECTION           // §
#else
  #define C_LGQT  &none
  #define C_RGQT  &none
  #define C_FEM   &none
  #define C_MASC  &none
  #define C_MDOT  &none
  #define C_EURO  &none
  #define C_POUND &none
  #define C_CENT  &none
  #define C_MICRO &none
  #define C_SILC  &none
#endif
#define C_KRAMQ &kp EQUAL
#define C_LCXE  &kp PLUS
#define C_NOT   &kp RA(GRAVE)
#define C_DEG   &kp TILDE
