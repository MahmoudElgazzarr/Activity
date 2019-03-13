

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "LED.h"
#include "Delay.h"
#include "Buzzer.h"

//*****************************************************************************
//
//! \addtogroup example_list
//! <h1>Blinky (blinky)</h1>
//!
//! A very simple example that blinks the on-board LED using direct register
//! access.
//

//*****************************************************************************
//
// Blink the on-board LED.
//
//*****************************************************************************

int main(void)
{
    volatile uint32_t ui32Loop;

    //
    // Enable the GPIO port that is used for the on-board LED.
    //
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);

    //
    // Check if the peripheral access is enabled.
    //
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {}
    /*Enable Port D*/
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    /*Wait while Peripheral ready*/
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOD))
        {}
    //
    // Enable the GPIO pin for the LED (PF3).  Set the direction as output, and
    // enable the GPIO pin for digital function.
    //
    // Enable the GPIO pin for the LED (PF2).  Set the direction as output, and
    // enable the GPIO pin for digital function
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2);
    buzzer_init();

    //
    // Loop forever.
    //
    uint32_t count=0;
    while(1)
    {
        /*Delay Timer For 100 MSEC*/
        delayMs(10);
          count++;
        //
        // Turn on the LED.
        //
          if (count == 10 )
          {
              led1_on();
              buzzer_on();
          }
          else if ( count == 20)
          {
              led1_off();
              led2_on();
              buzzer_off();
          }
          else if(count == 30)
          {
              led2_off();
              count = 0;
          }
          /*And So on until count = 200 */
          else if(count == 100)
          {
              led3_on();
          }
          else if(count == 200)
          {
              led3_off();
              count = 0;
          }


    }
}
