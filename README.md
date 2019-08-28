# Unused-Pins
Small Library to Quickly set all unused pins to INPUT with PULL-UP

# NOT FULLY DEVELOPED !

Currenly only used at start of a program to set ALL pins as inputs with Pullup.  
..Later instructions used to set-up all used pins.

Usage:                                                              
...initiate before any other Class or pinMode setup.
...ie:
.......#include "UnusedPins.h"         // Should be first after Arduino.h header
.......// setup unused pins for 328p
.......UnusedPins unPins(UP_ATMEGA328p);

Other classes/functions will overwrite the default as needed  

Currently only supports:  
...Name:..............Identifier:

ATMEGA328p...........UP_ATMEGA328p

More to come. :)
  
