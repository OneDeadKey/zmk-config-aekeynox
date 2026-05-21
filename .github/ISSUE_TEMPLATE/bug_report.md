---
name: Bug report
about: Report a malfunctionning key sequence (i.e. crash, key stuck…)
title: 'Bug:'
labels: bug
assignees: ''

---

## Checklist before opening
- [ ] You have read the [README](https://github.com/OneDeadKey/zmk-config-aekeynox/)
- [ ] The `KB_LAYOUT_*` setting matches the keyboard layout on your computer
- [ ] The `KB_EMULATION_*` setting is enabled only if needed

## Bug Description
A clear and concise description of what the bug is.

## Steps To Reproduce
Please be **very** careful about the timing of the sequence, for instance:

1. Press <key1>
2. Tap <key2>
3. Wait for tapping-term
3. Release <key1>

Note:
- When referencing key names, please use the symbol produced by this key on a Qwerty keyboard, or left / right + tucked / home / reach for the thumb keys.
- Using the names of the underlying zmk behaviors is preferred, but not required.

Tip: try upping drastically the `TAPPING_TERM` value in your `settings.h`, if you struggle to keep a consistent timing when trying reproduce the issue reliably.

## Expected Behavior
A clear and concise description of what you expected to happen.

## Actual Behavior
A clear and concise description of what’s actually happened.

## Which keyboard and what settings do you use?
- keyboard: quacken_flex, corne, ferris…
- list on enabled options in `settings.h`
- link to the commit that triggered the GitHub Action
