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
  - [Nordic](#nordic-todo) (Danish, Estonian, Faroese, Finnish, Icelandic, Norwegian, Swedish)
  - [Transalp](#transalp) (French, German, Italian)
  - [Transat](#transat-todo) (Portuguese, Spanish, Aranese, Basque, Catalan, Galician)
- [Layout-Specific Adaptations](#layout-specific-adaptations)
  - [AZERTY-1dk](#azerty-1dk-french)
  - [Bépolar](#bépolar-french)
  - [Other Layouts](#other-layouts)
- [Programmer’s QWERTY](#programmers-qwerty)
- [Six-Column Configurations](#six-column-configurations)
  - [QWERTY-intl](#qwerty-intl)
  - [Non-US QWERTY and QWERTZ](#non-us-qwerty-and-qwertz)
- [Resources](#resources)


Multilingual Adaptations
--------------------------------------------------------------------------------

Most West-European languages can be supported by three 1dk layers: Nordic,
Transalp, Transat. They can be used either on QWERTY or QWERTZ.

### Nordic

Recommended layouts:

- [ ] QWERTY-dk: Denmark
- [ ] QWERTY-is: Iceland
- [ ] QWERTY-no: Norway
- [ ] QWERTY-se: Sweden, Finland, Estonia (?)
- [ ] QWERTZ-de: Germany, Austria

```
    |---------------|---------------|  base
    |    q w e r t  |  y u i o p    |
    |    a s d f g  |  h j k l *    |
    |    z x c v b  |  n m , . -    |
    |---------------|---------------|

    |---------------|---------------|  1dk
    |    ä æ € £ þ  |    ü   ö      |
    |    å § ð ( )  |        ø ´    |
    |          ? !  |    µ          |
    |---------------|---------------|

    |---------------|---------------|  1dkShift
    |    Ä Æ     Þ  |    Ü   Ö      |
    |    Å § Ð      |        Ø      |
    |               |               |
    |---------------|---------------|
```

Supported languages:

- [ ] Swedish, Finnish, Estonian:  `å`, `ä`, `ö`
- [ ] Danish, Norwegian:           `å`, `æ`, `ø`
- [ ] Faroese:                     `å`, `æ`, `ø`, `ð`
- [ ] Icelandic:                   `þ`, `æ`, `ö`, `ð`, `áéíóúý` (+ diaeresis?)

This might be suitable for [Dutch](https://en.wikipedia.org/wiki/Dutch_orthography) as well:

> Dutch uses the acute accent to mark stress and the diaeresis (trema) to
> disambiguate diphthongs/triphthongs. Occasionally, other diacritics are used
> in loanwords and native onomatopoeic words (e.g. circumflex and grave accent
> for French loanwords).

### Transalp

Recommended layouts:

- [x] QWERTZ-ch: Switzerland, Luxembourg, Liechtenstein
- [x] QWERTZ-de: Germany, Austria
- [ ] QWERTY-it: Italy

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

Recommended layouts:

- [x] QWERTY-br: Brazil
- [x] QWERTY-latam: Latin America
- [x] QWERTY-es: Spain
- [x] QWERTY-pt: Portugal

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
    |    À   È      |    Ü Ï Ò      |
    |    Ã Õ Ç ¿ ¡  |  Ñ            |
    |---------------|---------------|
```

Supported languages (specific diacritics beside `ñ`, `ç` and `áéíóú`):

- [x] Portuguese: `à`, `ã`, `õ`, `^` (+ `ü`, deprecated)
- [x] Catalan:    `è`, `ò`, `ï`, `·`
- [x] Aranese:    `à`, `è`, `ò`
- [x] Galician:   none (?)
- [x] Basque:     none


Layout-Specific Adaptations
--------------------------------------------------------------------------------

### AZERTY-1dk (French)

AZERTY is arguably one of the worst keyboard layouts ever made: the <kbd>A</kbd>
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

For a better alternative, see <https://qwerty-lafayette.org>.
It can be emulated by Ækeynox on any AZERTY or QWERTY-intl host.

### Bépolar (French)

Bépo is a Dvorak-like layout for French, which has explicitly excluded ergonomic
keyboards from the very beginning of its development. Bépolar is a Bépo variant
that’s been designed *specifically* for ergonomic keyboards.

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

For a better alternative, see <https://ergol.org>.
It can be emulated by Ækeynox on any AZERTY or QWERTY-intl host.

### Other Layouts

Many other national layouts are still missing: Croatian, Hungarian, Turkish…

If you use one of these layouts, please open a ticket and we’ll work something
out.


Programmer’s QWERTY
--------------------------------------------------------------------------------

Many European languages in central or eastern Europe have a “Programmer’s QWERTY”
variant, with a QWERTY-ANSI base layer and special chars in an secondary layer
(often AltGr). This seems to be a natural fit for ergonomic keyboards.

However:

- some of these layouts cannot fit on a 3×10 grid, and require an adaptation;
- an option to replace the `SEMI` key by a dead AltGr could be nice.

If you use such a layout, please open a ticket and we’ll propose a dedicated
adaptation.


Six-Column Configurations
--------------------------------------------------------------------------------

The `USE_ALPHA_ON_OUTER_KEYS` option opens up another way to fit non-ASCII
layouts on an ergonomic keyboard.

### QWERTY-intl

When using QWERTY-intl, you *want* to enable `USE_ALPHA_ON_OUTER_KEYS` to have a
direct access to dead diacritics on the outer columns.
Here’s the default configuration:

```
    |---------------|---------------|
    |  ˝ q w e r t  |  y u i o p `  |
    |  ^ a s d f g  |  h j k l ; '  |
    |    z x c v b  |  n m , . /    |
    |---------------|---------------|
```

Depending on your main language, you might want to adjust the position of these
four extra keys in the `/include/aekeynox/outer_keys.h` file.

### Non-US QWERTY and QWERTZ

For other QWERTY and QWERTZ variants, the 6th column is kept on the right, while
the 7th column is moved to the left.

As an example, QWERTZ-de works okay with `USE_ALPHA_ON_OUTER_KEYS`:

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


Resources
--------------------------------------------------------------------------------

- [kbdlayout.info](https://kbdlayout.info/) for Windows
- [keyshorts.com](https://keyshorts.com/blogs/blog/37615873-how-to-identify-macbook-keyboard-localization#german) for macOS
