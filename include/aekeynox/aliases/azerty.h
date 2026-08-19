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
// XXX; S_CARET is OS-specific
// XXX; S_LT    is OS-specific
// XXX; S_GT    is OS-specific
#define S_DLLR  &kp RBKT
#define S_PRCNT &kp LS(SQT)
// XXX; S_AT    is OS-specific
#define S_AMPS  &kp N1
// XXX; S_STAR  is OS-specific
#define S_SQT   &kp N4
// XXX; S_GRAVE &digraph RA(N7) SPACE

// second row
// XXX; S_LBRC  is OS-specific
#define S_LPAR  &kp N5
#define S_RPAR  &kp MINUS
// XXX; S_RBRC  is OS-specific
#define S_EQUAL &kp EQUAL
// XXX; S_BSLH  is OS-specific
// XXX; S_PLUS  is OS-specific
// XXX; S_MINUS is OS-specific
#define S_FSLH  &kp LS(DOT)
#define S_DQT   &kp N3

// third row
// XXX; S_TILDE is OS-specific
// XXX; S_LBKT  is OS-specific
// XXX; S_RBKT  is OS-specific
// XXX; S_UNDER is OS-specific
// XXX; S_HASH  is OS-specific
// XXX; S_PIPE  is OS-specific
// XXX; S_EXCL  is OS-specific
#define S_SEMI  &kp COMMA
#define S_COLON &kp DOT
#define S_QMARK &kp LS(M)

// extra
#define S_COMMA &kp M
#define S_DOT   &kp LS(COMMA)
// XXX; S_MONEY is OS-specific

/**
 * OS_SELECT
 */

#ifdef LINUX
  #define OS_SELECT(i1, i2, i3, behavior) behavior
#elifdef MACOS
  #define OS_SELECT(i1, i2, behavior, i4) behavior
#elifdef ENABLE_CP1252_ALT_CODES
  #define OS_SELECT(i1, behavior, i3, i4) behavior
#else
  #define OS_SELECT(behavior, i2, i3, i4) behavior
#endif

#define DEAD_CIRCUMFLEX LBKT
#define DEAD_DIAERESIS  LBRC
#define DEAD_GRAVE OS_DEFINE(RA(N9), RA(N9), RA(N9), NUHS )
#define DEAD_TILDE OS_DEFINE(RA(N2), RA(N2), RA(N2), RA(N))

#define DK_CIR &kp DEAD_CIRCUMFLEX
#define DK_DIA &kp DEAD_DIAERESIS
#define DK_GRV &kp DEAD_GRAVE
#define DK_TLD &kp DEAD_TILDE

#define DI_CIR &digraph DEAD_CIRCUMFLEX
#define DI_DIA &digraph DEAD_DIAERESIS
#define DI_GRV &digraph DEAD_GRAVE
#define DI_TLD &digraph DEAD_TILDE

#define SA(key) RS(RA(key))

//      symbol             default         CP1252          macOS           Linux
#define S_CARET OS_SELECT( &kp RA(N9)    , &kp RA(N9)    , DI_CIR SPACE  , &kp RA(N9)    )
#define S_LT    OS_SELECT( &kp NUBS      , &kp NUBS      , &kp GRAVE     , &kp NUBS      )
#define S_GT    OS_SELECT( &kp PIPE2     , &kp PIPE2     , &kp TILDE     , &kp PIPE2     )
#define S_AT    OS_SELECT( &kp RA(N0)    , &kp RA(N0)    , &kp NUBS      , &kp RA(N0)    )
#define S_STAR  OS_SELECT( &kp BSLH      , &kp BSLH      , &kp RBRC      , &kp BSLH      )
#define S_GRAVE OS_SELECT( DI_GRV SPACE  , DI_GRV SPACE  , DI_GRV SPACE  , &kp RA(N7)    )

#define S_LBRC  OS_SELECT( &kp RA(N4)    , &kp RA(N4)    , &kp RA(N5)    , &kp RA(N4)    )
#define S_RBRC  OS_SELECT( &kp RA(EQUAL) , &kp RA(EQUAL) , &kp RA(MINUS) , &kp RA(EQUAL) )
#define S_BSLH  OS_SELECT( &kp RA(N8)    , &kp RA(N8)    , &kp SA(DOT)   , &kp RA(N8)    )
#define S_PLUS  OS_SELECT( &kp PLUS      , &kp PLUS      , &kp QMARK     , &kp PLUS      )
#define S_MINUS OS_SELECT( &kp N6        , &kp N6        , &kp EQUAL     , &kp N6        )

