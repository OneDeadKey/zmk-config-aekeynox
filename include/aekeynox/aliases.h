#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/pointing.h>


/**
 * Non-Alpha Actions
 */

// Keyboard Actions
#ifdef MACOS
  #define CMD LG               // Mac: Cmd key as main modifier
  #define X_PREV &kp LG(LBKT)
  #define X_NEXT &kp LG(RBKT)
#else
  #define CMD LC               // PC: Ctrl key as main modifier
  #define X_PREV &kp LA(LEFT)
  #define X_NEXT &kp LA(RIGHT)
#endif
#define X_SHTAB &kp RS(TAB)

// Mouse Actions
#define ZMK_POINTING_DEFAULT_SCRL_VAL 25  // default=10 (too slow)
#define X_MSC_L &msc SCRL_LEFT
#define X_MSC_D &msc SCRL_DOWN
#define X_MSC_U &msc SCRL_UP
#define X_MSC_R &msc SCRL_RIGHT


/**
 * Keyboard Layout
 */

// Non-US Layouts
#ifdef KB_LAYOUT_AZERTY
  #define SHIFTED_NUMBERS
  #include "aliases/azerty.h"
#elifdef KB_LAYOUT_QWERTY_BR
  #include "aliases/qwerty_br.h"
#elifdef KB_LAYOUT_QWERTY_ES
  #include "aliases/qwerty_es.h"
#elifdef KB_LAYOUT_QWERTY_LATAM
  #include "aliases/qwerty_latam.h"
#elifdef KB_LAYOUT_QWERTY_PT
  #include "aliases/qwerty_pt.h"
#elif defined KB_LAYOUT_QWERTZ_CH_DE || defined KB_LAYOUT_QWERTZ_CH_FR
  #include "aliases/qwertz_ch.h"
#elifdef KB_LAYOUT_QWERTZ_DE
  #include "aliases/qwertz_de.h"

// Altenrative Layouts
#elifdef KB_LAYOUT_BEPO
  #define SHIFTED_NUMBERS
  #include "aliases/bepo.h"
#elifdef KB_LAYOUT_BEPOLAR
  #include "aliases/bepolar.h"
#elifdef KB_LAYOUT_DVORAK
  #include "aliases/dvorak.h"
#elifdef KB_LAYOUT_ERGLACE
  #include "aliases/erglace.h"
#elifdef KB_LAYOUT_ERGOL
  #include "aliases/ergol.h"
#elifdef KB_LAYOUT_QWERTY_LAFAYETTE
  #include "aliases/qwerty_lafayette.h"

// US QWERTY
#elifdef KB_LAYOUT_QWERTY_INTL
  #include "aliases/qwerty_intl.h"
#else
  #include "aliases/qwerty.h"
#endif


/**
 * Numbers
 */

#ifdef SHIFTED_NUMBERS
  #define S_N0  &kp LS(N0)
  #define S_N1  &kp LS(N1)
  #define S_N2  &kp LS(N2)
  #define S_N3  &kp LS(N3)
  #define S_N4  &kp LS(N4)
  #define S_N5  &kp LS(N5)
  #define S_N6  &kp LS(N6)
  #define S_N7  &kp LS(N7)
  #define S_N8  &kp LS(N8)
  #define S_N9  &kp LS(N9)
#else
  #define S_N0  &kp N0
  #define S_N1  &kp N1
  #define S_N2  &kp N2
  #define S_N3  &kp N3
  #define S_N4  &kp N4
  #define S_N5  &kp N5
  #define S_N6  &kp N6
  #define S_N7  &kp N7
  #define S_N8  &kp N8
  #define S_N9  &kp N9
#endif
