#ifndef MOTOR_H
#define MOTOR_H

// Arduino.h will be automatically included by the Arduino IDE
// For external editors, you may need to add Arduino core libraries to include path

class Motor {
private:
  int pin1, pin2;
  int enablePin;
  int currentSpeed;
  bool isRunning;
  bool direction; // true for forward, false for backward

public:
  // Constructor
  Motor(int pin1, int pin2, int enablePin);
  
  // Public methods
  void begin();
  void setSpeed(int speed); // Speed from 0-255
  void forward(int speed);
  void backward(int speed);
  void stop();
  void brake();
  int getCurrentSpeed();
  bool getIsRunning();
  bool getDirection();
};

#endif // MOTOR_H
