# Smart Load Management System using ESP32

An automatic priority-based load controller built using the ESP32 
microcontroller. The system monitors real-time current consumption 
and automatically sheds lower-priority loads during overload 
conditions to ensure uninterrupted power supply to critical loads.

## How It Works

The ESP32 reads current from a sensor on analog pin GPIO 32 and 
controls loads via a relay module on GPIO 12 and GPIO 13:

- Normal (current < 0.12A): All loads ON (L1, L2, L3)
- Overload (0.12A to 0.18A): L3 shed, shared load activated,
  L1 and L2 remain ON
- Critical (current > 0.18A): Only highest priority load L1 stays ON

## Components Used

- ESP32 microcontroller
- HC-02 Bluetooth module
- 4-channel relay module
- Current sensor (GPIO 32)
- LED strip loads (L1, L2, L3 and shared load)
- 5V power supply

## Features

- Automatic load shedding without manual intervention
- Real-time voltage, current and load status monitoring
- Bluetooth-based mobile app using MIT App Inventor
- Prevents full blackout by cutting only lowest priority load
- Cost-effective solution for residential and institutional use

## Applications

- Hospitals to ensure critical equipment like ventilators and 
  monitors never lose power
- Residential buildings during peak demand or power shortage
- Hostels and institutions to protect essential devices
- Small-scale industries for automated power distribution
- Smart microgrids and IoT-based energy management systems
