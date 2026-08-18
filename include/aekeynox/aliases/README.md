Layout Aliasess
================================================================================

Every Ækeynox firmware is built for a specific host keyboard layout, i.e. the
layout that the host computer is configured for. (If this sentence makes no
sense to you, the host layout is probably US QWERTY, and you can skip the rest
of this file.)

- This is absolutely necessary to define the Symbols layer.
- This is nice to have for a few shortcuts in the Nav layer (cut, copy, paste…).
- This is required to handle non-ASCII layout adaptations and emulations.

This `aliases` directory contains the definitions of actions and symbols for each
host layout. This is trickier than it should be, because these non-ASCII layouts
can differ significantly from an OS to another, or have local variants. Even
[QWERTY-intl](qwerty_intl.h) has major differences between Windows, macOS and
Linux.


Supported Layouts
--------------------------------------------------------------------------------

Ækeynox aims to support the most common standard layouts. As a rule of thumb,
this starts with layouts that have a dedicated Apple keyboard, plus a couple
others:

| ☑  | Layout ID                | Used in…                          | Variant     |
|:--:|--------------------------|-----------------------------------|-------------|
| ✅ | `KB_LAYOUT_QWERTY`       | United States                     |
| ✅ | `KB_LAYOUT_QWERTY_INTL`  | United States / International     |
|    |
| ✅ | `KB_LAYOUT_AZERTY`       | France                            |
| 💡 | `KB_LAYOUT_AZERTY_BE`    | Belgium                           |
|    |
| ✅ | `KB_LAYOUT_QWERTY_BR`    | Brazil                            |
| 💡 | `KB_LAYOUT_QWERTY_CA`    | Canada                            | Multilingual
| 💡 | `KB_LAYOUT_QWERTY_CZ`    | Czech Republic                    | Programmers
| 🚧 | `KB_LAYOUT_QWERTY_DK`    | Denmark                           |
| ✅ | `KB_LAYOUT_QWERTY_ES`    | Spain                             |
| 💡 | `KB_LAYOUT_QWERTY_HR`    | Bosnia, Croatia, Serbia, Slovenia |
| 💡 | `KB_LAYOUT_QWERTY_HU`    | Hungary                           | 101-key
| ✅ | `KB_LAYOUT_QWERTY_IT`    | Italy                             | 142
| 🚧 | `KB_LAYOUT_QWERTY_IS`    | Iceland                           |
| ✅ | `KB_LAYOUT_QWERTY_LATAM` | Latin America                     |
| 💡 | `KB_LAYOUT_QWERTY_NL`    | Netherlands                       |
| 🚧 | `KB_LAYOUT_QWERTY_NO`    | Norway                            |
| 💡 | `KB_LAYOUT_QWERTY_PL`    | Poland                            | Programmers
| ✅ | `KB_LAYOUT_QWERTY_PT`    | Portugal                          |
| 💡 | `KB_LAYOUT_QWERTY_RO`    | Romania                           | Standard
| 🚧 | `KB_LAYOUT_QWERTY_SE`    | Sweden, Finland                   |
| 💡 | `KB_LAYOUT_QWERTY_TR`    | Turkey                            |
|    |
| ✅ | `KB_LAYOUT_QWERTZ_CH_DE` | Switzerland                       | German
| ✅ | `KB_LAYOUT_QWERTZ_CH_FR` | Switzerland                       | French
| 💡 | `KB_LAYOUT_QWERTZ_CZ`    | Czech Republic                    |
| ✅ | `KB_LAYOUT_QWERTZ_DE`    | Germany, Austria                  |
| 💡 | `KB_LAYOUT_QWERTZ_HU`    | Hungary                           |
| 💡 | `KB_LAYOUT_QWERTZ_SK`    | Slovakia                          |

Ækeynox also aims to support a few alternative layouts, especially the non-ASCII
ones:

- [x] KB_LAYOUT_BEPO
- [x] KB_LAYOUT_DVORAK
- [x] KB_LAYOUT_ERGOL
- [x] KB_LAYOUT_QWERTY_LAFAYETTE
- [ ] KB_LAYOUT_NEO


OS-Specific Considerations
--------------------------------------------------------------------------------

Non-ASCII layouts can differ significantly from an OS to another.
Even [QWERTY-intl](qwerty_intl.h) has major differences between Windows, macOS
and Linux.

### Windows

Windows is considered as the *de facto* reference: it’s well documented, it’s
printed on all non-Apple keyboards in the world, and any keyboard connected
to an Android device is considered as a Windows keyboard.

The main limitation is that these layouts support fewer non-ASCII characters
than their macOS or Linux counterparts. Some layouts even lack letters that are
part of the local alphabet, e.g. `Œ` (French ) for AZERTY, `ŀ` (Catalan) for
QWERTY-es, uppercase accented chars for AZERTY and QWERTY-it…

Some of the missing chars for Western European languages can be accessed by
[CP1252 alt codes](https://altcodeunicode.com/) (works with any Windows app).

Reference: [kbdlayout.info]

### macOS

Apple often modifies existing national layouts to their liking, and sometimes
use the same modified layout for several different countries:

- their AZERTY is shipped to both France and Belgium, and it’s *far* from the
  local Windows versions;
- their QWERTY-ro is specific to Romania, but it’s neither the Romanian standard
  nor the legacy QWERTZ-ro;
- their QWERTY-nl is just a QWERTY-intl with a € sign;

Reference: [keyshorts.com] (we couldn’t find any official source…)

### Linux

Linux keyboard drivers follow rather closely their Windows counterpart, but
there might be differences concerning dead keys or AltGr symbols.

Besides, for a single layout there may be dozens of variants, which usually
respect the Windows layout for printed keys but have additional dead keys or
AltGr symbols. This is neat for users, but those variants are not handled yet
by Ækeynox.

Reference: [xkeyboard-config]

[kbdlayout.info]:   https://kbdlayout.info/
[keyshorts.com]:    https://keyshorts.com/blogs/blog/37615873-how-to-identify-macbook-keyboard-localization
[xkeyboard-config]: https://xkeyboard-config.freedesktop.org/
