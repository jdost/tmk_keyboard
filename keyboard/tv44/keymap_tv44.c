#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* Layer: Base Layer
    * ,-------------------------------------------------.
    * |Tab|  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P| BSp |
    * |-------------------------------------------------|
    * |FN1 |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|Fn1'|
    * |-------------------------------------------------|
    * |SftEs|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|FN2|
    * |-------------------------------------------------|
    * |Ctrl|  FN2  |Gui |Enter| Space |Alt |Shift|  FN3 |
    * `-------------------------------------------------'
    */
   KEYMAP(
     TAB ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, \
     FN0  ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN, FN21, \
     FN22  ,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH, FN1, \
     LCTL,  FN1,  LGUI,     ENT,       SPC,   RALT,   RSFT,  FN2    ),

   /* Layer: Function Layer 1
    * ,-------------------------------------------------.
    * |  `|  !|  @|  #|  $|  %|  ^|  &|  *|  (|  )| Del |
    * |-------------------------------------------------|
    * |    |  \|  '|  -|  =|  [|  ]| Dn| Up|Lft| Rt|    |
    * |-------------------------------------------------|
    * |     |Esc|LED|PSc|   |   |   |Stp|Ply|Prv|Nxt|Sft|
    * |-------------------------------------------------|
    * |    |  Gui  |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     GRV , FN4, FN5, FN6, FN7, FN8, FN9,FN10,FN11,FN12,FN13,   DEL, \
     TRNS ,BSLS,QUOT,MINS, EQL,LBRC,RBRC,DOWN,  UP,LEFT,RGHT, TRNS, \
     TRNS  , ESC,FN20,PSCR,TRNS,TRNS,TRNS,MSTP,MPLY,MPRV,MNXT,RSFT, \
     TRNS, LGUI,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),

   /* Layer: Function Layer 2
    * ,-------------------------------------------------.
    * |  ~|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|     |
    * |-------------------------------------------------|
    * | Esc|  ||  "|  _|  +|  {|  }|  4|  5|  6|Vl+|Entr|
    * |-------------------------------------------------|
    * |     |   |   |   |   |   |   |  1|  2|  3|Vl-|   |
    * |-------------------------------------------------|
    * |    |       |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     FN3 ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,  TRNS, \
     ESC  ,FN14,FN15,FN16,FN17,FN18,FN19,   4,   5,   6,VOLU,  ENT, \
     TRNS  ,TRNS,TRNS,TRNS,TRNS,TRNS,   0,   1,   2,   3,VOLD,TRNS, \
     TRNS, TRNS,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),

   /* Layer: Game Layer
    * ,-------------------------------------------------.
    * |   |   |   |   |   |   |   | F1| F2| F3| F4|     |
    * |-------------------------------------------------|
    * | Esc|   |   |   |   |   |   | F5| F6| F7| F8|Entr|
    * |-------------------------------------------------|
    * |Shift|  1|  2|  3|  4|  5|  6| F9|F10|F11|F12|Sft|
    * |-------------------------------------------------|
    * |    | Shift |  B |Space|    C  |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  F1,  F2,  F3,  F4,  TRNS, \
     ESC  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  F5,  F6,  F7,  F8,  ENT, \
     LSFT  ,   1,   2,   3,   4,   5,   6,  F9, F10, F11, F12,RSFT, \
     TRNS, LSFT,     B,     SPC,         C,   TRNS,   TRNS,  TRNS  ),

#if 0
   /* Layer: XX Layer
    * ,-------------------------------------------------.
    * |   |   |   |   |   |   |   |   |   |   |   |     |
    * |-------------------------------------------------|
    * |    |   |   |   |   |   |   |   |   |   |   |    |
    * |-------------------------------------------------|
    * |     |   |   |   |   |   |   |   |   |   |   |   |
    * |-------------------------------------------------|
    * |    |       |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS, \
     TRNS ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, \
     TRNS  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
     TRNS, TRNS,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),
#endif
};

const action_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_TOGGLE(3),
    [3]  = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [20] = ACTION_BACKLIGHT_STEP(),
    [21] = ACTION_LAYER_TAP_KEY(1, KC_QUOT),
    [22] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC)
};
