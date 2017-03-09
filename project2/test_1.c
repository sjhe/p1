/**
 * @file   test004.c
 * @author Scott Craig and Justin Tanner
 * @date   Mon Oct 29 16:19:32 2007
 * 
 * @brief  Test 004 - can schedule SYSTEM tasks in the expected order
 * 
 */
#include "kernel.h"
#include "os.h"
#include "led_test.h"

void setup () {
  init_LED_ON_BOARD();
  init_LED_PING();
  init_LED_ISR();
}
/*============
  * A Simple Test 
  *============
  */

void Ping() 
{
  for(;;){
    disable_LEDs();
    _delay_ms(1000);
    enable_LED(LED_PING);
    _delay_ms(1000);
    Task_Next();
  }
}
// Pong
void Pong() 
{
  // disable_LEDs();

  for(;;){
    disable_LEDs();
    _delay_ms(1000);
    enable_LED(LED_ON_BOARD);
    _delay_ms(1000);
    Task_Next();
  }
}

void a_main(void)
{ 
  setup();
  Task_Create( Pong );
  // Task_Create( Ping );
  // Pong();
  // Ping();
  // Pong();
  // for(;;){
  //   disable_LEDs();
  //   _delay_ms(1000);
  //   enable_LED(LED_ON_BOARD);
  //   _delay_ms(1000);
  //   // Task_Next();
  // }
  /* setup the test */
}