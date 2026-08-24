Layout Emulations
====================================================================================================

Using a non-QWERTY layout can be done in two ways:

- either by setting the host computer to use this layout, in which case `KB_LAYOUT_*` is enough
  (sometimes [with an extra layer as 1dk adaptation](../extra_layers#1dk-adaptations));
- or by letting the keyboard *emulate* a keyboard layout for a host using a default layout
  — and that’s what `KB_EMULATION_*` is about.


ASCII Layouts
----------------------------------------------------------------------------------------------------

- [x] [`KB_EMULATION_COLEMAK`]
- [x] [`KB_EMULATION_COLEMAK_DH`]
- [x] [`KB_EMULATION_DVORAK`]
- [ ] [`KB_EMULATION_STURDY`]
- [ ] [`KB_EMULATION_WORKMAN`]

Keyboard layouts that are optimized for English are usually just a rearrangement of QWERTY keys:
Dvorak, Colemak, Workman, Sturdy… all these layouts can be perfectly emulated by the keyboard.

To emulate Dvorak for QWERTY hosts, just uncomment this line in `include/aekeynox/settings.h`:

```c
#define KB_EMULATION_DVORAK
```

[`KB_EMULATION_COLEMAK`]:    https://kbdlayout.info/kbdcmk
[`KB_EMULATION_COLEMAK_DH`]: https://colemakmods.github.io/mod-dh/
[`KB_EMULATION_DVORAK`]:     https://kbdlayout.info/kbddv
[`KB_EMULATION_STURDY`]:     https://oxey.dev/layouts/sturdy/
[`KB_EMULATION_WORKMAN`]:    https://workmanlayout.org/


Non-ASCII Layouts
----------------------------------------------------------------------------------------------------

- [x] [`KB_EMULATION_ERGOL`]
- [ ] [`KB_EMULATION_NEO`]
- [x] [`KB_EMULATION_QWERTY_LAFAYETTE`]

Emulating layouts designed for other languages is trickier.

First, a keyboard layout with extended characters is required on the host computer.
That’s our emulation target.

- [QWERTY-intl] is a sane default for west-European languages. It’s available on every computer,
  it just has to be enabled.
- Local layouts (AZERTY, QWERTZ, non-US QWERTY variants…) are good emulation targets as well.
  Not as versatile as QWERTY-intl, but they’re the local default.

As an example, to emulate Ergol for AZERTY hosts, uncomment these two lines:

```c
#define KB_LAYOUT_AZERTY
#define KB_EMULATION_ERGOL
```

Now, here’s the tricky part:
these non-US layouts are likely to differ significantly across Windows, macOS, Linux.
QWERTY-intl is probably the most consistent one, but it still comes with minor differences.

By default, Ækeynox assumes the lowest common character subset, which is provided by Windows layouts.
This ensures your keeb will work consistently across all major platforms. But unless you need your
keyboard to be usable with *any* OS, you’ll have a better experience by activating OS-specific options:

- either by selecting the `MACOS` or `LINUX` option, if that’s the targeted host OS;
- or by selecting the `ENABLE_CP1252_ALT_CODES` option, which leverages Windows’ [Alt-Codes].

```c
// #define MACOS
// #define LINUX
#define ENABLE_CP1252_ALT_CODES // optimized for Windows hosts
```

The emulation of non-ASCII layouts is being actively developed.
It’s already used as a daily driver by some of our European contributors.
Feedback and patches are very welcome.

[QWERTY-intl]: https://kbdlayout.info/kbdusx
[Alt-Codes]:   https://altcodeunicode.com/

[`KB_EMULATION_ERGOL`]:              https://ergol.org
[`KB_EMULATION_NEO`]:                https://neo-layout.org
[`KB_EMULATION_QWERTY_LAFAYETTE`]:   https://qwerty-lafayette.org
