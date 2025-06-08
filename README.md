# IoT-enabled Smart Parking System 🚗📱

A smart parking system using **Arduino**, **IR sensors**, **ESP8266**, and **Blynk Cloud** for real-time monitoring and visualization of available parking slots.

## 🔧 Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino Uno      | 1        |
| ESP8266 (NodeMCU)| 1        |
| IR Sensors       | 5        |
| Jumper Wires     | As needed|
| Breadboard       | 1        |

## 🧠 How It Works

- IR sensors detect car presence.
- Arduino reads sensor data.
- ESP8266 sends data to **Blynk Cloud**.
- Blynk mobile app shows:
  - Red LED: Occupied
  - Green LED: Available
  - Slot counter

## 📲 Blynk App Setup

1. Create 5 virtual LEDs (V1 to V5).
2. Create a Labelled Value (V0) for total available slots.
3. Link auth token and Wi-Fi credentials in code.

## 📸 Snapshots

![Circuit][(images/circuit-diagram.png)](https://github.com/levo2feb/Automatic-car-parking-system/blob/main/images/Circuit%20diagram%201.png)
*Fig: Circuit diagram*

![App][(images/app-interface.png)](https://github.com/levo2feb/Automatic-car-parking-system/blob/main/images/app%20interface.png)
*Fig: Mobile app interface*

![Working Model][(images/working-model.png)](https://github.com/levo2feb/Automatic-car-parking-system/blob/main/images/complete%20working%20model.png)
*Fig: Working prototype*

## 📄 Project Report

Full documentation: [docs/iot design lab project report.pdf](https://github.com/levo2feb/Automatic-car-parking-system/blob/main/docs/iot%20design%20lab%20project%20report.pdf)

## 📌 Features

- Real-time monitoring
- Mobile visualization via Blynk
- Easily scalable for more slots

## 📉 Limitations & Future Work

- IR sensors may misread in dusty environments.
- Add camera/ultrasonic for better accuracy.
- Add navigation & booking in app.

## 👨‍🔧 Contributors

- Puneet Kumar (229309164)
- Harshit Gupta (229311018)
