/* Defines -----------------------------------------------------------*/
#define LED_GREEN PB5 
#define PUSH_BUTTON PD2
//#define LED_RED   PB0  // PB5 is AVR pin where green on-board LED 
                        // is connected
#define SHORT_DELAY 250
#define LONG_DELAY  500 // Delay in milliseconds
#ifndef F_CPU
# define F_CPU 16000000 // CPU frequency in Hz required for delay funcs
#endif

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops
#include <gpio.h>
#include <gpio.c>

// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
//#include "Arduino.h"
#define PB5 13     
#define PD2 2
//#define PB0 8         // In Arduino world, PB5 is called "13"
// -----


/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/
int main(void)
{
    // uint8_t led_value ;  // Local variable to keep LED status

    // Set pin where on-board LED is connected as output
    GPIO_mode_output(&DDRB, LED_GREEN);  // Set output mode in DDRB reg
    GPIO_mode_input_pullup(&DDRB, PUSH_BUTTON);
    // Infinite loop
    while (1)
    {
         // Examples of various function calls
         if (GPIO_read(&PIND, PUSH_BUTTON) == 0)
         {
            GPIO_write_high(&DDRB, LED_GREEN);   // Set output high in PORTB reg
              _delay_ms(LONG_DELAY);
            GPIO_write_low(&DDRB, LED_GREEN);   // Set output low in PORTB reg
              _delay_ms(LONG_DELAY);
         }
         
         else
        {
          GPIO_write_low(&DDRB, LED_GREEN);
        }
    }

    // Will never reach this
    return 0;
}