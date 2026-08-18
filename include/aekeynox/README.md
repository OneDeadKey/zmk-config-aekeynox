Keymap Configuration Guide
====================================================================================================


[`settings.h`](settings.h)
----------------------------------------------------------------------------------------------------

This is where options can be safely selected. This file should be self-explanatory,
but here’s the big picture.

### Host Keyboard Layout

`KB_LAYOUT_*` must match the layout used on the host computer.

**Setting `KB_LAYOUT_*` is required when the host computer is not set in US QWERTY.**
This setting is used to pick the proper [`aliases/*.h`](aliases) file,
which defines how all programming symbols and action shortcuts are done.

If unset, QWERTY is assumed, which **will** result in buggy `Symbols` and `Nav` layers
when the host computer is configured for a different keyboard layout.

### Onboard Layout Emulation

`KB_EMULATION_*` activates a [layout emulation](#layout-emulation) (none by default).

### Hold-Taps

`HT_*` selects the [Selenium] hold-tap flavor:

- [EZ]  / `HT_NONE`: no hold-taps at all, for gamers or absolute beginners
- [TT]  / `HT_THUMB_TAPS`: thumb-taps, a good option to get started with standard keyboards
- [HRM] / `HT_HOME_ROW_MODS`: home row mods — this is the default and recommended flavor for experienced users
- [2TK] / `HT_TWO_THUMB_KEYS`: home row mods on smaller keebs that have only two keys per thumb

[Selenium]:    https://onedeadkey.github.io/selenium
[EZ]:          https://onedeadkey.github.io/selenium/#flavor-ez
[TT]:          https://onedeadkey.github.io/selenium/#flavor-tt
[HRM]:         https://onedeadkey.github.io/selenium/#flavor-hrm
[2TK]:         https://onedeadkey.github.io/selenium/#flavor-2tk
[Vim variant]: https://onedeadkey.github.io/selenium/#vim-variant

### Other Options

- `VIM_NAVIGATION` enables the [Vim variant]
- `CALLUM_NAVIGATION` enables a variant of the `VIM_NAVIGATION` layer with Callum-mods


[`selenium.keymap`](selenium.keymap)
----------------------------------------------------------------------------------------------------

This file allows low-level customization.

See the [customizing ZMK](https://zmk.dev/docs/customization) documentation.
