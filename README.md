🚀 Smart Buzzer Alert System

This project is a smart proximity alert system built using Arduino Uno and an HC-SR04 ultrasonic sensor. It detects nearby objects and activates a buzzer when the object comes within a defined distance.

🚀 Project Overview

This system was developed during the SoftGrow Tech IoT Internship. The main goal is to demonstrate how hardware and software work together using Arduino.

The system can be used in:

* Basic security alarm systems
* Obstacle detection systems
* Parking assistance

🛠️ Components Used

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* Piezo Buzzer
* Breadboard
* Jumper Wires


🔌 Circuit Connections

* Ultrasonic Sensor VCC → 5V
* Ultrasonic Sensor GND → GND
* Trig Pin → Pin 9
* Echo Pin → Pin 10
* Buzzer (+) → Pin 8
* Buzzer (−) → GND

📝 How it Works

The system works in the following steps:

* The ultrasonic sensor sends sound waves through the Trig pin
* The waves reflect back when they hit an object
* The Echo pin receives the reflected signal
* Arduino calculates the distance based on time
* If the distance is less than 30 cm, the buzzer turns ON

💻Installation and Usage

To run this project:

1 Download or clone the repository
2 Open the file in Arduino IDE
3 Connect Arduino Uno to your computer
4 Select the correct board and port
5 Upload the code
6 Open Serial Monitor (9600 baud) to view readings

👨‍💻Internship Credit

* Organization: SoftGrow Tech
* Task: Smart Systems/IoT
* Student: Hafiza Yumna Mushtaq
