// /**
//  * @file   test004.c
//  * @author Scott Craig and Justin Tanner
//  * @date   Mon Oct 29 16:19:32 2007
//  * 
//  * @brief  Test 004 - can schedule SYSTEM tasks in the expected order
//  * 
//  */
// #include "kernel.h"
// #include "os.h"
// #include "led_test.h"

// void setup () {
//   init_LED_ON_BOARD();
//   init_LED_PING();
//   init_LED_ISR();
// }
// /*============
// * A Simple Test 
// * ============
// */

// void Ping() 
// {
//   for(;;){
//     // disable_LEDs();
//     // init_LED_PING();
//     led_toggle(LED_PING);
// 	//enable_LED(LED_PING);
//     Task_Next();
//   }
// }
// // Pong
// void Pong() 
// {
//   // disable_LEDs();
//   for(;;){
//     // disable_LEDs();
//     // init_LED_ON_BOARD();
//     led_toggle(LED_ON_BOARD);
//     //enable_LED(LED_ON_BOARD);
//     // disable_LEDs();

//     // _delay_ms(500);
//     Task_Next();
//   }
// }

// // Pong
// void DisableAllLEDs() 
// {
//   // disable_LEDs();
//   for(;;){
//     // disable_LEDs();
//     // init_LED_ON_BOARD();

//     disable_LEDs();

//     _delay_ms(50);
//     Task_Next();
//   }
// }


// void a_main(void)
// {
//   setup();
//   // disable_LEDs();

//   Task_Create_Period( Pong, 2 , 100, 1, 0);
//   Task_Create_Period( Ping, 2 , 100, 1, 1);
//   //Task_Create_RR( Ping, 2);

//   Task_Create_Period( DisableAllLEDs, 2 , 100, 1, 50);

//   // Task_Create_Period( Ping, 2 , 50, 1, 151);



//   // Task_Create_System( Pong, 1 );
//   // Task_Create_System( Ping, 2 );

//   Task_Terminate();

// }