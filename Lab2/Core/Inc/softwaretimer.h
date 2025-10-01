#ifndef SOFTWARETIMER_H
#define SOFTWARETIMER_H

#include "main.h"  // nếu cần typedef, HAL, GPIO, v.v.

// Biến counters và flags
extern int timer0_counter;
extern int timer1_counter;
extern int timer2_counter;

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;

// Chu kỳ timer
#define TIMER_CYCLE 10

// Các hàm điều khiển timer
void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void timer_run(void);

#endif /* SOFTWARETIMER_H */
