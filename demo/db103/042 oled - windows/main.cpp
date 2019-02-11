// ==========================================================================
//
// OLED demo on DB103 (LPC1114)
//
// (c) Wouter van Ooijen (wouter@voti.nl) 2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt) 
//
// ==========================================================================

#include "hwlib.hpp"

int main( void ){
       
   namespace target = hwlib::target;
   
   auto scl      = hwlib::target::pin_oc{ 0, 4 };
   auto sda      = hwlib::target::pin_oc{ 0, 5 };
   
   auto i2c_bus  = hwlib::i2c_bus_bit_banged_scl_sda( scl, sda );
   auto oled     = hwlib::glcd_oled( i2c_bus, 0x3c ); 
   
   
   auto font1     = hwlib::font_default_8x8();
   auto console1  = hwlib::window_ostream( oled, font );
   auto console2  = hwlib::window_ostream( oled, font );
   
   display 
      << "\f" << "Hello world!!" 
      << "\n" << "second line.."
      << "\t0305" << "pos 3 line 5"
      << hwlib::flush;     
}
