# Ækeynox

Reference ZMK implementation of the [Arsenik] and [Selenium] keymaps.

![ortholinear view of the Selenium keymap](https://github.com/OneDeadKey/selenium/raw/main/selenium.png)

Customize your keymap once, and build it on many keebs.

[Arsenik]:  https://github.com/OneDeadKey/arsenik
[Selenium]: https://github.com/OneDeadKey/selenium


## Configuration

Keymap:

- `keymaps/settings.h` is where options can be safely selected
- `keymaps/selenium.keymap` allows low-level customization

Keebs:

- `config/*.keymap` hold keyboard-specific options
- `build.yaml` is where you can specify the controller of your ProMicro-based keebs


## Layout Emulation

This is still pre-alpha. So far only two layouts can be emulated: Dvorak and Ergo‑L.

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
