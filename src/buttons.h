#ifndef BUTTONS_H
#define BUTTONS_H

// Arduino.h will be automatically included by the Arduino IDE
// For external editors, you may need to add Arduino core libraries to include path

class Buttons {
private:
  int buttonPin;
  bool lastButtonState;
  bool currentButtonState;
  unsigned long lastDebounceTime;
  unsigned long debounceDelay;
  bool buttonPressed;
  bool buttonReleased;

public:
  // Constructor
  Buttons(int pin);
  
  // Public methods
  void begin();
  void update();
  bool isPressed();
  bool wasPressed();
  bool wasReleased();
  bool getState();
};

#endif // BUTTONS_H
