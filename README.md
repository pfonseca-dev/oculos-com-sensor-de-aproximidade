# Smart Glasses with Ultrasonic Sensor 👓📡

A simple assistive device built with **Arduino (C++)** that uses an **ultrasonic sensor** to detect obstacles and alert the user through a **buzzer sound system**.

The system changes the sound pattern based on the distance, helping the user understand how close an object is.

This project was created for **learning purposes** to practice embedded systems, sensor integration, and real-time feedback.

---

# Technologies Used

* Arduino / C++
* Ultrasonic Sensor (HC-SR04)
* Buzzer
* PWM (tone)
* Serial Monitor

---

# Project Overview

The device works as a basic **assistive smart glasses prototype**:

* Detects obstacles in front of the user
* Calculates distance using ultrasonic waves
* Converts distance into sound feedback
* Alerts the user with different beep patterns

---

# Components

* Arduino board
* Ultrasonic sensor (HC-SR04)
* Buzzer
* Jumper wires
* Power supply

---

# Pin Configuration

```cpp
const int pinoBuzzer = 2;
const int triggerPin = 5;
const int echoPin = 7;
```

---

# How It Works

1. The ultrasonic sensor sends a signal
2. The signal reflects off an object
3. The system calculates the distance in centimeters
4. The buzzer changes its behavior based on distance

---

# Distance Logic

| Distance | Behavior |
|--------|---------|
| ≤ 5 cm | Continuous sound (very close) |
| 5–20 cm | Fast beep |
| 20–40 cm | Medium beep |
| 40–50 cm | Slow beep |
| > 50 cm | No sound |

---

# Main Functions

## Distance reading

```cpp
readUltrasonicDistance(triggerPin, echoPin)
```

Responsible for sending and receiving the ultrasonic signal.

---

## Sound feedback

* `tone()` → activates buzzer  
* `noTone()` → stops sound  

---

## Loop behavior

Continuously:

* Reads distance
* Prints value in Serial Monitor
* Adjusts sound pattern

---

# Example Output

```
25 cm
```

---

# Code Highlights

* Real-time distance calculation
* Conditional logic for sound patterns
* Ultrasonic sensor integration
* Feedback system using buzzer
* Simple and efficient embedded logic

---

# Possible Improvements

* Add vibration motor for silent feedback
* Improve accuracy with filtering
* Add battery system for portability
* Integrate with wearable frame (real glasses)
* Add Bluetooth or mobile integration

---

# Learning Goals

This project was created to practice:

* Embedded programming with Arduino
* Sensor integration (ultrasonic)
* Actuator control (buzzer)
* Real-time decision making
* Assistive technology concepts

---

# Author

Analyce Correa Garcia Angelo |
Luis Filippe Reis Nogueira |
Pedro Fonseca Martins |
Pedro Henrique Martinho Monteiro
