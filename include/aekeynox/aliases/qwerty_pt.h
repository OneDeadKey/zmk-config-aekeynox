// Portugal
// https://kbdlayout.info/00000816/

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
#define S_STAR  &kp LBRC
#define S_SQT   &kp MINUS
#define S_GRAVE DEAD_GRAVE SPACE

// second row
#define S_LBRC  &kp RA(N7)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(N0)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp GRAVE
#define S_PLUS  &kp LBKT
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE DEAD_TILDE SPACE
#define S_LBKT  &kp RA(N8)
#define S_RBKT  &kp RA(N9)
#define S_UNDER &kp QMARK
#define S_HASH  &kp LS(N3)
#define S_PIPE  &kp TILDE
#define S_EXCL  &kp RS(N1)
#define S_SEMI  &kp LS(COMMA)
#define S_COLON &kp LS(DOT)
#define S_QMARK &kp UNDER

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp RA(E)


/**
 * Dead Keys
 */

#define DK_ACU &kp RBKT     // acute
#define DK_GRV &kp RBRC     // grave
#define DK_TLD &kp BSLH     // tilde
#define DK_CIR &kp PIPE     // circumflex
#define DK_DIA &kp RA(LBKT) // diaeresis

#define DEAD_ACUTE      &digraph RBKT
#define DEAD_GRAVE      &digraph RBRC
#define DEAD_TILDE      &digraph BSLH
#define DEAD_CIRCUMFLEX &digraph PIPE
#define DEAD_DIAERESIS  &digraph RA(LBKT)

/**
 * Non-ASCII Symbols
 */

// tilde, cedilla
#define  C_ATLD DEAD_TILDE    A  // ã
#define SC_ATLD DEAD_TILDE LS(A) // Ã
#define  C_OTLD DEAD_TILDE    O  // õ
#define SC_OTLD DEAD_TILDE LS(O) // Õ
#define  C_NTLD DEAD_TILDE    N  // ñ
#define SC_NTLD DEAD_TILDE LS(N) // Ñ
#define  C_CCDL &kp SEMI         // ç
#define SC_CCDL &kp COLON        // Ç

// Other symbols
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_KRAMQ CP1252_INVERTED_QMARK // ¿
  #define C_LCXE  CP1252_INVERTED_XMARK // ¡
  #define C_MDOT  CP1252_MIDDLE_DOT     // ·
  #define C_NOT   CP1252_NOT            // ¬
  #define C_CENT  CP1252_CENT           // ¢
  #define C_MICRO CP1252_MICRO          // µ
  #define C_DEG   CP1252_DEGREE         // °
#else
  #define C_KRAMQ &none
  #define C_LCXE  &none
  #define C_MDOT  &none
  #define C_NOT   &none
  #define C_CENT  &none
  #define C_MICRO &none
  #define C_DEG   &none
#endif
#define C_LGQT  &kp EQUAL  // «
#define C_RGQT  &kp PLUS   // »
#define C_FEM   &kp DQT    // ª
#define C_MASC  &kp SQT    // º
#define C_EURO  &kp RA(E)  // €
#define C_POUND &kp RA(N3) // £
#define C_SILC  &kp RA(N4) // §
