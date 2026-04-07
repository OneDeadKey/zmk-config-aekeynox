#include <dt-bindings/zmk/keys.h>

// PC / Mac

#ifdef MACOS
#define CMD RG // Mac: Cmd key as main modifier
#else
#define CMD RC // PC: Ctrl key as main modifier
#endif

// Keyboard Layout

#ifdef KB_LAYOUT_ERGOL
#include "aliases/ergol.h"

#elifdef KB_LAYOUT_AZERTY
#define SHIFTED_NUMBERS
#include "aliases/azerty.h"

#elifdef KB_LAYOUT_QWERTY_LAFAYETTE
#include "aliases/qwerty_lafayette.h"

#else
#include "aliases/qwerty.h"

#endif

// Numbers

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

// Non-Alpha Actions

#define X_SHTAB &kp RS(TAB)
#define X_PREV  &kp LA(LEFT)
#define X_NEXT  &kp LA(RIGHT)
