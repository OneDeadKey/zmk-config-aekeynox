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

## Why the name?

We wanted a name that wasn’t linked to [Arsenik] or [Selenium].

Any name containing `key` and easy to search would’ve been a good fit, but here’s Nox:

![My name is Nox and I approve this project.](nox.jpg)
