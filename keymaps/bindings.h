/**
 * By default, Selenium defines keymap bindings for 3x6+3 keyboards (42 keys), as folows:
 *
 *   Tab   , QWERT , YUIOP , BkSpc ,             LOUT1,  LROW1,  RROW1,  ROUT1,
 *   Esc   , ASDFG , HJKL: , Enter ,      =>     LOUT2,  LROW2,  RROW2,  ROUT2,
 *   Shift , ZXCVB , NM<>? , Shift ,             LOUT3,  LROW3,  RROW3,  ROUT3,
 *    LT1, LT2, LT3, RT3, RT2, RT1               LT1, LT2, LT3,  RT3, RT2, RT1
 *
 * Where:
 *
 *   LROW[1-3], RROW[1-3]: keys on the left/right main rows (usually letter/punctuation keys)
 *   LOUT[1-3], ROUT[1-3]: keys on the left/right outer columns (usually special keys)
 *     LT[1-3],   RT[1-3]: keys on the left/right thumb clusters (usually Space or modifiers/layers)
 */

// This macro concatenates Selenium keymap bindings so they can be used by ZMK:
#ifndef SELENIUM_KEYMAP_BINDINGS
#define SELENIUM_KEYMAP_BINDINGS(LOUT1,  LROW1,  RROW1,  ROUT1, \
                                 LOUT2,  LROW2,  RROW2,  ROUT2, \
                                 LOUT3,  LROW3,  RROW3,  ROUT3, \
                                 LT1, LT2, LT3,  RT3, RT2, RT1) \
    LOUT1 LROW1 RROW1 ROUT1 \
    LOUT2 LROW2 RROW2 ROUT2 \
    LOUT3 LROW3 RROW3 ROUT3 \
    LT1 LT2 LT3 RT3 RT2 RT1
#endif

// This macro can be overridden in /config/*.keymap for keyboards with more or less than 42 keys.
