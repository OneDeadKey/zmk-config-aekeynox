# Ækeynox

Reference ZMK implementation of the [Arsenik] and [Selenium] keymaps,
with first-class support for non-QWERTY layouts.

[Arsenik]:      https://github.com/OneDeadKey/arsenik
[Selenium]:     https://github.com/OneDeadKey/selenium
[Selenium 2TK]: https://github.com/OneDeadKey/selenium/raw/main/selenium.png "Selenium, 2TK flavor"

| ![Selenium 2TK] |
| :-: |
| [Selenium flavors]:<br> [EZ], [TT], [HRM], [2TK] (pic) + [Vim variant] |

[Selenium flavors]: https://onedeadkey.github.io/selenium
[EZ]:               https://onedeadkey.github.io/selenium/#flavor-ez
[TT]:               https://onedeadkey.github.io/selenium/#flavor-tt
[HRM]:              https://onedeadkey.github.io/selenium/#flavor-hrm
[2TK]:              https://onedeadkey.github.io/selenium/#flavor-2tk
[Vim variant]:      https://onedeadkey.github.io/selenium/#vim-variant

Customize your keymap once, and build it on all supported keebs.


## In a Nutshell

This repository allows to build your firmware with GitHub Actions (GHA):

1. [create a GitHub account](https://github.com/signup) if you don’t already have one
2. [fork](https://github.com/OneDeadKey/zmk-config-aekeynox/fork) this repository
3. set your configuration in [`include/aekeynox/settings.h`](#keymapssettingsh)<br>
   *(this step is **required** for non-QWERTY layouts)*
4. make sure your keyboard is configured properly in [`build.yaml`](#buildyaml)<br>
   *(this step is **required** for composite keebs based on Pro Micro, XIAO, etc.)*
5. save, commit, push

Your firmware will now be built automatically by GitHub’s CI:

- check the `Actions` tab
- wait for the latest task to complete
- click on this task
- download the CI artifact
- unzip, pick the firmware matching your keeb
- flash your keeb


## Configuration

### `include/aekeynox/settings.h`

This is where options can be safely selected. This file should be self-explanatory,
but here are the main options:

- `KB_LAYOUT_*` must match the layout used on the host computer
- `KB_EMULATION_*` activates a [layout emulation](#layout-emulation) (none by default)
- `HT_*` selects the Selenium hold-tap flavor: [EZ], [TT], [HRM] (default), [2TK]
- `VIM_NAVIGATION` enables the [Vim variant]

**Setting `KB_LAYOUT_*` is required when the host computer is not set in US QWERTY.**
This setting is used to pick the proper file in `include/aekeynox/aliases`, which defines
how all programming symbols and action shortcuts are done.

If unset, QWERTY is assumed, which **will** result in buggy `Symbols` and `Nav` layers
when the host computer is configured for a different keyboard layout.

### `include/aekeynox/selenium.keymap`

This file allows low-level customization.

See the [customizing ZMK](https://zmk.dev/docs/customization) documentation.

### `build.yaml`

This is the list of all keyboard firmware to build.

Most DIY keebs consist in two parts:

- a *shield*, which is the physical keyboard with the keys;
- a *board*, which is the controller plugged onto the keeb: SparkFun, nice!nano, XIAO, etc.

If your keeb uses such a controller board, make sure it’s properly described in this file.
You might have to change the `board` field to match the micro-controller unit associated with your keeb.

If your keeb has an onboard controller, there’s nothing to configure.

### `config/*.keymap`

These are the keyboard descriptors. The folder name can be confusing, but that’s how ZMK works.


## Layout Emulation

Using a non-QWERTY layout can be done in two ways:

- either by setting the host computer to use this layout, in which case `KB_LAYOUT_*` is enough
  (see above);
- or by letting the keyboard *emulate* a keyboard layout for a host using a default layout
  — and that’s what `KB_EMULATION_*` is about.

### ASCII Layouts

Keyboard layouts that are optimized for English are just a rearrangement of QWERTY keys:
Dvorak, Colemak, Workman, Sturdy… all these layouts can be perfectly emulated by the keyboard.

To emulate Dvorak for QWERTY hosts, just uncomment this line in `include/aekeynox/settings.h`:

```c
#define KB_EMULATION_DVORAK
```

### Non-ASCII Layouts

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

The emulation of non-ASCII layouts is being actively developed.
It’s already used as a daily driver by some of our European contributors.
Feedback and patches are very welcome.

[QWERTY-intl]: https://commons.wikimedia.org/wiki/File:KB_US-International.svg
[Alt-Codes]:   https://altcodeunicode.com/


## Why the name?

Any name containing `key` and easy to search would’ve been a good fit, but here’s Nox:

![My name is Nox and I approve this project.](nox.jpg)
