#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Z)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(V)
#define X_REDO  &kp CMD(Y)

#define X_CTL_W &kp RC(W)
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
#else
  #define  C_OE  &digraph O E
  #define SC_OE  &digraph LS(O) LS(E)
#endif
#define  C_AE    &kp RA(X) // æ
#define SC_AE    &kp SA(X) // Æ
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
#define C_LSQT  &kb RA(N9)    // ‘
#define C_RSQT  &kb RA(N0)    // ’
#define C_LDQT  &kb RA(LBRC)  // “
#define C_RDQT  &kb RA(RBRC)  // ”
#define C_LGQT  &kb RA(LBKT)  // «
#define C_RGQT  &kb RA(RBKT)  // «
#define C_SECT  &kb SA(S)     // §
#define C_PAR   &kb RA(SEMI)  // ¶
#define C_LCXE  &kb RA(N1)    // ¡
#define C_KRAMQ &kb RA(FSLH)  // ¿

// currencies
#define C_CURR  &kb RA(N4)    // ¤
#define C_POUND &kb SA(N4)    // £
#define C_EURO  &kb RA(N5)    // €
#define C_YEN   &kb RA(MINUS) // ¥
#define C_COPY  &kb RA(C)     // ©
#define C_CENT  &kb SA(C)     // ¢
#define C_RGSTR &kb RA(R)     // ®
#define C_TM    &kb SA(R)     // ™

// math
#define C_DEG   &kb SA(SEMI)  // °
#define C_BPIPE &kb SA(BSLH)  // ¦
#define C_NOT   &kb RA(BSLH)  // ¬
#define C_DIV   &kb SA(EQUAL) // ÷
#define C_MULT  &kb RA(EQUAL) // ×
#define C_EXP1  &kb SA(N1)    // ¹
#define C_EXP2  &kb RA(N2)    // ²
#define C_EXP3  &kb RA(N3)    // ³
#define C_QRT1  &kb RA(N6)    // ¼
#define C_QRT2  &kb RA(N7)    // ½
#define C_QRT3  &kb RA(N8)    // ¾
#define C_MU    &kp RA(M)     // µ
