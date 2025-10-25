#ifndef IMU_H
#define IMU_H

// Arduino.h will be automatically included by the Arduino IDE
// For external editors, you may need to add Arduino core libraries to include path

class IMU {
private:
  // Private member variables
  float accelX, accelY, accelZ;
  float gyroX, gyroY, gyroZ;
  bool initialized;

public:
  // Constructor
  IMU();
  
  // Public methods
  bool begin();
  void readData();
  float getAccelX();
  float getAccelY();
  float getAccelZ();
  float getGyroX();
  float getGyroY();
  float getGyroZ();
  bool isInitialized();
};

#endif // IMU_H
