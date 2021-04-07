#include "DigiKeyboardDe.h"
#include "DigiKeyboard.h"

#define KEY_UP_ARROW 0x52
#define KEY_DOWN_ARROW 0x51
#define KEY_LEFT_ARROW 0x50
#define KEY_RIGHT_ARROW 0x4F

bool do_hack = true;
    
void setup() {

}

void loop() {
    DigiKeyboardDe.sendKeyStroke(0);
    //cmd+space
    if (do_hack) {
      DigiKeyboardDe.delay(500);
      DigiKeyboardDe.sendKeyStroke(KEY_A, MOD_GUI_LEFT);
      DigiKeyboardDe.delay(500);
      DigiKeyboardDe.println("terminal");
      DigiKeyboardDe.delay(500);
      DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
      DigiKeyboardDe.delay(1000);
      DigiKeyboardDe.println("firefox https://www.youtube.com/watch?v=j9V78UbdzWI");
      DigiKeyboardDe.delay(3000);
      DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
      DigiKeyboardDe.delay(500);
      DigiKeyboardDe.sendKeyStroke(KEY_F);
      
      for (int i = 0; i <= 10; i++) {
        DigiKeyboardDe.delay(300);
        DigiKeyboardDe.sendKeyStroke(KEY_UP_ARROW);
      }
      do_hack = false;
    }
}
