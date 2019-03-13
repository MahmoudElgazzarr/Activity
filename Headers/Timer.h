/*
 * delay_Timer.h
 *
 * Created: 2/14/2019 10:07:03 AM
 *  Author: AVE-LAP-040
 */ 


#ifndef DELAY_TIMER_H_
#define DELAY_TIMER_H_

#include <stdint.h>

extern volatile uint8_t Sec;

#define OS_TICK_INTERVAL_MSEC 1

void timer_init(void);
void timer_delay(uint32_t n);
void set_Callback_Function(void (*ptr)(void));
#endif /* DELAY_TIMER_H_ */
