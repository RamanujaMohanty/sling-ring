# Sling Ring
Gesture-Controlled Robotic Gripper for Hazardous and Clean Environments

---

## Developers
| Name | Email | GitHub |
|------|-------|--------|
| Ramanuja Mohanty | ramanuja.mohanty@gmail.com | @RamanujaMohanty |
| Thamizarasu Sankara | thamizarasus@gmail.com | @thamizarasus |
| David Lei | DavidtheDefender2003@gmail.com | @CaliCanine |

---

## Project Summary
Sling Ring is a compact robotic gripper controlled through natural hand gestures. 
A wrist-mounted IMU (accelerometer + gyroscope) detects tilt and motion to open and 
close the gripper without physical contact.

This system is designed for use in environments where:
- Human presence is unsafe (chemical, radiological, hazardous zones)
- Human contamination must be minimized (clean rooms, sterile labs)
- Remote manipulation is needed for user safety or accessibility

The device also includes:
- Hardware limit switches for safe travel
- An emergency stop mechanism
- LED indicators to show system state
- A fallback operation mode using button controls

---

## Key Features
- Gesture-based control using IMU (tilt to open/close)
- Touch-free operation reduces contamination
- Hardware-based safety (limit switches + E-stop)
- Modular integration for different robotic applications
- Fully functional with a wired fallback control mode

---

## Hardware & Components
- Arduino UNO R4 + Grove Base Shield
- MPU6050 IMU (Accelerometer + Gyroscope)
- DG01D Mini Gearmotor
- TB6612FNG or L298N H-Bridge Motor Driver
- Grove Buttons and LEDs for input and feedback
- 3D-Printed Mechanical Gripper

---

## Demo Instructions
1. Power the Arduino and motor driver
2. Gesture Control:
   - Wrist tilt up → close the gripper
   - Wrist tilt down → open the gripper
   - Neutral wrist → hold position
3. Press Emergency Stop at any time to halt motion
4. LED indicators show readiness and fault states

---

## Future Improvements
- Wireless control (Bluetooth or Wi-Fi)
- Machine learning gesture classification
- Full robotic arm integration
- Force sensing gripper pads for delicate objects

---
