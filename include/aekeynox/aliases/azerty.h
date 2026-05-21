#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(W)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(V)
#define X_REDO  &kp CMD(Y)

#define X_CTL_W &kp LC(Z)
#define X_SAVE  &kp CMD(S)
#define X_ALL   &kp CMD(Q)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp RA(N9)
#define S_LT    &kp NUBS
#define S_GT    &kp PIPE2
#define S_DLLR  &kp RBKT
#define S_PRCNT &kp LS(SQT)
#define S_AT    &kp RA(N0)
#define S_AMPS  &kp N1
#define S_STAR  &kp BSLH
#define S_SQT   &kp N4
#define S_GRAVE &digraph RA(N7) SPACE

// second row
#define S_LBRC  &kp RA(N4)
#define S_LPAR  &kp N5
#define S_RPAR  &kp MINUS
#define S_RBRC  &kp RA(EQUAL)
#define S_EQUAL &kp EQUAL
#define S_BSLH  &kp RA(N8)
#define S_PLUS  &kp PLUS
#define S_MINUS &kp N6
#define S_FSLH  &kp LS(DOT)
#define S_DQT   &kp N3

// third row
#define S_TILDE &digraph RA(N2) SPACE
#define S_LBKT  &kp RA(N5)
#define S_RBKT  &kp RA(MINUS)
#define S_UNDER &kp N8
#define S_HASH  &kp RA(N3)
#define S_PIPE  &kp RA(N6)
#define S_EXCL  &kp FSLH
#define S_SEMI  &kp COMMA
#define S_COLON &kp DOT
#define S_QMARK &kp LS(M)

// extra
#define S_COMMA &kp M
#define S_DOT   &kp LS(COMMA)
#define S_MONEY &kp RA(E)

// GRAVE and TILDE are no dead keys on Linux
#ifdef LINUX
  #undef S_GRAVE
  #define S_GRAVE &kp RA(N7)
  #undef S_TILDE
  #define S_TILDE &kp RA(N2)
#endif


/**
 * Non-ASCII Symbols
 * https://commons.wikimedia.org/wiki/File:KB_-_AZERTY_-_FR_-_Windows_-_FR.png
 */

#define SA(key) RS(RA(key))

// lowercase: é à è ù ç
#define C_EACU &kp N2  // é
#define C_AGRV &kp N0  // à
#define C_EGRV &kp N7  // è
#define C_UGRV &kp SQT // ù
#define C_CCDL &kp N9  // ç

// uppercase: É À È Ù Ç
#if defined LINUX || defined MACOS
  #define SC_EACU &caps N2
  #define SC_AGRV &caps N0
  #define SC_EGRV &caps N7
  #define SC_UGRV &caps SQT
  #define SC_CCDL &caps N9
#elif defined ENABLE_CP1252_ALT_CODES
  #define SC_EACU CP1252_UPPERCASE_E_ACUTE
  #define SC_AGRV CP1252_UPPERCASE_A_GRAVE
  #define SC_EGRV CP1252_UPPERCASE_E_GRAVE
  #define SC_UGRV CP1252_UPPERCASE_U_GRAVE
  #define SC_CCDL CP1252_UPPERCASE_C_CEDILLA
#else
  #define SC_EACU &kp LS(E)
  #define SC_AGRV &kp LS(Q)
  #define SC_EGRV &kp LS(E)
  #define SC_UGRV &kp LS(U)
  #define SC_CCDL &kp LS(C)
#endif

// circumflex accent
#define  C_ACRC &digraph LBKT Q     // â
#define SC_ACRC &digraph LBKT RS(Q) // Â
#define  C_ECRC &digraph LBKT E     // ê
#define SC_ECRC &digraph LBKT RS(E) // Ê
#define  C_ICRC &digraph LBKT I     // î
#define SC_ICRC &digraph LBKT RS(I) // Î
#define  C_OCRC &digraph LBKT O     // ô
#define SC_OCRC &digraph LBKT RS(O) // Ô
#define  C_UCRC &digraph LBKT U     // û
#define SC_UCRC &digraph LBKT RS(U) // Û
#define  C_YCRC &digraph LBKT Y     // ŷ
#define SC_YCRC &digraph LBKT RS(Y) // Ŷ

// diaeresis
#define  C_ADIA &digraph LBRC A     // ä
#define SC_ADIA &digraph LBRC RS(A) // Ä
#define  C_EDIA &digraph LBRC E     // ë
#define SC_EDIA &digraph LBRC RS(E) // Ë
#define  C_IDIA &digraph LBRC I     // ï
#define SC_IDIA &digraph LBRC RS(I) // Ï
#define  C_ODIA &digraph LBRC O     // ö
#define SC_ODIA &digraph LBRC RS(O) // Ö
#define  C_UDIA &digraph LBRC U     // ü
#define SC_UDIA &digraph LBRC RS(U) // Ü
#define  C_YDIA &digraph LBRC Y     // ÿ
#define SC_YDIA &digraph LBRC RS(Y) // Ÿ

