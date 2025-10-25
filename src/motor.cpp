#include <Arduino.h>
#include "motor.h"

Motor::Motor(int pin1, int pin2, int enablePin) {
  this->pin1 = pin1;
  this->pin2 = pin2;
  this->enablePin = enablePin;
  currentSpeed = 0;
  isRunning = false;
  direction = true; // Default to forward
}

void Motor::begin() {
  pinMode(pin1,     OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
  
  // Initialize motor in stopped state
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  analogWrite(enablePin, 0);
  
  Serial.println("Motor initialized");
}

void Motor::setSpeed(int speed) {
  if (speed < 0) speed = 0;
  if (speed > 255) speed = 255;
  
  currentSpeed = speed;
  analogWrite(enablePin, speed);
  
  if (speed > 0) {
    isRunning = true;
  } else {
    isRunning = false;
  }
}

void Motor::forward(int speed) {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  direction = true;
  setSpeed(speed);
}

void Motor::backward(int speed) {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  direction = false;
  setSpeed(speed);
}

void Motor::stop() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  analogWrite(enablePin, 0);
  currentSpeed = 0;
  isRunning = false;
}

void Motor::brake() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  analogWrite(enablePin, 255);
  currentSpeed = 255;
  isRunning = true;
}

int Motor::getCurrentSpeed() {
  return currentSpeed;
}

bool Motor::getIsRunning() {
  return isRunning;
}

bool Motor::getDirection() {
  return direction;
}
