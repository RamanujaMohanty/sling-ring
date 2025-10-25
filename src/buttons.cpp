#include <Arduino.h>
#include "buttons.h"

Buttons::Buttons(int pin) {
  buttonPin = pin;
  lastButtonState = HIGH; // Assuming pull-up resistor
  currentButtonState = HIGH;
  lastDebounceTime = 0;
  debounceDelay = 50; // 50ms debounce delay
  buttonPressed = false;
  buttonReleased = false;
}

void Buttons::begin() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.println("Button initialized");
}

void Buttons::update() {
  // Read the current state of the button
  int reading = digitalRead(buttonPin);
  
  // Check if the button state has changed
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }
  
  // If enough time has passed since the last state change
  if ((millis() - lastDebounceTime) > debounceDelay) {
    // If the button state has actually changed
    if (reading != currentButtonState) {
      currentButtonState = reading;
      
      // Detect button press (LOW because of pull-up resistor)
      if (currentButtonState == LOW) {
        buttonPressed = true;
        buttonReleased = false;
      } else {
        buttonPressed = false;
        buttonReleased = true;
      }
    }
  }
  
  // Reset flags after they've been read
  if (buttonPressed && (millis() - lastDebounceTime) > debounceDelay) {
    buttonPressed = false;
  }
  
  if (buttonReleased && (millis() - lastDebounceTime) > debounceDelay) {
    buttonReleased = false;
  }
  
  lastButtonState = reading;
}

bool Buttons::isPressed() {
  return (currentButtonState == LOW);
}

bool Buttons::wasPressed() {
  return buttonPressed;
}

bool Buttons::wasReleased() {
  return buttonReleased;
}

bool Buttons::getState() {
  return currentButtonState;
}
