# Lab 2: YOUR_FIRSTNAME LASTNAME

### GPIO control registers

1. Complete the table for DDRB and PORTB control register values.

   | **DDRB** | **PORTB** | **Direction** | **Internal pull-up resistor** | **Description** |
   | :-: | :-: | :-: | :-: | :-- |
   | 0 | 0 | input | no | Tri-state, high-impedance |
   | 0 | 1 | input | yes| Pxn will source current if ext. pulled low |
   | 1 | 0 | output| no | output low (sink) |
   | 1 | 1 | output| no | output high (source) |

### GPIO library

2. Complete the table with code sizes from three versions of the blink application.

   | **Version** | **Size [B]** |
   | :-- | :-: |
   | Arduino-style     | 508 |
   | Registers         | 182 |
   | Library functions |  |

### Traffic light

3. Scheme of traffic light application with one red/yellow/green light for cars, one red/green light for pedestrians, and one push button. Connect AVR device, LEDs, resistors, push button (for pedestrians), and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!


![Bez názvu](https://user-images.githubusercontent.com/99388270/195167136-909aee5b-a593-4b77-8441-d805a980b626.png)
