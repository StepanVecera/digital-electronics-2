# Lab 3: Stepan Vecera

### Overflow times

1. Complete table with overflow times.

   | **Module** | **Number of bits** | **1** | **8** | **32** | **64** | **128** | **256** | **1024** |
   | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
   | Timer/Counter0 | 8  | 16u | 128u | -- | 1,024m | -- | 4,096m | 16,384m |
   | Timer/Counter1 | 16 |  4,096m | 32,768m | -- | 262,144m | -- | 1,048576 | 4,1943 |
   | Timer/Counter2 | 8  | 16u | 128u | 512u | 1,024m | 2,048m | 4,096m | 16,384m |

### Interrupts

2. In `timer.h` header file, define macros also for Timer/Counter2. Listing of part of the header file with settings for Timer/Counter2. Always use syntax highlighting, meaningful comments, and follow C guidelines:

   ```c
   /**
    * @name  Definitions for 8-bit Timer/Counter2
    * @note  t_OVF = 1/F_CPU * prescaler * 2^n where n = 8, F_CPU = 16 MHz
    */
   // WRITE YOUR CODE HERE
   #define TIM2_stop()           TCCR2B &= ~((1<<CS22) | (1<<CS21) | (1<<CS20));
/** @brief Set overflow 16us, prescaler 001 --> 1 */
#define TIM2_overflow_16us()   TCCR2B &= ~((1<<CS22) | (1<<CS21)); TCCR2B |= (1<<CS20);
/** @brief Set overflow 128us, prescaler 010 --> 8 */
#define TIM2_overflow_128us()  TCCR2B &= ~((1<<CS22) | (1<<CS20)); TCCR2B |= (1<<CS21);
/** @brief Set overflow 262ms, prescaler 011 --> 64 */
#define TIM2_overflow_512ums() TCCR2B &= ~(1<<CS22); TCCR2B |= (1<<CS21) | (1<<CS20);
/** @brief Set overflow 1s, prescaler 100 --> 256 */
#define TIM2_overflow_1ms()    TCCR2B &= ~((1<<CS21) | (1<<CS20)); TCCR2B |= (1<<CS22);
/** @brief Set overflow 4s, prescaler // 101 --> 128 */
#define TIM2_overflow_2ms()    TCCR2B &= ~(1<<CS21); TCCR2B |= (1<<CS22) | (1<<CS20);
/** @brief Set overflow 4s, prescaler // 110 --> 256 */
#define TIM2_overflow_4ms()    TCCR2B &= ~(1<<CS20); TCCR2B |= (1<<CS22) | (1<<CS21);
/** @brief Set overflow 4s, prescaler // 111 --> 1024 */
#define TIM2_overflow_16ms()   TCCR2B = (1<<CS22) | (1<<CS20) | (1<<CS21);

/** @brief Enable overflow interrupt, 1 --> enable */
#define TIM2_overflow_interrupt_enable()  TIMSK2 |= (1<<TOIE2);
/** @brief Disable overflow interrupt, 0 --> disable */
#define TIM2_overflow_interrupt_disable() TIMSK2 &= ~(1<<TOIE2);

   /** @brief Stop timer, prescaler 000 --> STOP */
