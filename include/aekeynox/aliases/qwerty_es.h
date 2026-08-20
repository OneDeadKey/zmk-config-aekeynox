// Spain
// https://kbdlayout.info/0000040a/

/**
 * Dead Keys
 */

#define DK_ACU &kp SQT  // acute
#define DK_GRV &kp LBKT // grave
#define DK_CIR &kp LBRC // circumflex
#define DK_DIA &kp DQT  // diaeresis

#define DEAD_ACUTE      &digraph SQT
#define DEAD_GRAVE      &digraph LBKT
#define DEAD_CIRCUMFLEX &digraph LBRC
#define DEAD_DIAERESIS  &digraph DQT

// tilde
#ifdef LINUX
  #define DEAD_TILDE &digraph RA(SEMI)
  #define DK_TLD     &kp      RA(SEMI)
  #define S_TILDE    &kp      RA(N4)
#else
  #define DEAD_TILDE &digraph RA(N4)
  #define DK_TLD     &kp      RA(N4)
  #define S_TILDE    DEAD_TILDE SPACE
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
#define S_AT    &kp RA(N2)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp RBRC
#define S_SQT   &kp MINUS
#define S_GRAVE DEAD_GRAVE SPACE

// second row
#define S_LBRC  &kp RA(SQT)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(BSLH)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp RA(GRAVE)
#define S_PLUS  &kp RBKT
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
// XXX: S_TILDE is OS-specific
#define S_LBKT  &kp RA(LBKT)
#define S_RBKT  &kp RA(RBKT)
#define S_UNDER &kp QMARK
#define S_HASH  &kp RA(N3)
#define S_PIPE  &kp RA(NUBS)
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
#define  C_CCDL &kp BSLH         // ç
#define SC_CCDL &kp PIPE         // Ç

// Other symbols
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_LGQT  CP1252_LEFT_GUILLEMET  // «
  #define C_RGQT  CP1252_RIGHT_GUILLEMET // »
  #define C_CENT  CP1252_CENT            // ¢
  #define C_MICRO CP1252_MICRO           // µ
  #define C_DEG   CP1252_DEGREE          // °
  #define C_SILC  CP1252_SECTION         // §
#else
  #define C_LGQT  &none
  #define C_RGQT  &none
  #define C_CENT  &none
  #define C_MICRO &none
  #define C_DEG   &none
  #define C_SILC  &none
#endif
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_POUND CP1252_POUND   // £
#elifdef LINUX
  #define C_POUND &kp RS(RA(N3)) // £
#else
  #define C_POUND &none
#endif
#define C_KRAMQ &kp PLUS   // ¿
#define C_LCXE  &kp EQUAL  // ¡
#define C_FEM   &kp TILDE  // ª
#define C_MASC  &kp GRAVE  // º
#define C_MDOT  &kp LS(N3) // ·
#define C_NOT   &kp RA(N6) // ¬
#define C_EURO  &kp RA(E)  // €
