# Ækeynox

Reference ZMK implementation of the [Arsenik] and [Selenium] keymaps.

![ortholinear view of the Selenium keymap](https://github.com/OneDeadKey/selenium/raw/main/selenium.png)

Customize your keymap once, and build it on many keebs.

[Arsenik]:  https://github.com/OneDeadKey/arsenik
[Selenium]: https://github.com/OneDeadKey/selenium


## In a Nutshell

This repository allows to build your firmware with GitHub Actions (GHA):

1. [create a GitHub account](https://github.com/signup) if you don’t already have one
2. fork this repository
3. set your configuration in [`keymaps/settings.h`](#keymapssettingsh)<br>
   (warning: do *not* skip this step if you’re not typing in QWERTY)
4. make sure your keeb is configured properly in [`build.yaml`](#buildyaml)<br>
5. save, commit, push

Your firmware will now be built automatically by GitHub’s CI:

- check the `Actions` tab
- wait for the latest task to complete
- click on this task
- download the CI artifact
- unzip, pick the firmware matching your keeb
- flash your keeb


## Configuration

### `keymaps/settings.h`

This is where options can be safely selected. This file should be self-explanatory,
but here are the main options:

- `HT_*` selects the Selenium hold-tap flavor: EZ, TT, HRM (default), 2TK.

- `KB_LAYOUT_*` must match the layout used on the host computer. If unset, QWERTY is assumed, which **will** result in unexpected symbols or shortcuts if a different keyboard layout is used.

- `KB_EMULATION_*` (experimental) activates a layout emulation (none by default).

- `VIM_NAVIGATION` to enable the Vim variant.

### `keymaps/selenium.keymap`

This file allows low-level customization.
See the [customizing ZMK](https://zmk.dev/docs/customization) documentation.

### `build.yaml`

This is the list of all keyboard firmware to build.

Pro Micro based keebs consist in two parts:
- a *shield*, which is the physical keyboard with the keys
- a *board*, which is tho controller board plugged onto the keeb: Sparkfun, nice!nano, etc.

If you have a Pro Micro keeb, make sure it’s properly described in this file. You might have to
change the `board` field to match the micro-controller unit associated with your keeb.

### `config/*.keymap`

These are the keyboard descriptors. The folder name can be confusing, but that’s how ZMK works.


## Layout Emulation

This is still experimental.

To emulate Dvorak for QWERTY hosts, just uncomment this line in `keymaps/settings.h`:

```c
#define KB_EMULATION_DVORAK
```

To emulate Ergo‑L for AZERTY hosts, uncomment these two lines:

```c
#define KB_LAYOUT_AZERTY
#define KB_EMULATION_ERGOL
```

To emulate Ergo‑L for QWERTY-intl hosts, thus enabling accented uppercase chars,
uncomment these two lines:

```c
#define KB_LAYOUT_QWERTY_INTL
#define KB_EMULATION_ERGOL
```

This feature is being actively developed: feedback and patches are very welcome.


## Why the name?

Any name containing `key` and easy to search would’ve been a good fit, but here’s Nox:

![My name is Nox and I approve this project.](nox.jpg)
