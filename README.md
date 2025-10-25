# Sling Ring
**Gesture-Controlled Robotic Gripper for Hazardous and Clean Environments**

---

## Developers

| Name                | Email                          | GitHub           |
|---------------------|--------------------------------|------------------|
| Ramanuja Mohanty    | ramanuja.mohanty@gmail.com     | @RamanujaMohanty |
| Thamizarasu Sankara | thamizarasus@gmail.com         | @thamizarasus    |
| David Lei           | DavidtheDefender2003@gmail.com | @CaliCanine      |


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
- Gesture-based control using IMU (Wrist Tilt to Open/Close)
- Touch-free operation for reduction of contamination & increased safety.
- Hardware-based safety (limit switches + E-stop)
- Modular integration for different robotic applications
- Fully functional with a wired fallback control mode

---

## Hardware & Components
- 1 x USB C-C Cable (Power/Data Transmission)
- 1 x Arduino Uno R4 (WiFi capable | Powered via USB-C)
- 1 x Seeed Studio Grove Shield for Arduino Uno R4
- 3 x Seeed Studio v1.1 Grove Connector Button Module
- 2 x Seeed Studio v1.3 Grove Connector LED Socket Kit
- 5 x Grove Connecting Wires
- 1 x Accelerometer
- 1 x Gyroscope
- 3 x DG01D 48:1 Mini DC Gearbox
- 3 x 10kΩ (Brown, Black, Orange, Gold) Resistors
- 3 x BC 472J (4700 pF) Ceramic Capacitors

---

## Demonstration Instructions
1. Power the Arduino and Motor Driver
2. Demonstrate Gesture Control:
   - Wrist Tilt Up → Open The Gripper
   - Wrist Tilt Down → Close The Gripper
   - Neutral Wrist → Hold Position
3. Press Emergency Stop to Halt Grabber
4. Demonstrate Fault & Ready States via LEDs (Red → Fault | Green → Ready)

---

## Future Improvements
- Wireless control (Bluetooth or Wi-Fi)
- Machine learning gesture classification
- Full robotic arm integration
- Force sensing gripper pads for delicate objects

---
