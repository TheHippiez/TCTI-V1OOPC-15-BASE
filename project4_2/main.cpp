#include "hwlib.hpp"
int main( void ){ 
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    auto led0 = hwlib::target::pin_out( hwlib::target::pins::d3 );
    auto led1 = hwlib::target::pin_out( hwlib::target::pins::d4 );
    auto led2 = hwlib::target::pin_out( hwlib::target::pins::d5 );
    auto led3 = hwlib::target::pin_out( hwlib::target::pins::d6 );
   
    auto knop_minder = hwlib::target::pin_in( hwlib::target::pins::d1 )
    auto knop_meer   = hwlib::target::pin_in( hwlib::target::pins::d2 )
    auto knop_out    = hwlib::target::pin_in( hwlib::target::pins::d7 )

     // enable the clock to all GPIO
    PMC->PMC_PCER0 = ( 0x3F << 11 ); 

    int i;
    for(i = 0; i<10 ; i++){
      led0.set( 1 ); led1.set ( 1 );hwlib::wait_ms( 500 ); led0.set( 0 ); led1.set ( 0 ); 
      led1.set( 1 ); led2.set ( 1 );hwlib::wait_ms( 500 ); led1.set( 0 ); led2.set ( 0 );
      led2.set( 1 ); led3.set ( 1 );hwlib::wait_ms( 500 ); led2.set( 0 ); led3.set ( 0 );
      led2.set( 1 ); led1.set ( 1 );hwlib::wait_ms( 500 ); led2.set( 0 ); led1.set ( 0 ); 
   }
}