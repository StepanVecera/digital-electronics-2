# Lab 1: Štěpán Večeřa

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

```c
int main(void)
{
    // Set pin where on-board LED is connected as output
    pinMode(LED_GREEN, OUTPUT);

    // Infinite loop
    while (1)
    {
        // Generate a lettre `A` Morse code

        led_value = HIGH;
        digitalWrite(LED_GREEN, led_value);
        _delay_ms(SHORT_DELAY);
        led_value = LOW;
        digitalWrite(LED_GREEN, led_value);
        _delay_ms(SHORT_DELAY);
        led_value = HIGH;
        digitalWrite(LED_GREEN, led_value);
        _delay_ms(LONG_DELAY);
        led_value = LOW;
        digitalWrite(LED_GREEN, led_value);
        _delay_ms(SHORT_DELAY); 
    }

    // Will never reach this
    return 0;
}
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

 ![image](https://user-images.githubusercontent.com/99388270/193520085-9b853134-2999-45f2-ac24-f8976f50c2f9.jpeg)

