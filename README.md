# Blinking-programming-in-STM32F4-MCU-using-Baremetal-C-Register-level-GPIO-Programming
## Objective:
To blink LED of Port B Pin 12 (On board pin B12) in almost 500 milliseconds delay if we apply digital Low signal to Port B pin 10 (On board pin B10) . It is not accurate 500 miliseconds delay because here loop is used to create delay.
## Note:
This Embedded C program is strictly for STM32F401CCU6 if you using some other MCUs it will  or may not work. 
## Hardware used:
* STM32F401CCU6 Microcontroller
* ST link V2
* Resistor - 33 Ohm
* Wires - To make connection between the microcontroller and ST link v2, connect with button
* Bread Board
* Button

## Software Required:
* STM32cubeIDE

## Documents required:
* STM32F401CCU6 Reference manual (RM).
* STM32F401CCU6 Datasheet (DS).

## Connection between STlink v2 and the MCU:
| **ST-Link V2 Pin** | **STM32F401CCU6 Pin** | **Purpose** |
|---|---|---|
| **3.3V** | **3.3V** | Power supply |
| **GND** | **GND** | Ground |
| **SWDIO** | **DIO (SWDIO)** | Serial Wire Debug data input/output |
| **SWCLK** | **CLK (SWCLK)** | Serial Wire Debug clock |

## How to download the documents:
* Open STMCubeIDE.
* Click on File -> New -> STM32 Projects.
* Next Write "STM32f401CCU6" at the commercial part number section.
  
  <img width="1452" height="788" alt="Screenshot 2026-08-24 055936" src="https://github.com/user-attachments/assets/d147089b-14d9-4c8c-8906-61054eacae6c" />
  
* In the "Docs and Resource" segment look for reference manual.
* Download this.
* After that click on Datasheet and download it.

## What I have learned:
* How to enable clock of a peripheral. 
* How to configure GPIO pins as input and output by Baremetal C.
* How to read Reference Manual and Datasheet.
* Bit Manipulation.
* Pointer and dereferencing of a pointer.
  
## Challenges faced:
* Logical Error while manipulating bits of each register.
* Loose Connection between ST link V2 and the MCU.


