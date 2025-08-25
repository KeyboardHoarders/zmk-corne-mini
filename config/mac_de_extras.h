/* mac_de_extras.h */
#pragma once
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

/* macOS German (Deutsch) ⌥ combos */
#define MAC_DE_AT     (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L)))   /* @ = ⌥+L */
#define MAC_DE_LBKT   (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5)))   /* [ = ⌥+5 */
#define MAC_DE_RBKT   (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6)))   /* ] = ⌥+6 */
#define MAC_DE_LBRC   (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8)))   /* { = ⌥+8 */
#define MAC_DE_RBRC   (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9)))   /* } = ⌥+9 */
#define MAC_DE_PIPE   (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7)))   /* | = ⌥+7 */
#define MAC_DE_BSLH   (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7)))) /* \ = ⌥⇧+7 */
#define MAC_DE_TILDE  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N)))   /* ~ = ⌥+N */

/* Printing variants for caret/backtick (avoid dead keys) */
#define MAC_DE_CARET  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))) /* ^ via ⇧+6 */
#define MAC_DE_GRAVE  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))) /* ` via ⌥+` */
