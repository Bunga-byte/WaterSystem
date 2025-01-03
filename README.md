# Water System Project

This project is a water control system that utilizes an Arduino-based setup to autonomously water my plants based on soil moisture.

## Table of Contents
- [Arduino Uno Code](WATERSYSTEM.ino)
- [Schematic](WaterSystem.fzz)
- [Schematic Screenshot](WaterSystemSchematic.png)

## Overview
The **Water System** project consists of an Arduino Uno that reads an Analog Soil Moisture value from a Soil Moisture probe. That value is then used to control the Water Pump to water the plants. When the Soil Moisture value goes above the threshold value of 500 (The soil is dry), it outputs high to the relay. The relay then switches and in combination with the external power supply, the Water Pump activates.

## Hardware Setup
The following components are used in this project:
- **Arduino Uno**: Microcontroller to control the system.
- **Soil Moisture Sensor**: Measures the Moisture of the Plant Soil.
- **Water Pump**: Used to send water to the plants.
- **Relay**: Switches the Water Pump, uses external power supply to supply power.
- **Power Supply**: Appropriate power for the Water Pump.

### Pin Connections
- **Sensor Pin**: Pin A0 for the Soil Moisture Sensor.
- **Relay Pin**: Pin 3 for the Relay Output

## Schematic
Here is a screenshot of the schematic that illustrates how the components are connected:

![Schematic Screenshot](WaterSystemSchematic.png)

The full schematic file is also available in this repository as `WaterSystem.fzz`.

## Arduino Code
The Arduino code is written to control the system based on the input from the sensor and send data to the Relay.

You can find the Arduino sketch in the `WaterSystem.ino` directory

## Video
Here is a [video](https://drive.google.com/file/d/1aWCkHGDg7OymMFE-zLW9jyF3tiIi7DXy/view?usp=sharing) showing the system working!

