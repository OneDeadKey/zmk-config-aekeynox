// Switzerland
// https://kbdlayout.info/00000807/

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
 * Dead Keys
 */

#define DK_CIR &kp EQUAL     // circumflex
#define DK_ACU &kp MINUS     // acute
#define DK_GRV &kp PLUS      // grave
#define DK_DIA &kp RBKT      // diaeresis
#define DK_TLD &kp RA(EQUAL) // tilde

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &digraph EQUAL SPACE
#define S_LT    &kp NUBS
#define S_GT    &kp PIPE2
#define S_DLLR  &kp BSLH
#define S_PRCNT &kp LS(N5)
#define S_AT    &kp RA(N2)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp RS(N3)
#define S_SQT   &kp MINUS
#define S_GRAVE &digraph PLUS SPACE

// second row
#define S_LBRC  &kp RA(SQT)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(BSLH)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp RA(NUBS)
#define S_PLUS  &kp RS(N1)
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE &digraph RA(EQUAL) SPACE
#define S_LBKT  &kp RA(LBKT)
#define S_RBKT  &kp RA(RBKT)
#define S_UNDER &kp QMARK
#define S_HASH  &kp BSLH
#define S_PIPE  &kp RA(N7)
#define S_EXCL  &kp RBRC
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

// Main French/German letters
#ifdef KB_LAYOUT_QWERTZ_CH_FR
  #define C_EACU &kp SEMI  // é
  #define C_AGRV &kp SQT   // à
  #define C_EGRV &kp LBKT  // è
  #define C_ODIA &kp COLON // ö
  #define C_ADIA &kp DQT   // ä
  #define C_UDIA &kp LBRC  // ü
#else
  #define C_ODIA &kp SEMI  // ö
  #define C_ADIA &kp SQT   // ä
  #define C_UDIA &kp LBKT  // ü
  #define C_EACU &kp COLON // é
  #define C_AGRV &kp DQT   // à
  #define C_EGRV &kp LBRC  // è
#endif
#define C_CCDL &kp LS(N4)  // ç
#define C_SZ &digraph S S  // ss

// Other accented vowels used in French and Italian
#define C_IGRV &digraph PLUS I
#define C_OGRV &digraph PLUS O
#define C_UGRV &digraph PLUS U
#define C_EDIA &digraph RBKT E
#define C_IDIA &digraph RBKT I
#define C_YDIA &digraph RBKT Y

// Uppercase accented letters all require a dead key
#define SC_EACU &digraph MINUS LS(E)
#define SC_ADIA &digraph RBKT  LS(A)
#define SC_EDIA &digraph RBKT  LS(E)
#define SC_IDIA &digraph RBKT  LS(I)
#define SC_ODIA &digraph RBKT  LS(O)
#define SC_UDIA &digraph RBKT  LS(U)
#define SC_YDIA &digraph RBKT  LS(Y)
#define SC_AGRV &digraph PLUS  LS(A)
#define SC_EGRV &digraph PLUS  LS(E)
#define SC_IGRV &digraph PLUS  LS(I)
#define SC_OGRV &digraph PLUS  LS(O)
#define SC_UGRV &digraph PLUS  LS(U)

// Unsupported French chars
#define SC_CCDL &kp LS(C)
#define  C_OE   &digraph    O     E
#define SC_OE   &digraph LS(O) LS(E)
#define  C_AE   &digraph    A     E
#define SC_AE   &digraph LS(A) LS(E)

// Other symbols
#define C_MICRO &kp U // unsupported
#define C_POUND &kp PIPE
#define C_CENT  &kp RA(N8)
#define C_NOT   &kp RA(N6)
#define C_DEG   &kp TILDE
#define C_SILC  &kp GRAVE
