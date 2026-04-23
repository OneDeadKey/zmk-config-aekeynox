#include <dt-bindings/zmk/keys.h>

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

// acute accent + cedilla
#define  C_AACU &digraph SQT A     // á
#define SC_AACU &digraph SQT RS(A) // Á
#define  C_EACU &digraph SQT E     // é
#define SC_EACU &digraph SQT RS(E) // É
#define  C_IACU &digraph SQT I     // í
#define SC_IACU &digraph SQT RS(I) // Í
#define  C_OACU &digraph SQT O     // ó
#define SC_OACU &digraph SQT RS(O) // Ó
#define  C_UACU &digraph SQT U     // ú
#define SC_UACU &digraph SQT RS(U) // Ú
#define  C_YACU &digraph SQT Y     // ý
#define SC_YACU &digraph SQT RS(Y) // Ý
#define  C_CCDL &digraph SQT C     // ç
#define SC_CCDL &digraph SQT RS(C) // ç

// grave accent
#define  C_AGRV &digraph GRAVE A     // à
#define SC_AGRV &digraph GRAVE RS(A) // À
#define  C_EGRV &digraph GRAVE E     // è
#define SC_EGRV &digraph GRAVE RS(E) // È
#define  C_IGRV &digraph GRAVE I     // ì
#define SC_IGRV &digraph GRAVE RS(I) // Ì
#define  C_OGRV &digraph GRAVE O     // ò
#define SC_OGRV &digraph GRAVE RS(O) // Ò
#define  C_UGRV &digraph GRAVE U     // ù
#define SC_UGRV &digraph GRAVE RS(U) // Ù
#define  C_YGRV &digraph GRAVE Y     // ỳ
#define SC_YGRV &digraph GRAVE RS(Y) // Ỳ

// circumflex accent
#define  C_ACRC &digraph CARET A     // â
#define SC_ACRC &digraph CARET RS(A) // Â
#define  C_ECRC &digraph CARET E     // ê
#define SC_ECRC &digraph CARET RS(E) // Ê
#define  C_ICRC &digraph CARET I     // î
#define SC_ICRC &digraph CARET RS(I) // Î
#define  C_OCRC &digraph CARET O     // ô
#define SC_OCRC &digraph CARET RS(O) // Ô
#define  C_UCRC &digraph CARET U     // û
#define SC_UCRC &digraph CARET RS(U) // Û
#define  C_YCRC &digraph CARET Y     // ŷ
#define SC_YCRC &digraph CARET RS(Y) // Ŷ

// diaeresis
#define  C_ADIA &digraph DQT A     // ä
#define SC_ADIA &digraph DQT RS(A) // Ä
#define  C_EDIA &digraph DQT E     // ë
#define SC_EDIA &digraph DQT RS(E) // Ë
#define  C_IDIA &digraph DQT I     // ï
#define SC_IDIA &digraph DQT RS(I) // Ï
#define  C_ODIA &digraph DQT O     // ö
#define SC_ODIA &digraph DQT RS(O) // Ö
#define  C_UDIA &digraph DQT U     // ü
#define SC_UDIA &digraph DQT RS(U) // Ü
#define  C_YDIA &digraph DQT Y     // ÿ
#define SC_YDIA &digraph DQT RS(Y) // Ÿ

// tilde
#define  C_ATLD &digraph TILDE A     // ã
#define SC_ATLD &digraph TILDE RS(A) // Ã
#define  C_ETLD &digraph TILDE E     // ẽ
#define SC_ETLD &digraph TILDE RS(E) // Ẽ
#define  C_ITLD &digraph TILDE I     // ĩ
#define SC_ITLD &digraph TILDE RS(I) // Ĩ
#define  C_OTLD &digraph TILDE O     // õ
#define SC_OTLD &digraph TILDE RS(O) // Õ
#define  C_UTLD &digraph TILDE U     // ũ
#define SC_UTLD &digraph TILDE RS(U) // Ũ
#define  C_YTLD &digraph TILDE Y     // ỹ
#define SC_YTLD &digraph TILDE RS(Y) // Ỹ
#define  C_NTLD &digraph TILDE N     // ñ
#define SC_NTLD &digraph TILDE RS(N) // Ñ

// spectal letters
#ifdef LINUX
  #define  C_OE  &kp RA(K) // œ
  #define SC_OE  &kp SA(K) // Œ
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

// punctuation
#define C_LSQT  &kp RA(N9)    // ‘
#define C_RSQT  &kp RA(N0)    // ’
#define C_APOS  &kp RA(N0)    // ’
#define C_LGQT  &kp RA(LBKT)  // «
#define C_RGQT  &kp RA(RBKT)  // »
#define C_SECT  &kp SA(S)     // §
#define C_PAR   &kp RA(SEMI)  // ¶
#define C_LCXE  &kp RA(N1)    // ¡
#define C_KRAMQ &kp RA(FSLH)  // ¿
#ifdef ENABLE_CP1252_ALT_CODES
  #define C_LODQT CP1252_LOW_DOUBLE_QUOTE   // „
  #define C_LDQT  CP1252_LEFT_DOUBLE_QUOTE  // “
  #define C_RDQT  CP1252_RIGHT_DOUBLE_QUOTE // ”
  #define C_NDASH CP1252_EN_DASH            // –
  #define C_MDASH CP1252_EM_DASH            // —
  #define C_ELLIP CP1252_ELLIPSIS           // …
  #define C_BLLT  CP1252_BULLET             // •
  #define C_MDOT  CP1252_MIDDLE_DOT         // ·
  #define C_FEM   CP1252_FEMININE_ORDINAL   // ª
  #define C_MASC  CP1252_MASCULINE_ORDINAL  // º
  #define C_NBSP  CP1252_NO_BREAK_SPACE
#else // unsupported
  #define C_LODQT &none
  #define C_LDQT  &none
  #define C_RDQT  &none
  #define C_NDASH &digraph MINUS MINUS // --
  #define C_MDASH &digraph MINUS MINUS // --
  #define C_ELLIP &ellipsis            // ...
  #define C_BLLT  &kp MINUS            // -
  #define C_MDOT  &kp DOT              // .
  #define C_FEM   &none
  #define C_MASC  &none
  #define C_NBSP  &kp SPACE
#endif

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
