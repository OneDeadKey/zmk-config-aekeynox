// France
// https://kbdlayout.info/0000040c/

/**
 * OS_SELECT
 */

#include <zephyr/sys/util_macro.h>

#define OS_SELECT_OR_DEFAULT(behavior, default) \
  COND_CODE_1(IS_EMPTY(behavior), (default), (behavior))

#ifdef LINUX
  #define OS_SELECT(default, i2, i3, behavior) OS_SELECT_OR_DEFAULT(behavior, default)
#elifdef MACOS
  #define OS_SELECT(default, i2, behavior, i4) OS_SELECT_OR_DEFAULT(behavior, default)
#elifdef ENABLE_CP1252_ALT_CODES
  #define OS_SELECT(default, behavior, i3, i4) OS_SELECT_OR_DEFAULT(behavior, default)
#else
  #define OS_SELECT(behavior, i2, i3, i4) behavior
#endif

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
 * Dead Keys
 */

#define DK_CIR            &kp      LBKT                               // dead circumflex
#define DI_CIR            &digraph LBKT
#define DK_DIA            &kp      LBRC                               // dead diaeresis
#define DI_DIA            &digraph LBRC
#define DK_GRV OS_SELECT( &kp      RA(N9) ,, &kp      NUHS  , &none ) // dead grave (n/a on Linux)
#define DI_GRV OS_SELECT( &digraph RA(N9) ,, &digraph NUHS  , &kp   )
#define DK_TLD OS_SELECT( &kp      RA(N2) ,, &kp      RA(N) , &none ) // dead tilde (n/a on Linux)
#define DI_TLD OS_SELECT( &digraph RA(N2) ,, &digraph RA(N) , &kp   )

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

#define SA(key) RS(RA(key))

// first row             ( default       ,, macOS         , Linux         )
#define S_CARET OS_SELECT( &kp RA(N9)    ,, DI_CIR SPACE  ,               )
#define S_LT    OS_SELECT( &kp NUBS      ,, &kp GRAVE     ,               )
#define S_GT    OS_SELECT( &kp PIPE2     ,, &kp TILDE     ,               )
#define S_DLLR             &kp RBKT
#define S_PRCNT            &kp LS(SQT)
#define S_AT    OS_SELECT( &kp RA(N0)    ,, &kp NUBS      ,               )
#define S_AMPS             &kp N1
#define S_STAR  OS_SELECT( &kp BSLH      ,, &kp RBRC      ,               )
#define S_SQT              &kp N4
#define S_GRAVE OS_SELECT( DI_GRV SPACE  ,,               , &kp RA(N7)    )

// second row            ( default       ,, macOS         , Linux         )
#define S_LBRC  OS_SELECT( &kp RA(N4)    ,, &kp RA(N5)    ,               )
#define S_LPAR             &kp N5
#define S_RPAR             &kp MINUS
#define S_RBRC  OS_SELECT( &kp RA(EQUAL) ,, &kp RA(MINUS) ,               )
#define S_EQUAL            &kp EQUAL
#define S_BSLH  OS_SELECT( &kp RA(N8)    ,, &kp SA(DOT)   ,               )
#define S_PLUS  OS_SELECT( &kp PLUS      ,, &kp QMARK     ,               )
#define S_MINUS OS_SELECT( &kp N6        ,, &kp EQUAL     ,               )
#define S_FSLH             &kp LS(DOT)
#define S_DQT              &kp N3

// third row             ( default       ,, macOS         , Linux         )
#define S_TILDE OS_SELECT( DI_TLD SPACE  ,,               , &kp RA(N2)    )
#define S_LBKT  OS_SELECT( &kp RA(N5)    ,, &kp SA(N5)    ,               )
#define S_RBKT  OS_SELECT( &kp RA(EQUAL) ,, &kp SA(MINUS) ,               )
#define S_UNDER OS_SELECT( &kp N8        ,, &kp PLUS      ,               )
#define S_HASH  OS_SELECT( &kp RA(N3)    ,, &kp PIPE2     ,               )
#define S_PIPE  OS_SELECT( &kp RA(N6)    ,, &kp SA(L)     ,               )
#define S_EXCL  OS_SELECT( &kp FSLH      ,, &kp N8        ,               )
#define S_SEMI             &kp COMMA
#define S_COLON            &kp DOT
#define S_QMARK            &kp LS(M)

// extra                 ( default       ,, macOS         , Linux         )
#define S_COMMA            &kp M
#define S_DOT              &kp LS(COMMA)
#define S_MONEY OS_SELECT( &kp RA(E)     ,, &kp RA(RBKT)  ,               )

/**
 * Non-ASCII Symbols
 */

// lowercase: é à è ù ç
#define C_EACU &kp N2  // é
#define C_AGRV &kp N0  // à
#define C_EGRV &kp N7  // è
#define C_UGRV &kp SQT // ù
#define C_CCDL &kp N9  // ç

// uppercase: É À È Ù Ç   ( default   , CP1252                     , macOS     , Linux     )
#define SC_EACU OS_SELECT ( &kp LS(E) , CP1252_UPPERCASE_E_ACUTE   , &caps N2  , &caps N2  ) // É
#define SC_AGRV OS_SELECT ( &kp LS(A) , CP1252_UPPERCASE_A_GRAVE   , &caps N0  , &caps N0  ) // À
#define SC_EGRV OS_SELECT ( &kp LS(E) , CP1252_UPPERCASE_E_GRAVE   , &caps N7  , &caps N7  ) // È
#define SC_UGRV OS_SELECT ( &kp LS(U) , CP1252_UPPERCASE_U_GRAVE   , &caps SQT , &caps SQT ) // Ù
#define SC_CCDL OS_SELECT ( &kp LS(C) , CP1252_UPPERCASE_C_CEDILLA , &caps N9  , &caps N9  ) // Ç