#define S_TILDE OS_SELECT( DI_TLD SPACE  , DI_TLD SPACE  , DI_TLD SPACE  , &kp RA(N2)    )
#define S_LBKT  OS_SELECT( &kp RA(N5)    , &kp RA(N5)    , &kp SA(N5)    , &kp RA(N5)    )
#define S_RBKT  OS_SELECT( &kp RA(EQUAL) , &kp RA(EQUAL) , &kp SA(MINUS) , &kp RA(EQUAL) )
#define S_UNDER OS_SELECT( &kp N8        , &kp N8        , &kp PLUS      , &kp N8        )
#define S_HASH  OS_SELECT( &kp RA(N3)    , &kp RA(N3)    , &kp PIPE2     , &kp RA(N3)    )
#define S_PIPE  OS_SELECT( &kp RA(N6)    , &kp RA(N6)    , &kp SA(L)     , &kp RA(N6)    )
#define S_EXCL  OS_SELECT( &kp FSLH      , &kp FSLH      , &kp N8        , &kp FSLH      )

#define S_MONEY OS_SELECT( &kp RA(E)     , &kp RA(E)     , &kp RA(RBKT)  , &kp RA(E)     )


/**
 * Non-ASCII Symbols
 * https://commons.wikimedia.org/wiki/File:KB_-_AZERTY_-_FR_-_Windows_-_FR.png
 */

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
#define  C_ACRC DI_CIR Q     // â
#define SC_ACRC DI_CIR RS(Q) // Â
#define  C_ECRC DI_CIR E     // ê
#define SC_ECRC DI_CIR RS(E) // Ê
#define  C_ICRC DI_CIR I     // î
#define SC_ICRC DI_CIR RS(I) // Î
#define  C_OCRC DI_CIR O     // ô
#define SC_OCRC DI_CIR RS(O) // Ô
#define  C_UCRC DI_CIR U     // û
#define SC_UCRC DI_CIR RS(U) // Û
#define  C_YCRC DI_CIR Y     // ŷ
#define SC_YCRC DI_CIR RS(Y) // Ŷ

// diaeresis
#define  C_ADIA DI_DIA A     // ä
#define SC_ADIA DI_DIA RS(A) // Ä
#define  C_EDIA DI_DIA E     // ë
#define SC_EDIA DI_DIA RS(E) // Ë
#define  C_IDIA DI_DIA I     // ï
#define SC_IDIA DI_DIA RS(I) // Ï
#define  C_ODIA DI_DIA O     // ö
#define SC_ODIA DI_DIA RS(O) // Ö
#define  C_UDIA DI_DIA U     // ü
#define SC_UDIA DI_DIA RS(U) // Ü
#define  C_YDIA DI_DIA Y     // ÿ
#define SC_YDIA DI_DIA RS(Y) // Ÿ

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
  #define  C_AE &kp RA(Q) // æ
  #define SC_AE &kp SA(Q) // Æ
  #define  C_SZ &kp RA(B) // ß
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
  #define SC_AE &digraph LS(Q) LS(E)
  #define  C_SZ &digraph S S
#endif
#ifdef LINUX
  #define  C_NTLD &kp N     // XXX
  #define SC_NTLD &kp LS(N) // XXX
#elifdef MACOS
  #define  C_NTLD &digraph RA(N) N     // ñ
  #define SC_NTLD &digraph RA(N) LS(N) // Ñ
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
#elifdef MACOS
  #define C_LODQT &none
  #define C_LDQT  &none
  #define C_RDQT  &none
  #define C_LGQT  &kp RA(N7) // « = ⌥7
  #define C_RGQT  &kp SA(N7) // » = ⌥⇧7
  #define C_APOS  &kp N4     // '
#else // Windows without alt-codes
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
#elifdef MACOS
  #define C_MDASH &kp SA(EQUAL) // —
  #define C_NDASH &kp RA(EQUAL) // –
  #define C_ELLIP &kp RA(COMMA) // … (⌥;)
  #define C_BLLT  &kp SA(COMMA) // •
  #define C_MDOT  S_DOT         // .
  #define C_NBSP  &kp RA (SPACE)
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
  #define C_LCXE  &kp RA(8) // ¡
  #define C_KRAMQ &kp SA(M) // ¿
  #define C_FEM   &none
  #define C_MASC  &none
#endif

// math
#define C_DEG   &kp UNDER // °
#ifdef MACOS
  #define C_MICRO &kp RA(SEMI) // µ
  #define C_EURO  &kp RA(RBKT) // €
#else
  #define C_MICRO &kp PIPE     // µ
  #define C_EURO  &kp RA(E)    // €
#endif
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
