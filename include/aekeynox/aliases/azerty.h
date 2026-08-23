// France
// https://kbdlayout.info/kbdfr

/**
 * Action Combos
 */

#define X_UNDO  &cmd W
#define X_CUT   &cmd X
#define X_COPY  &cmd C
#define X_PASTE &cmd V
#define X_REDO  &cmd Y

#define X_CTL_W &kp LC(Z)
#define X_SAVE  &cmd S
#define X_ALL   &cmd Q

/**
 * Diacritics
 */

/ {
  behaviors {
    //                  , default                         , Linux               ,, macOS                          , iOS
    OSKEY_1_PARAM(di_tld, &digraph RA(N2) OSKEY_1ST_PARAM , &kp OSKEY_1ST_PARAM ,, &digraph RA(N) OSKEY_1ST_PARAM , )
    OSKEY_1_PARAM(di_grv, &digraph RA(N7) OSKEY_1ST_PARAM , &kp OSKEY_1ST_PARAM ,, &digraph NUHS  OSKEY_1ST_PARAM , )

    //           , default    , Linux ,, macOS     , iOS
    OSKEY(dk_tld , &kp RA(N2) , &none ,, &kp RA(N) , )
    OSKEY(dk_grv , &kp RA(N7) , &none ,, &kp NUHS  , )
  };
};

#define DI_TLD &di_tld
#define DK_TLD &dk_tld
#define DI_GRV &di_grv
#define DK_GRV &dk_grv

#define DI_CIR &digraph LBKT
#define DK_CIR &kp      LBKT
#define DI_DIA &digraph LBRC
#define DK_DIA &kp      LBRC

// A is [Q] in AZERTY
#define  C_ACIR DI_CIR    Q  // â
#define SC_ACIR DI_CIR LS(Q) // Â
#define  C_ADIA DI_DIA    Q  // ä
#define SC_ADIA DI_DIA LS(Q) // Ä

// special diacritics: é à è ù ç
#define  C_EACU &kp N2   // é
#define SC_EACU &sc_eacu // É
#define  C_AGRV &kp N0   // à
#define SC_AGRV &sc_agrv // À
#define  C_EGRV &kp N7   // è
#define SC_EGRV &sc_egrv // È
#define  C_UGRV &kp SQT  // ù
#define SC_UGRV &sc_ugrv // Ù
#define  C_CCDL &kp N9   // ç
#define SC_CCDL &sc_ccdl // Ç

#include "dead_keys.dtsi"

#define SA(key) RS(RA(key))

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &s_caret
#define S_LT    &s_lt
#define S_GT    &s_gt
#define S_DLLR  &kp RBKT
#define S_PRCNT &kp LS(SQT)
#define S_AT    &s_at
#define S_AMPS  &kp N1
#define S_STAR  &s_star
#define S_SQT   &kp N4
#define S_GRAVE &s_grave

// second row
#define S_LBRC  &s_lbrc
#define S_LPAR  &kp N5
#define S_RPAR  &kp MINUS
#define S_RBRC  &s_rbrc
#define S_EQUAL &kp EQUAL
#define S_BSLH  &s_bslh
#define S_PLUS  &s_plus
#define S_MINUS &s_minus
#define S_FSLH  &kp LS(DOT)
#define S_DQT   &kp N3

// third row
#define S_TILDE &s_tilde
#define S_LBKT  &s_lbkt
#define S_RBKT  &s_rbkt
#define S_UNDER &s_under
#define S_HASH  &s_hash
#define S_PIPE  &s_pipe
#define S_EXCL  &s_excl
#define S_SEMI  &kp COMMA
#define S_COLON &kp DOT
#define S_QMARK &kp LS(M)

// extra
#define S_COMMA &kp M
#define S_DOT   &kp LS(COMMA)
#define S_MONEY &s_money

/**
 * Non-ASCII Symbols
 */

// œ, æ, ß
#define  C_OE  &c_oe
#define SC_OE &sc_oe
#define  C_AE  &c_ae
#define SC_AE &sc_ae
#define  C_SZ  &c_sz

