// ==========================================================================
//
// File      : hwlib-targets.hpp
// Part of   : C++ hwlib library for close-to-the-hardware OO programming
// Copyright : wouter@voti.nl 2017-2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

// included only via hwlib.hpp, hence no multiple-include guard is needed

// this file contains Doxygen lines
/// @file

namespace hwlib {

enum class target_boards {
   none,
   arduino_uno,
   arduino_due,
   blue_pill
};

enum class target_chips {
   atmega328p,
   atsam3x8e,
   stm32f103c8
};
   
}; // namespace hwlib   
