# Blinking-programming-in-STM32F4-MCU-using-Baremetal-C-Register-level-GPIO-Programming
## Objective:
To blink LED of Port B Pin 12 (On board pin B12) in almost 1 second delay. It is not accurate 1 second delay because here loop is used to create delay.
## Note:
This Embedded C program is only for STM32F401CCU6 if you using some other MCUs it will  or may not work. 
## Hardware used:
* STM32F401CCU6 Microcontroller
* ST link V2
* Resistor - 33 Ohm
* Wires - To make connection between the microcontroler and ST link v2
* Bread Board

## Software Required:
* STM32cubeIDE

## Documents required:
* STM32F401CCU6 Reference manual (RM)
* STM32F401CCU6 Datasheet

## Connection between STlink v2 and the MCU:
| **ST-Link V2 Pin** | **STM32F401CCU6 Pin** | **Purpose** |
|---|---|---|
| **3.3V** | **3.3V** | Power supply |
| **GND** | **GND** | Ground |
| **SWDIO** | **DIO (SWDIO)** | Serial Wire Debug data input/output |
| **SWCLK** | **CLK (SWCLK)** | Serial Wire Debug clock |

## Challenges faced:
*