// punctuation
#define C_LODQT &c_lodqt
#define C_LDQT  &c_ldqt
#define C_RDQT  &c_rdqt
#define C_LGQT  &c_lgqt
#define C_RGQT  &c_rgqt
#define C_APOS  &c_apos
#define C_NDASH &c_ndash
#define C_MDASH &c_mdash
#define C_ELLIP &c_ellip
#define C_BLLT  &c_bllt
#define C_MDOT  &c_mdot
#define C_LCXE  &c_lcxe
#define C_KRAMQ &c_kramq
#define C_FEM   &c_fem
#define C_MASC  &c_masc
#define C_NBSP  &c_nbsp

// math
#define C_EURO  &c_euro
#define C_CENT  &c_cent
#define C_MULT  &c_mult
#define C_MICRO &c_micro
#define C_DEG   &kp UNDER

/**
 * Caps-Word
 */

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P \
    A  S  D  F  G    H  J  K  L  SEMI \
    Z  X  C  V  B    N

// FIXME: caps word currently has no oskey integration.
// We need different caps-word behaviors to handle the continue-list correctly
#define CAPS_WORD_CONTINUE_LIST N1 N2 N4 N6 N7 N8 N9 N0 SQT

/ {
  behaviors {
    // À È Ù     , default       , Linux      ,, macOS        , iOS
    OSKEY(sc_agrv, DI_GRV LS(A)  , &caps N0   ,, &caps N0     , ) // À
    OSKEY(sc_egrv, DI_GRV LS(E)  , &caps N7   ,, &caps N7     , ) // È
    OSKEY(sc_ugrv, DI_GRV LS(U)  , &caps SQT  ,, &caps SQT    , ) // Ù

    // É Ç       , default       , Linux      , Windows (CP1252)          , macOS     , iOS
    OSKEY(sc_eacu, &kp LS(E)     , &caps N2   , CP1252_UPPERCASE_E_ACUTE  , &caps N2  , ) // É
    OSKEY(sc_ccdl, &kp LS(C)     , &caps N9   , CP1252_UPPERCASE_C_CEDILLA, &caps N9  , ) // Ç

    // 1st row   , default       , Linux      ,, macOS        , iOS
    OSKEY(s_caret, &kp RA(N9)    ,            ,, DI_CIR SPACE , ) // ^
    OSKEY(s_lt   , &kp NUBS      ,            ,, &kp GRAVE    , ) // <
    OSKEY(s_gt   , &kp PIPE2     ,            ,, &kp TILDE    , ) // >
    OSKEY(s_at   , &kp RA(N0)    ,            ,, &kp NUBS     , ) // @
    OSKEY(s_star , &kp BSLH      ,            ,, &kp RBRC     , ) // *
    OSKEY(s_grave, DI_GRV SPACE  , &kp RA(N7) ,,              , ) // `

    // 2nd row   , default       , Linux      ,, macOS        , iOS
    OSKEY(s_lbrc , &kp RA(N4)    ,            ,, &kp RA(N5)   , ) // {
    OSKEY(s_rbrc , &kp RA(EQUAL) ,            ,, &kp RA(MINUS), ) // }
    OSKEY(s_bslh , &kp RA(N8)    ,            ,, &kp SA(DOT)  , ) // (backslash)
    OSKEY(s_plus , &kp PLUS      ,            ,, &kp QMARK    , ) // +
    OSKEY(s_minus, &kp N6        ,            ,, &kp EQUAL    , ) // -

    // 3nd row   , default       , Linux      ,, macOS        , iOS
    OSKEY(s_tilde, DI_TLD SPACE  , &kp RA(N2) ,,              , ) // ~
    OSKEY(s_lbkt , &kp RA(N5)    ,            ,, &kp SA(N5)   , ) // [
    OSKEY(s_rbkt , &kp RA(MINUS) ,            ,, &kp SA(MINUS), ) // ]
    OSKEY(s_under, &kp N8        ,            ,, &kp PLUS     , ) // _
    OSKEY(s_hash , &kp RA(N3)    ,            ,, &kp PIPE2    , ) // #
    OSKEY(s_pipe , &kp RA(N6)    ,            ,, &kp SA(L)    , ) // |
    OSKEY(s_excl , &kp FSLH      ,            ,, &kp N8       , ) // !

    // extra     , default       , Linux      ,, macOS        , iOS
    OSKEY(s_money, &kp RA(E)     ,            ,, &kp RA(RBKT) , ) // !

    // œ, æ, ß , default              , Linux     , Windows (CP1252)    , macOS     , iOS
    OSKEY( c_oe, &digraph    O     E  ,           , CP1252_LOWERCASE_OE , &kp RA(O) , ) // œ
    OSKEY(sc_oe, &digraph LS(O) LS(E) ,           , CP1252_UPPERCASE_OE , &kp SA(O) , ) // œ
    OSKEY( c_ae, &digraph    Q     E  , &kp RA(Q) , CP1252_LOWERCASE_AE , &kp RA(Q) , ) // æ
    OSKEY(sc_ae, &digraph LS(Q) LS(E) , &kp SA(Q) , CP1252_UPPERCASE_AE , &kp SA(Q) , ) // Æ
    OSKEY( c_sz, &digraph    S     S  , &kp RA(S) , CP1252_LOWERCASE_SZ , &kp RA(B) , ) // ß

    // punct.    , default       , Linux         , Windows (CP1252)          , macOS         , iOS
    OSKEY(c_lodqt, &none         ,               , CP1252_LOW_DOUBLE_QUOTE   ,               , ) // „
    OSKEY(c_ldqt , &none         ,               , CP1252_LEFT_DOUBLE_QUOTE  ,               , ) // “
    OSKEY(c_rdqt , &none         ,               , CP1252_RIGHT_DOUBLE_QUOTE ,               , ) // ”
    OSKEY(c_lgqt , &kp N3        ,               , CP1252_LEFT_GUILLEMET     , &kp RA(N7)    , ) // «
    OSKEY(c_rgqt , &kp N3        ,               , CP1252_RIGHT_GUILLEMET    , &kp SA(N7)    , ) // »
    OSKEY(c_apos , &kp N4        ,               , CP1252_RIGHT_SINGLE_QUOTE , &kp N4        , ) // ’
    OSKEY(c_ndash, &digraph N6 N6,               , CP1252_EN_DASH            , &kp SA(EQUAL) , ) // –
    OSKEY(c_mdash, &digraph N6 N6,               , CP1252_EM_DASH            , &kp RA(EQUAL) , ) // —
    OSKEY(c_ellip, &ellipsis     ,               , CP1252_ELLIPSIS           , &kp RA(COMMA) , ) // …
    OSKEY(c_bllt , S_MINUS       ,               , CP1252_BULLET             , &kp SA(COMMA) , ) // •
    OSKEY(c_mdot , S_DOT         ,               , CP1252_MIDDLE_DOT         ,               , ) // ·
    OSKEY(c_lcxe , &none         , &kp SA(N1)    , CP1252_INVERTED_XMARK     , &kp RA(N8)    , ) // ¡
    OSKEY(c_kramq, &none         , &kp SA(MINUS) , CP1252_INVERTED_QMARK     , &kp SA(M)     , ) // ¿
    OSKEY(c_fem  , &none         ,               , CP1252_FEMININE_ORDINAL   ,               , ) // ª
    OSKEY(c_masc , &none         ,               , CP1252_MASCULINE_ORDINAL  ,               , ) // º
    OSKEY(c_nbsp , &kp SPACE     ,               , CP1252_NO_BREAK_SPACE     , &kp RA(SPACE) , )

    // math      , default       , Linux         , Windows (CP1252)          , macOS         , iOS
    OSKEY(c_euro , &kp RA(E)     ,               ,                           , &kp RA(RBKT)  , ) // €
    OSKEY(c_cent , &kp C         , &kp RA(C)     , CP1252_CENT               ,               , ) // ¢
    OSKEY(c_mult , &kp X         , &kp SA(COMMA) , CP1252_MULTIPLICATION     ,               , ) // ×
    OSKEY(c_micro, &kp PIPE      ,               ,                           , &kp RA(SEMI)  , ) // µ
  };
};
