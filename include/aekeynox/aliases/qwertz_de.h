// Germany, Austria
// https://kbdlayout.info/00000407/

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

#define DK_CIR &kp GRAVE  // circumflex
#define DK_ACU &kp EQUAL  // acute
#define DK_GRV &kp PLUS   // grave

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &digraph GRAVE SPACE
#define S_LT    &kp NUBS
#define S_GT    &kp PIPE2
#define S_DLLR  &kp LS(N4)
#define S_PRCNT &kp LS(N5)
#define S_AT    &kp RA(Q)
#define S_AMPS  &kp LS(N6)
#define S_STAR  &kp RBRC
#define S_SQT   &kp BSLH
#define S_GRAVE &digraph PLUS SPACE

// second row
#define S_LBRC  &kp RA(N7)
#define S_LPAR  &kp LS(N8)
#define S_RPAR  &kp LS(N9)
#define S_RBRC  &kp RA(N0)
#define S_EQUAL &kp LS(N0)
#define S_BSLH  &kp RA(MINUS)
#define S_PLUS  &kp RBKT
#define S_MINUS &kp FSLH
#define S_FSLH  &kp LS(N7)
#define S_DQT   &kp LS(N2)

// third row
#define S_TILDE &kp RA(RBKT)
#define S_LBKT  &kp RA(N8)
#define S_RBKT  &kp RA(N9)
#define S_UNDER &kp QMARK
#define S_HASH  &kp BSLH
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

// ö ä ü ß
#define  C_ODIA &kp SEMI  // ö
#define SC_ODIA &kp COLON // Ö
#define  C_ADIA &kp SQT   // ä
#define SC_ADIA &kp DQT   // Ä
#define  C_UDIA &kp LBKT  // ü
#define SC_UDIA &kp LBRC  // Ü
#define  C_SZ   &kp MINUS // ß

// French and Italian chars
#define  C_EACU &digraph EQUAL    E  // é
#define SC_EACU &digraph EQUAL LS(E) // É
#define  C_AGRV &digraph PLUS     A  // à
#define SC_AGRV &digraph PLUS  LS(A) // À
#define  C_EGRV &digraph PLUS     E  // è
#define SC_EGRV &digraph PLUS  LS(E) // È
#define  C_IGRV &digraph PLUS     I  // ì
#define SC_IGRV &digraph PLUS  LS(I) // Ì
#define  C_OGRV &digraph PLUS     O  // ò
#define SC_OGRV &digraph PLUS  LS(O) // Ò
#define  C_UGRV &digraph PLUS     U  // ù
#define SC_UGRV &digraph PLUS  LS(U) // Ù

// Unsupported French chars
#define  C_EDIA &kp    E             // ë
#define SC_EDIA &kp LS(E)            // Ë
#define  C_IDIA &kp    I             // ï
#define SC_IDIA &kp LS(I)            // Ï
#define  C_YDIA &kp    Y             // ÿ
#define SC_YDIA &kp LS(Y)            // Ÿ
#define  C_CCDL &kp    C             // ç
#define SC_CCDL &kp LS(C)            // Ç
#define  C_OE   &digraph    O     E  // œ
#define SC_OE   &digraph LS(O) LS(E) // Œ
#define  C_AE   &digraph    A     E  // æ
#define SC_AE   &digraph LS(A) LS(E) // Æ

// Other symbols
#define C_MICRO &kp RA(M)
#define C_POUND &none     // unsupported
#define C_CENT  &kp C     // unsupported
#define C_NOT   S_MINUS   // unsupported
#define C_DEG   &kp TILDE
#define C_SILC  &kp LS(N3)
