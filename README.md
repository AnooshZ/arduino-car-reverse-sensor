# Arduino Car Reverse Sensor 🚗🔊

This project is an **Arduino-based reverse parking sensor** that uses an ultrasonic sensor (HC-SR04) to measure distance and a buzzer to provide proximity alerts.  

It simulates the functionality of a real car reverse sensor system.

---

## 🔧 Features
- Measures distance using the **HC-SR04 ultrasonic sensor**  
- Provides **beeping alerts** with varying frequency as the object gets closer  
- Continuous tone when the object is extremely close (< 2 cm)  
- Serial output for live distance monitoring

---

## 🛠️ Components Used
- Arduino UNO R3 (Elegoo)
- HC-SR04 ultrasonic distance sensor
- Piezo buzzer
- Breadboard + jumper wires

---

## 🖼️ Circuit Diagram
![Circuit](Circuit.jpg)

---

## 💻 Code
See [`ReverseSensor.ino`](ReverseSensor.ino) for the full Arduino sketch.  

Key logic:
- **10–7 cm** → Slow beeps  
- **7–3 cm** → Faster beeps  
- **≤ 3 cm** → Continuous warning tone  

---

## 🚀 How to Run
1. Clone this repo:
   ```bash
   git clone https://github.com/<your-username>/arduino-car-reverse-sensor.git
