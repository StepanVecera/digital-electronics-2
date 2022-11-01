# Lab 5: Štěpán Večeřa
### Analog-to-Digital Conversion

1. Complete table with voltage divider, calculated, and measured ADC values for all five push buttons.

   | **Push button** | **PC0[A0] voltage** | **ADC value (calculated)** | **ADC value (measured)** | **ADC value (measured, hex)** |
   | :-: | :-: | :-: | :-: | :-: |
   | Right  | 0&nbsp;V | 0   | 0 | 0 |
   | Up     | 0.495&nbsp;V | 101 | 99 | 63 |
   | Down   | 1.203&nbsp;V | 246 | 255 | ff |
   | Left   | 1.97&nbsp;V | 403 | 408 | 198 |
   | Select | 3.18&nbsp;V | 651 | 638 | 27e |
   | none   | 5&nbsp;V | 1023 | 1023 | 3ff |

### Temperature meter

Consider an application for temperature measurement. Use analog temperature sensor [TC1046](http://ww1.microchip.com/downloads/en/DeviceDoc/21496C.pdf), LCD, and a LED. Every 30 seconds, the temperature is measured and the value is displayed on LCD screen. When the temperature is too high, the LED will turn on.

2. Draw a schematic of temperature meter. The image can be drawn on a computer or by hand. Always name all components and their values.

   
![schematic for temp](https://user-images.githubusercontent.com/99388270/199323801-7073c06c-8533-46f6-90f4-704cb6afed2d.png)

3. Draw two flowcharts for interrupt handler `TIMER1_OVF_vect` (which overflows every 1&nbsp;sec) and `ADC_vect`. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

  
![flow chart TIMER](https://user-images.githubusercontent.com/99388270/199323826-0234a074-6134-4d8c-9919-8b9ba810a6dc.jpg)
![flow chart ADC](https://user-images.githubusercontent.com/99388270/199323839-ef6223ba-ef0e-4641-a7b6-20b9269e83a9.jpg)
