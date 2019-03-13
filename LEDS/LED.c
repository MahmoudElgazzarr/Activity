/*
 * LED.c
 *
 *  Created on: Mar 13, 2019
 *      Author: AVE-LAP-040
 */


#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "LED.h"

void led1_on()
{
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1);
}

void led1_off()
{
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x0);
}
void led2_on()
{
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2);
}
void led2_off()
{
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x0);
}

void led3_on()
{
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3);
}
void led3_off()
{
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x0);
}
