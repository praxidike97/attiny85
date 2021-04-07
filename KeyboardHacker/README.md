# Keyboard Hacking

Some things to watch out for:

1. The key presses are meant for an US keyboard aĺayout, but there is a mod for German keyboards: https://github.com/adnan-alhomssi/DigistumpArduinoDe
   The file DigistumpArduinoDe/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboardDe.h has to be added 
   to the Digispark library. Run "locate DigiKeyboard.h" in the terminal and place DigiKeyboardDe.h in the same directory.

2. There is a 5 second start-up delay. To get rid of it follow instructions here: https://bytelude.de/2018/04/20/wie-man-das-5-sekunden-boot-delay-beim-digispark-digistump-attiny85-entfernt/
   Caution: Afterwards whenever something is uploaded GND has to be connected to P0, otherwise the upload does not work!