// circumflex
#define  C_ACRC DI_CIR    Q  // â
#define SC_ACRC DI_CIR RS(Q) // Â
#define  C_ECRC DI_CIR    E  // ê
#define SC_ECRC DI_CIR RS(E) // Ê
#define  C_ICRC DI_CIR    I  // î
#define SC_ICRC DI_CIR RS(I) // Î
#define  C_OCRC DI_CIR    O  // ô
#define SC_OCRC DI_CIR RS(O) // Ô
#define  C_UCRC DI_CIR    U  // û
#define SC_UCRC DI_CIR RS(U) // Û
#define  C_YCRC DI_CIR    Y  // ŷ
#define SC_YCRC DI_CIR RS(Y) // Ŷ

// diaeresis
#define  C_ADIA DI_DIA    A  // ä
#define SC_ADIA DI_DIA RS(A) // Ä
#define  C_EDIA DI_DIA    E  // ë
#define SC_EDIA DI_DIA RS(E) // Ë
#define  C_IDIA DI_DIA    I  // ï
#define SC_IDIA DI_DIA RS(I) // Ï
#define  C_ODIA DI_DIA    O  // ö
#define SC_ODIA DI_DIA RS(O) // Ö
#define  C_UDIA DI_DIA    U  // ü
#define SC_UDIA DI_DIA RS(U) // Ü
#define  C_YDIA DI_DIA    Y  // ÿ
#define SC_YDIA DI_DIA RS(Y) // Ÿ

// tilde
#define  C_NTLD DI_TLD    N  // ñ
#define SC_NTLD DI_TLD LS(N) // Ñ

// œ, æ, ß              ( default              , CP1252              , macOS     , Linux     )
#define  C_OE OS_SELECT ( &digraph    O     E  , CP1252_LOWERCASE_OE , &kp RA(O) ,           ) // œ
#define SC_OE OS_SELECT ( &digraph LS(O) LS(E) , CP1252_UPPERCASE_OE , &kp SA(O) ,           ) // œ
#define  C_AE OS_SELECT ( &digraph    Q     E  , CP1252_LOWERCASE_AE , &kp RA(Q) , &kp RA(Q) ) // æ
#define SC_AE OS_SELECT ( &digraph LS(Q) LS(E) , CP1252_UPPERCASE_AE , &kp SA(Q) , &kp SA(Q) ) // Æ
#define  C_SZ OS_SELECT ( &digraph    S     S  , CP1252_LOWERCASE_SZ , &kp RA(B) , &kp RA(S) ) // ß

// punctuation            ( default        , CP1252                    , macOS         , Linux         )
#define C_LODQT OS_SELECT ( &none          , CP1252_LOW_DOUBLE_QUOTE   ,               ,               ) // „
#define C_LDQT  OS_SELECT ( &none          , CP1252_LEFT_DOUBLE_QUOTE  ,               ,               ) // “
#define C_RDQT  OS_SELECT ( &none          , CP1252_RIGHT_DOUBLE_QUOTE ,               ,               ) // ”
#define C_LGQT  OS_SELECT ( &kp N3         , CP1252_LEFT_GUILLEMET     , &kp RA(N7)    ,               ) // «
#define C_RGQT  OS_SELECT ( &kp N3         , CP1252_RIGHT_GUILLEMET    , &kp SA(N7)    ,               ) // »
#define C_APOS  OS_SELECT ( &kp N4         , CP1252_RIGHT_SINGLE_QUOTE , &kp N4        ,               ) // ’
#define C_NDASH OS_SELECT ( &digraph N6 N6 , CP1252_EN_DASH            , &kp SA(EQUAL) ,               ) // –
#define C_MDASH OS_SELECT ( &digraph N6 N6 , CP1252_EM_DASH            , &kp RA(EQUAL) ,               ) // —
#define C_ELLIP OS_SELECT ( &ellipsis      , CP1252_ELLIPSIS           , &kp RA(COMMA) ,               ) // …
#define C_BLLT  OS_SELECT ( S_MINUS        , CP1252_BULLET             , &kp SA(COMMA) ,               ) // •
#define C_MDOT  OS_SELECT ( S_DOT          , CP1252_MIDDLE_DOT         ,               ,               ) // ·
#define C_LCXE  OS_SELECT ( &none          , CP1252_INVERTED_XMARK     , &kp RA(N8)    , &kp SA(N1)    ) // ¡
#define C_KRAMQ OS_SELECT ( &none          , CP1252_INVERTED_QMARK     , &kp SA(M)     , &kp SA(MINUS) ) // ¿
#define C_FEM   OS_SELECT ( &none          , CP1252_FEMININE_ORDINAL   ,               ,               ) // ª
#define C_MASC  OS_SELECT ( &none          , CP1252_MASCULINE_ORDINAL  ,               ,               ) // º
#define C_NBSP  OS_SELECT ( &kp SPACE      , CP1252_NO_BREAK_SPACE     , &kp RA(SPACE) ,               )

// math                   ( default   , CP1252                , macOS         , Linux         )
#define C_EURO  OS_SELECT ( &kp RA(E) ,                       , &kp RA(RBKT)  ,               ) // €
#define C_CENT  OS_SELECT ( &kp C     , CP1252_CENT           ,               , &kp RA(C)     ) // ¢
#define C_MULT  OS_SELECT ( &kp X     , CP1252_MULTIPLICATION ,               , &kp SA(COMMA) ) // ×
#define C_MICRO OS_SELECT ( &kp PIPE  ,                       , &kp RA(SEMI)  ,               ) // µ
#define C_DEG               &kp UNDER                                                           // °