// other special letters: œ, æ, ß, ñ
#ifdef LINUX
  #define  C_OE &digraph O E
  #define SC_OE &digraph LS(O) LS(E)
  #define  C_AE &kp RA(Q) // æ
  #define SC_AE &kp SA(Q) // æ
  #define  C_SZ &kp RA(S) // ß
#elifdef MACOS
  #define  C_OE &kp RA(O) // œ
  #define SC_OE &kp SA(O) // œ
  #define  C_AE &kp RA(Z) // æ
  #define SC_AE &kp SA(Z) // æ
  #define  C_SZ &kp RA(S) // ß
#elifdef ENABLE_CP1252_ALT_CODES
  #define  C_OE CP1252_LOWERCASE_OE // œ
  #define SC_OE CP1252_UPPERCASE_OE // Œ
  #define  C_AE CP1252_LOWERCASE_AE // æ
  #define SC_AE CP1252_UPPERCASE_AE // Æ
  #define  C_SZ CP1252_LOWERCASE_SZ // ß
#else // Windows without alt-codes
  #define  C_OE &digraph O E
  #define SC_OE &digraph LS(O) LS(E)
  #define  C_AE &digraph Q E
  #define SC_AE &digraph LS(O) LS(E)
  #define  C_SZ &digraph S S
#endif
#if defined LINUX || defined MACOS
  #define  C_NTLD &kp N     // XXX
  #define SC_NTLD &kp LS(N) // XXX
#else
  #define  C_NTLD &digraph RA(N2) N     // ñ
  #define SC_NTLD &digraph RA(N2) LS(N) // ñ
#endif

// quote signs
#ifdef LINUX
  #define C_LODQT &kp RA(V) // „
  #define C_LDQT  &kp RA(B) // “
  #define C_RDQT  &kp RA(N) // ”
  #define C_LGQT  &kp RA(W) // «
  #define C_RGQT  &kp RA(X) // »
  #define C_APOS  &kp SA(N) // ’
#elifdef ENABLE_CP1252_ALT_CODES
  #define C_LODQT CP1252_LOW_DOUBLE_QUOTE   // „
  #define C_LDQT  CP1252_LEFT_DOUBLE_QUOTE  // “
  #define C_RDQT  CP1252_RIGHT_DOUBLE_QUOTE // ”
  #define C_LGQT  CP1252_LEFT_GUILLEMET     // «
  #define C_RGQT  CP1252_RIGHT_GUILLEMET    // »
  #define C_APOS  CP1252_RIGHT_SINGLE_QUOTE // ’
#else // macOS or Windows without alt-codes
  #define C_LODQT &none
  #define C_LDQT  &none
  #define C_RDQT  &none
  #define C_LGQT  &kp N3 // "
  #define C_RGQT  &kp N3 // "
  #define C_APOS  &kp N4 // '
#endif

// punctuation (generic)
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_NDASH CP1252_EN_DASH    // –
  #define C_MDASH CP1252_EM_DASH    // —
  #define C_ELLIP CP1252_ELLIPSIS   // …
  #define C_BLLT  CP1252_BULLET     // •
  #define C_MDOT  CP1252_MIDDLE_DOT // ·
  #define C_NBSP  CP1252_NO_BREAK_SPACE
#else // unsupported
  #define C_NDASH &digraph N6 N6 // --
  #define C_MDASH &digraph N6 N6 // --
  #define C_ELLIP &ellipsis      // ...
  #define C_BLLT  S_MINUS        // -
  #define C_MDOT  S_DOT          // .
  #define C_NBSP  &kp SPACE
#endif

// punctuation (Spanish)
#ifdef LINUX
  #define C_LCXE  &kp SA(N1)
  #define C_KRAMQ &kp SA(MINUS)
  #define C_FEM   &none
  #define C_MASC  &none
#elifdef ENABLE_CP1252_ALT_CODES
  #define C_LCXE  CP1252_INVERTED_XMARK     // ¡
  #define C_KRAMQ CP1252_INVERTED_QMARK     // ¿
  #define C_FEM   CP1252_FEMININE_ORDINAL   // ª
  #define C_MASC  CP1252_MASCULINE_ORDINAL  // º
#else // macOS or Windows without alt-codes
  #define C_LCXE  &none
  #define C_KRAMQ &none
  #define C_FEM   &none
  #define C_MASC  &none
#endif

// math
#define C_DEG   &kp UNDER // °
#define C_MICRO &kp PIPE  // µ
#define C_EURO  &kp RA(E) // €
#ifdef LINUX
  #define C_CENT  &kp RA(C)     // ¢
  #define C_MULT  &kp SA(COMMA) // ×
#elifdef ENABLE_CP1252_ALT_CODES
  #define C_CENT  CP1252_CENT           // ¢
  #define C_MULT  CP1252_MULTIPLICATION // ×
#else // macOS or Windows without alt-codes
  #define C_CENT  &kp C
  #define C_MULT  &kp X
#endif
