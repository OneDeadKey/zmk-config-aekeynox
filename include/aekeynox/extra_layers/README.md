1dk Adaptations
================================================================================

Most non-ASCII layouts don’t fit on a 3×10 grid. A common approach is to rely on
combos to fit extra symbols, which may seem like a straight-forward solution;
but in our experience, it’s very frustrating to use — especially on optimized
layouts, or when the target layout requires a lot of extra symbols.

Our approach is to use a *positional dead key* to access a one-shot layer
containing all extra symbols. It doesn’t add any extra key stroke compared to a
combo or AltGr approach, and the timing is much easier to get right, especially
at high typing speeds. *“One dead key to type them all”*, hence our org name
(OneDeadKey).

We refer to this positional dead key as <kbd>1dk</kbd>, and use the `*` symbol
to represent it.
When possible, it’s placed on the `SEMI` key (QWERTY’s <kbd>;:</kbd> key).

- [Multilingual Adaptations](#multilingual-adaptations)
  - [Nordic](#nordic): Denmark, Estonia, Finland, Iceland, Norway, Sweden
  - [Transalp](#transalp): Germany, Italy, Switzerland, Luxembourg
  - [Transat](#transat): Brazil, Latin America, Spain, Portugal
- [Programmers’ QWERTY](#programmers-qwerty)
  - [Recommended](#recommended): Latvia, Poland, Romania
  - [Not Recommended](#not-recommended): Czechia, Lithuania
- [Layout-Specific Adaptations](#layout-specific-adaptations)
  - [AZERTY-1dk](#azerty-1dk)
  - [Bépolar](#bépolar)
  - [Other Layouts](#other-layouts)
- [Six-Column Configurations](#six-column-configurations)
  - [QWERTY-intl](#qwerty-intl)
  - [Non-ASCII Layouts](#non-ascii-layouts)


Multilingual Adaptations
--------------------------------------------------------------------------------

Most West-European languages can be supported by three 1dk layers: Nordic,
Transalp, Transat. They can be used either on QWERTY or QWERTZ, they’re
activated by default on relevant non-ASCII layouts, and they can be explicitly
selected with one of the following definitions:

- [x] `KB_EXTRA_LAYERS_NORDIC`
- [x] `KB_EXTRA_LAYERS_TRANSALP`
- [x] `KB_EXTRA_LAYERS_TRANSAT`

### Nordic

Activated by default on:

- [x] [`KB_LAYOUT_QWERTY_DK`]: Denmark
- [ ] [`KB_LAYOUT_QWERTY_IS`]: Iceland
- [x] [`KB_LAYOUT_QWERTY_NO`]: Norway
- [x] [`KB_LAYOUT_QWERTY_SE`]: Sweden, Finland

Suitable for:

- [x] [`KB_LAYOUT_QWERTY_INTL`]
- [ ] [`KB_LAYOUT_QWERTY_NL`]: Netherlands (but `^` and `˝` are missing)
- [x] [`KB_LAYOUT_QWERTZ_DE`]: Germany, Austria

```
    |---------------|---------------|  base
    |    q w e r t  |  y u i o p    |
    |    a s d f g  |  h j k l *    |
    |    z x c v b  |  n m , . -    |
    |---------------|---------------|

    |---------------|---------------|  1dk
    |    å æ € £ þ  |    ü õ ö      |
    |    ä š ð ( )  |        ø ´    |
    |    ž ß § ? !  |    µ          |
    |---------------|---------------|

    |---------------|---------------|  1dkShift
    |    Å Æ     Þ  |    Ü Õ Ö      |
    |    Ä Š Ð      |        Ø      |
    |    Ž          |               |
    |---------------|---------------|
```

Supported languages:

- [x] Swedish, Finnish:  `å`, `ä`, `ö`
- [x] Danish, Norwegian: `å`, `æ`, `ø`
- [x] Estonian:          `õ`, `äöü`, `šž`
- [x] Faroese:           `å`, `æ`, `ø`, `ð`
- [x] German:            `ß`, `äöü`
- [x] Icelandic:         `þ`, `æ`, `ö`, `ð`, `áéíóúý`

### Transalp

Activated by default on:

- [x] [`KB_LAYOUT_QWERTZ_CH_DE`]: Switzerland, Luxembourg (German)
- [x] [`KB_LAYOUT_QWERTZ_CH_FR`]: Switzerland, Luxembourg (French)
- [x] [`KB_LAYOUT_QWERTZ_DE`]: Germany, Austria
- [x] [`KB_LAYOUT_QWERTY_IT`]: Italy

Suitable for:

- [x] [`KB_LAYOUT_QWERTY_INTL`]

```
    |---------------|---------------|  base
    |    q w e r t  |  z u i o p    |
    |    a s d f g  |  h j k l *    |
    |    y x c v b  |  n m , . -    |
    |---------------|---------------|

    |---------------|---------------|  1dk
    |    à é è € ¢  |    ù ì ò      |
    |    ä ß ë ( )  |    ü ï ö ^    |
    |    ÿ § ç ? !  |    µ     ¬    |
    |---------------|---------------|

    |---------------|---------------|  1dkShift
    |    À É È £    |    Ù Ì Ò      |
    |    Ä ẞ Ë      |    Ü Ï Ö      |
    |    Ÿ   Ç      |               |
    |---------------|---------------|
```

Supported languages:

- [x] German: `äöü` (diaeresis), `ß`
- [x] French: `é` (acute), `èàù` (grave), `ç` (cedilla), `âêîôû` (circumflex), `ëïüÿ` (diaeresis)
- [x] Italian: `é` (acute), `àèìòù` (grave)

### Transat

Activated by default on:

- [x] [`KB_LAYOUT_QWERTY_BR`]: Brazil
- [x] [`KB_LAYOUT_QWERTY_LATAM`]: Latin America
- [x] [`KB_LAYOUT_QWERTY_ES`]: Spain
- [x] [`KB_LAYOUT_QWERTY_PT`]: Portugal

Suitable for:

- [x] [KB_LAYOUT_QWERTY_INTL]

```
    |---------------|---------------|  base
    |    q w e r t  |  y u i o p    |
    |    a s d f g  |  h j k l *    |
    |    z x c v b  |  n m , . -    |
    |---------------|---------------|

    |---------------|---------------|  1dk
    |    ª º é € ¢  |    ú í ó      |
    |    à § è ( )  |  · ü ï ò ^    |
    |    ã õ ç ? !  |  ñ µ     ¬    |
    |---------------|---------------|

    |---------------|---------------|  1dkShift
    |        É £    |    Ú Í Ó      |
    |    À   È « »  |    Ü Ï Ò      |
    |    Ã Õ Ç ¿ ¡  |  Ñ            |
    |---------------|---------------|
```

Specific diacritics beside `ñ`, `ç` and `áéíóú`:

- [x] Portuguese: `à`, `ã`, `õ`, `^` (+ `ü`, deprecated)
- [x] Catalan:    `è`, `ò`, `ï`, `·`
- [x] Aranese:    `à`, `è`, `ò`
- [x] Galician:   none (?)
- [x] Basque:     none


Programmers’ QWERTY
--------------------------------------------------------------------------------

Some central/eastern European languages have a *“Programmers’ QWERTY”* variant,
with a QWERTY-ANSI base layer and special chars in a secondary layer (AltGr).
These layouts are often preferred to the standard layouts, especially in tech —
and they’re a natural fit for ergonomic keyboards.

### Recommended

On these layouts, special chars are on the base letters, which works fine with
compact keyboards:

- [x] [`KB_LAYOUT_QWERTY_LV`]: Latvia
- [x] [`KB_LAYOUT_QWERTY_PL`]: Poland
- [x] [`KB_LAYOUT_QWERTY_RO`]: Romania

By default (= when `KB_LAYOUT_*` is not specified), <kbd>AltGr</kbd> and
<kbd>Shift</kbd>‑<kbd>AltGr</kbd> are required to access special chars:

- <kbd>AltGr</kbd> is on <kbd>Nav</kbd>+<kbd>Symbols</kbd>
- <kbd>AltGr</kbd>+<kbd>Shift</kbd> is on <kbd>Shift</kbd>+<kbd>Symbols</kbd>

When `KB_LAYOUT_*` *is* specified, the semicolon (`SEMI`) becomes a dead key:

- semicolon (<kbd>;</kbd>) is a dead <kbd>AltGr</kbd>
  (semicolon + Space makes a semicolon)
- colon (<kbd>:</kbd>) is a dead <kbd>AltGr</kbd>+<kbd>Shift</kbd>
  (colon + Space makes a colon)

### Not Recommended

On these layouts, special chars are in the number row, which is a pain with
compact keyboards:

- [ ] [`KB_LAYOUT_QWERTY_CZ`]: Czechia
- [ ] [`KB_LAYOUT_QWERTY_LT`]: Lithuania

Specific adaptations would be required.


Layout-Specific Adaptations
--------------------------------------------------------------------------------

### AZERTY-1dk

- [x] [`KB_LAYOUT_AZERTY`]: France
- [ ] [`KB_LAYOUT_AZERTY_BE`]: Belgium

AZERTY is arguably one of the worst keyboard layouts ever made: <kbd>A</kbd>
is not on the home row, the dot and the numbers require <kbd>Shift</kbd>,
accented chars on the numbers’ row…

AZERTY-1dk replaces the <kbd>ù</kbd> key with <kbd>1dk</kbd>, on the 6th column.

```
    |---------------|---------------|  base
    |    a z e r t  |  y u i o p    |
    |  ² q s d f g  |  h j k l m *  |
    |    z x c v b  |  n , ; ; !    |
    |---------------|---------------|

    |---------------|---------------|  1dk
    |    à é è € ¢  |    ù ï œ      |
    |    â ß ê ( )  |    û î ô µ ˝  |
    |        ç      |               |
    |---------------|---------------|

    |---------------|---------------|  1dkShift
    |    À É È £    |    Ù Ï Œ      |
    |    Â   Ê      |    Û Î P      |
    |        Ç      |               |
    |---------------|---------------|
```

For a better alternative, see QWERTY-Lafayette:

- [x] [`KB_LAYOUT_QWERTY_LAFAYETTE`]

It’s a QWERTY-ANSI base with a French 1dk layer, which makes it work out of the
box on any ergonomic keyboard.
It can be [emulated by Ækeynox] on any AZERTY or QWERTY-intl host.

### Bépolar

- [x] [`KB_LAYOUT_BEPO`]: Bépo on the host, Bépolar emulation on the keyboard
- [x] [`KB_LAYOUT_BEPOLAR`]: Bépolar on the host

Bépo is a Dvorak-like layout for French, which has explicitly excluded ergonomic
keyboards from the very beginning of its development. Bépolar is an adaptation
of Bépo for ergonomic keyboards.

```
    |---------------|---------------|  base
    |    b m p o w  |  z v d l j    |
    |    a e i u ,  |  c t s r n    |
    |    - y x . k  |  * q g h f    |
    |---------------|---------------|

    |---------------|---------------|  1dk
    |    â û î ô œ  |    ŭ          |
    |    à ù é è ê  |  ç ™ ß ® ñ    |
    |    — ŷ _ … æ  |  ˝ – µ ©      |
    |---------------|---------------|

    |---------------|---------------|  1dkShift
    |    Â Û Î Ô Œ  |    Ŭ          |
    |    À Ù É È Ê  |  Ç       Ñ    |
    |      Ŷ     Æ  |      Μ        |
    |---------------|---------------|
```

For a better alternative, see Ergo‑L:

- [x] [`KB_LAYOUT_ERGOL`]

It has been developed specifically for compact and ergonomic keyboards, and
optimized for both French and English with a Colemak-DH approach.
It can be [emulated by Ækeynox] on any AZERTY or QWERTY-intl host.

### QWERTZ-cz-1dk

- [x] [`KB_LAYOUT_QWERTZ_CZ`]: Czechia

QWERTZ-cz-1dk replaces the <kbd>ů</kbd> key with <kbd>1dk</kbd>:

```
    |---------------|---------------|  base
    |    q w e r t  |  z u i o p    |
    |    a s d f g  |  h j k l *    |
    |    z x c v b  |  n m , . -    |
    |---------------|---------------|

    |---------------|---------------|  1dk
    |    € ě é ř ť  |  ž ú í ó      |
    |    á š ď      |    ů          |
    |    ý ß č      |  ň            |
    |---------------|---------------|

    |---------------|---------------|  1dkShift
    |      Ě É Ř Ť  |  Ž Ú Í Ó      |
    |    Á Š Ď      |    Ů          |
    |    Ý § Č      |  Ň            |
    |---------------|---------------|
```

- 1dk is a dead acute accent on vowels (á, é, í, ó, ú, ý)
- 1dk is a dead caron/háček on consonants (č, ď, ň, ř, š, ť, ž)
- 1dk is a dead ring below U (ů)
- exception: ě (caron/háček) left to E

### Other Layouts

Many other national layouts are still missing, among which:

- [ ] [`KB_LAYOUT_QWERTY_CA`]: Canada Multilingual Standard
- [ ] [`KB_LAYOUT_QWERTY_HR`]: Bosnia, Croatia, Serbia, Slovenia (all almost identical)
- [ ] [`KB_LAYOUT_QWERTY_LT`]: Lithuania
- [ ] [`KB_LAYOUT_QWERTY_NL`]: Netherlands
- [ ] [`KB_LAYOUT_QWERTY_TR`]: Turkey
- [ ] [`KB_LAYOUT_QWERTZ_HU`]: Hungary
- [ ] [`KB_LAYOUT_QWERTZ_SK`]: Slovakia

If you use one of these layouts, please open a ticket and we’ll work something
out.

[emulated by Ækeynox]: ../emulations#non-ascii-layouts


Six-Column Configurations
--------------------------------------------------------------------------------

On 3×6 keyboards, you could use four extra alpha keys on outer columns to fit
some non-ASCII layouts.


### QWERTY-intl

When using QWERTY-intl without selecting a 1dk layer explicitly, these four
extra keys are enabled to provide a direct access to dead diacritics on outer
columns. Here’s the default configuration:

```
    |---------------|---------------|
    |  ˝ q w e r t  |  y u i o p `  |
    |  ^ a s d f g  |  h j k l ; '  |
    |    z x c v b  |  n m , . /    |
    |---------------|---------------|
```

Depending on your main language, you might want to adjust the position of these
four extra keys in the `/include/aekeynox/outer_keys.h` file.

### Non-ASCII Layouts

For AZERTY and other QWERTY and QWERTZ variants, you can force the use of these
outer columns with the `KB_EXTRA_LAYERS_NONE` option: the 6th column is kept on
the right, while the 7th column is moved to the left.

As an example, QWERTZ-de works okay with `KB_EXTRA_LAYERS_NONE`:

```
    |---------------|---------------|
    |  + q w e r t  |  z u i o p ü  |
    |  # a s d f g  |  h j k l ö ä  |
    |    z x c v b  |  n m , . -    |
    |---------------|---------------|
```

With this, `ÖÄÜ` can now be accessed directly — though with a lateral extension
of the pinky. `ẞ` is missing, but `/include/aekeynox/outer_keys.h` could be
customized to include it under the left pinky.

We still (highly) recommend using a `1dk` layer instead (both `Nordic` and
`Transalp` work fine with German); but *your keyboard, your rules!*


[`KB_LAYOUT_QWERTY`]:           https://kbdlayout.info/kbdus
[`KB_LAYOUT_QWERTY_INTL`]:      https://kbdlayout.info/kbdusx

[`KB_LAYOUT_AZERTY`]:           https://kbdlayout.info/kbdfr
[`KB_LAYOUT_AZERTY_BE`]:        https://kbdlayout.info/kbdbe

[`KB_LAYOUT_QWERTY_BR`]:        https://kbdlayout.info/kbdbr
[`KB_LAYOUT_QWERTY_CA`]:        https://kbdlayout.info/kbdcan
[`KB_LAYOUT_QWERTY_CZ`]:        https://kbdlayout.info/kbdcz2
[`KB_LAYOUT_QWERTY_DK`]:        https://kbdlayout.info/kbdda
[`KB_LAYOUT_QWERTY_EE`]:        https://kbdlayout.info/kbdest
[`KB_LAYOUT_QWERTY_ES`]:        https://kbdlayout.info/kbdsp
[`KB_LAYOUT_QWERTY_HR`]:        https://kbdlayout.info/kbdycl
[`KB_LAYOUT_QWERTY_HU`]:        https://kbdlayout.info/kbdhu1
[`KB_LAYOUT_QWERTY_IT`]:        https://kbdlayout.info/kbdit142
[`KB_LAYOUT_QWERTY_IS`]:        https://kbdlayout.info/kbdic
[`KB_LAYOUT_QWERTY_LATAM`]:     https://kbdlayout.info/kbdla
[`KB_LAYOUT_QWERTY_LV`]:        https://kbdlayout.info/kbdlvst
[`KB_LAYOUT_QWERTY_LT`]:        https://kbdlayout.info/kbdlt1
[`KB_LAYOUT_QWERTY_NL`]:        https://kbdlayout.info/kbdne
[`KB_LAYOUT_QWERTY_NO`]:        https://kbdlayout.info/kbdno
[`KB_LAYOUT_QWERTY_PL`]:        https://kbdlayout.info/kbdpl1
[`KB_LAYOUT_QWERTY_PT`]:        https://kbdlayout.info/kbdpo
[`KB_LAYOUT_QWERTY_RO`]:        https://kbdlayout.info/kbdropr
[`KB_LAYOUT_QWERTY_SE`]:        https://kbdlayout.info/kbdse
[`KB_LAYOUT_QWERTY_TR`]:        https://kbdlayout.info/kbdtuq

[`KB_LAYOUT_QWERTZ_CH_DE`]:     https://kbdlayout.info/kbdsg
[`KB_LAYOUT_QWERTZ_CH_FR`]:     https://kbdlayout.info/kbdsf
[`KB_LAYOUT_QWERTZ_CZ`]:        https://kbdlayout.info/kbdcz
[`KB_LAYOUT_QWERTZ_DE`]:        https://kbdlayout.info/kbdgr
[`KB_LAYOUT_QWERTZ_HU`]:        https://kbdlayout.info/kbdhu
[`KB_LAYOUT_QWERTZ_PL`]:        https://kbdlayout.info/kbdpl
[`KB_LAYOUT_QWERTZ_SK`]:        https://kbdlayout.info/kbdsl

[`KB_LAYOUT_BEPO`]:             https://kbdlayout.info/kbdfrnb
[`KB_LAYOUT_BEPOLAR`]:          https://ergol.org/lafayette/bépolar
[`KB_LAYOUT_DVORAK`]:           https://kbdlayout.info/kbddv
[`KB_LAYOUT_ERGOL`]:            https://ergol.org
[`KB_LAYOUT_ERGLACE`]:          https://ergol.org/erglace
[`KB_LAYOUT_QWERTY_LAFAYETTE`]: https://qwerty-lafayette.org
[`KB_LAYOUT_NEO`]:              https://neo-layout.org
