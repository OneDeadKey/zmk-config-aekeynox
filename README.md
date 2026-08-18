Ækeynox
====================================================================================================

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

[Check the configuration guide.](include/aekeynox#readme)


In a Nutshell
----------------------------------------------------------------------------------------------------

This repository allows to build your firmware with GitHub Actions (GHA):

1. [create a GitHub account](https://github.com/signup) if you don’t already have one
2. [fork](https://github.com/OneDeadKey/zmk-config-aekeynox/fork) this repository
3. on your fork’s GitHub page, visit the Actions tab to enable workflows<br>
   *(by default, they are disabled on newly created forks)*
4. set your configuration in [`include/aekeynox/settings.h`](#keymapssettingsh)<br>
   *(this step is **required** for non-QWERTY layouts)*
5. make sure your keyboard is configured properly in [`build.yaml`](#buildyaml)<br>
   *(this step is **required** for composite keebs based on Pro Micro, XIAO, etc.)*
6. save, commit, push

Your firmware will now be built automatically by GitHub’s CI:

- check the `Actions` tab
- wait for the latest task to complete
- click on this task
- download the CI artifact
- unzip, pick the firmware matching your keeb
- flash your keeb

Note: if you encounter Bluetooth connection issues, it might help to flash your keyboard
with the `settings_reset` firmware matching your controller.
More info [in the ZMK documentation](https://zmk.dev/docs/troubleshooting/connection-issues).


Configuration
----------------------------------------------------------------------------------------------------

### Keymap Customization: [`include/aekeynox/`](include/aekeynox)

This is where your keymap options can be safely selected:

- which keyboard layout you use:
  - either by setting your keeb for the layout on the host computer
  - or by [emulating a keyboard layout](include/aekeynox/emulations#readme)
    on devices running the local default layout (computers, tablets, phones…)

- which hold-tap flavor you prefer:
  - [HRM] is assumed by default, and is recommended for experienced users
  - when unsure, you can go step-by-step and begin with [EZ] or [TT] before switching to [HRM]

- and all your personal options: Vim navigation, Callum mods…

[Check the configuration guide.](include/aekeynox#readme)

### Keyboard Descriptors: [`config/*.keymap`](config)

This is where you can add a new keyboard, or redefine an existing keyboard.

A few keyboards expose hardware-level options in `config/*.conf` files.

### [`build.yaml`](build.yaml)

This is the list of all keyboard firmware to build.

Most DIY keebs consist in two parts:

- a *shield*, which is the physical keyboard with the keys;
- a *board*, which is the controller plugged onto the keeb: SparkFun, nice!nano, XIAO, etc.

If your keeb uses such a controller board, make sure it’s properly described in this file.
You might have to change the `board` field to match the micro-controller unit associated with your keeb.

If your keeb has an onboard controller, there’s nothing to configure.


Non-ASCII Layouts
----------------------------------------------------------------------------------------------------

Using non-ASCII layouts can be very frustrating on ergonomic keyboards. Many users opt for a 4×6
model, thinking it will be easier to use, but these big keebs are only marginally simpler, and they
break the holy 1DFH rule: *“1u Distance From Home”*. 3×6 and 3×5 keebs are much more comfortable,
and just as easy with non-ASCII layouts.

Ækeynox aims to support all major variants of AZERTY, QWERTY, QWERTZ and more.
It has sane presets for European languages, relying on a simple concept:

- the 3×10 grid is dedicated to the common AZERTY / QWERTY / QWERTZ basis, extra columns are
  reserved for special keys (Escape, Enter…);
- one key on the 3×10 grid (usually the rightmost key in the home row) is turned into a one-shot
  layer key, to access all your language-specific chars;
- Ækeynox already has several pre-defined extra layers, which have been carefully optimized to
  match your language.

The idea comes from the [QWERTY-1dk](https://github.com/OneDeadKey/1dk) project, which has been used
for almost a decade now.
The result is much easier to use than any full-size European or Latin American layout.

- [Supported host layouts](include/aekeynox/aliases#readme)
- [Proposed layout adaptations](include/aekeynox/extra_layers#readme)


Why the name?
----------------------------------------------------------------------------------------------------

Any name containing `key` and easy to search would’ve been a good fit, but here’s Nox:

![My name is Nox and I approve this project.](nox.jpg)
