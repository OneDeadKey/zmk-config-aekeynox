// Italy (142)
// https://kbdlayout.info/00010410/

#ifdef KB_EXTRA_LAYERS_AUTO
  #define KB_EXTRA_LAYERS_TRANSALP
#endif

/**
 * Dead Keys
 */

#ifdef LINUX
  #define DK_ACU &kp RA(COMMA) // acute
  #define DK_GRV &kp RA(BSLH)  // grave
  #define DK_CIR &kp RA(PLUS)  // circumflex
  #define DK_CDL &kp RA(COLON) // cedilla
  #define DK_DIA &kp RA(GT)    // diaeresis
#else
  // QWERTY-it has no dead keys on Windows
  #define DK_ACU &none
  #define DK_GRV &none
  #define DK_CIR &none
  #define DK_CDL &none
  #define DK_DIA &none
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

// French and Italian chars
#define C_EACU &kp LBRC  // é
#define C_AGRV &kp SQT   // à
#define C_EGRV &kp LBKT  // è
#define C_IGRV &kp EQUAL // ì
#define C_OGRV &kp SEMI  // ò
#define C_UGRV &kp BSLH  // ù
#define C_CCDL &kp COLON // ç

// uppercase accented chars
#ifdef LINUX
  #define SC_CCDL &digraph RA(COLON) LS(C) // Ç
  #define SC_EACU &digraph RA(COMMA) LS(E) // É
  #define SC_AGRV &digraph RA(BSLH)  LS(A) // À
  #define SC_EGRV &digraph RA(BSLH)  LS(E) // È
  #define SC_IGRV &digraph RA(BSLH)  LS(I) // Ì
  #define SC_OGRV &digraph RA(BSLH)  LS(O) // Ò
  #define SC_UGRV &digraph RA(BSLH)  LS(U) // Ù
#elifdef ENABLE_CP1252_ALT_CODES
  #define SC_CCDL CP1252_UPPERCASE_C_CEDILLA
  #define SC_EACU CP1252_UPPERCASE_E_ACUTE
  #define SC_AGRV CP1252_UPPERCASE_A_GRAVE
  #define SC_EGRV CP1252_UPPERCASE_E_GRAVE
  #define SC_IGRV CP1252_UPPERCASE_I_GRAVE
  #define SC_OGRV CP1252_UPPERCASE_O_GRAVE
  #define SC_UGRV CP1252_UPPERCASE_U_GRAVE
#else
  #define SC_CCDL &digraph LS(C)
  // No accented uppercase chars on Windows,
  // but appending a quote mark is considered ok (!)
  #define SC_EACU &digraph LS(E) MINUS // E'
  #define SC_AGRV &digraph LS(A) MINUS // A'
  #define SC_EGRV &digraph LS(E) MINUS // E'
  #define SC_IGRV &digraph LS(I) MINUS // I'
  #define SC_OGRV &digraph LS(O) MINUS // O'
  #define SC_UGRV &digraph LS(U) MINUS // U'
#endif

// diaeresis
#ifdef LINUX
  #define  C_ADIA &digraph RA(GT)    A
  #define SC_ADIA &digraph RA(GT) LS(A)
  #define  C_EDIA &digraph RA(GT)    E
  #define SC_EDIA &digraph RA(GT) LS(E)
  #define  C_IDIA &digraph RA(GT)    I
  #define SC_IDIA &digraph RA(GT) LS(I)
  #define  C_ODIA &digraph RA(GT)    O
  #define SC_ODIA &digraph RA(GT) LS(O)
  #define  C_UDIA &digraph RA(GT)    U
  #define SC_UDIA &digraph RA(GT) LS(U)
  #define  C_YDIA &digraph RA(GT)    Y
  #define SC_YDIA &digraph RA(GT) LS(Y)
#else // unsupported
  #define  C_ADIA &kp    A
  #define SC_ADIA &kp LS(A)
  #define  C_EDIA &kp    E
  #define SC_EDIA &kp LS(E)
  #define  C_IDIA &kp    I
  #define SC_IDIA &kp LS(I)
  #define  C_ODIA &kp    O
  #define SC_ODIA &kp LS(O)
  #define  C_UDIA &kp    U
  #define SC_UDIA &kp LS(U)
  #define  C_YDIA &kp    Y
  #define SC_YDIA &kp LS(Y)
#endif

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
