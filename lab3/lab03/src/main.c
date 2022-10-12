#define LED_GREEN PB5 
#define LED_RED PB0
#define BUTTON PD0

#include <avr/interrupt.h>  // Interrupts standard C library for AVR-GCC
#include <gpio.h>           // GPIO library for AVR-GCC
#include "timer.h"          // Timer library for AVR-GCC

//#define PB5 13     
//#define PB0 8
//#define PD0 0

int main(void)
{
    GPIO_mode_output(&DDRB, LED_GREEN);
    GPIO_mode_output(&DDRB, LED_RED);
    // Enable overflow interrupt
    TIM1_overflow_1s();
    TIM1_overflow_interrupt_enable();
    
    // Enables interrupts by setting the global interrupt mask
    sei();

  while(1) 
    {

    }
  return 0;
}

// Interrupt service routines
ISR(TIMER2_OVF_vect)
{
  //if (PIND0 & (1<<BUTTON))
  //{
      //PORTB ^= (1<<LED_GREEN);
      //PORTB ^= (1<<LED_RED);
  //}
  PORTB = PORTB ^ (1<<LED_GREEN);
  //PORTB = PORTB ^ (1<<LED_RED);
}