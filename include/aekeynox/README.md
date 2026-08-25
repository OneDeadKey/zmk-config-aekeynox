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


Debugging
----------------------------------------------------------------------------------------------------

When working on keymap files, especially on aliases and extra layers, many errors can be caught by
the preprocessor if ZMK is installed locally. Here’s a quick how-to:

1. start from this directory
2. symlink `selenium.keymap` to `selenium.c`
3. use `clang -E` on `selenium.c`
4. examine the output

Examples:

```sh
# check the output with the default options
clang -E selenium.c -I/path/to/zmk

# check the output for QWERTZ-de
clang -E selenium.c -I/path/to/zmk -DKB_LAYOUT_QWERTZ_DE

# check the output for QWERTY-intl on Linux
clang -E selenium.c -I/path/to/zmk -DKB_LAYOUT_QWERTY_INTL -DLINUX
```

> [!NOTE]
> Remember that any setting you tweaked will *stay active* when running this commmand,
> so dont forget to comment them out or add the `-DCI_IGNORE_USER_SETTINGS` flag (to
> ignore all of them) if they hinder you.

The output details all layers that will be built by ZMK, after one
preprocessing pass. Seeing one of your own macros in this output means it
wasn’t defined properly and thus wasn’t swapped out by the preprocessor. In
case this happens, there’s no point sending it to the GHA, you’ll just get an error

Common mistakes when dealing with the preprocessor include (but are not limited to):

- typos
- missing header file(s)
- macros being used before being defined
- missing definition in a conditionnal compilation branch (`#if`, `#ifdef`…)
- comparing things more complex than integers (yes, it’s *that* primitive)

As simple as this trick may seem, it makes it a **LOT** easier and faster to
find errors reported by the GHA outputs. To that end, here are some of the more
common errors you may encounter and what they mean:

- `expected number or parenthesized expression`: a key/layer/modifier/macro is
  missing or ill-defined (check that you or a macro didn’t accidentally add an extra `&`)
- `<Node … in …/empty_file.c> lacks #binding-cells`: a behavior in a `bindings`
  property has too few parameters
- `binding controller <Node <behavior> in …/empty_file.c> lacks binding`:
  the `compatible` field in the declaration of `behavior` is missing or incorrect
- `'DT_N_S_keymap_S_<layer_name>_P_bindings_IDX_<n>_PH_FULL_NAME' undeclared here`:
  same as the first one, but caught later in the compilation and much more precise,
  as it tells you the issue resides with the `n`th key of `layer_name`.
- some seemingly unrelated piece of code fails to compile: we probably messed up,
  please open a bug report with your settings and the error logs, if that happens.
