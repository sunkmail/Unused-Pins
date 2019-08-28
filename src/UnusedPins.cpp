//	Created in VS Code (from user Template) on:  2019-08-26
//	Created by: sunkm

//  !   Usage:                                                              
//  !   initiate before any other Class or pinMode setup.                   
//  !   ie:
//  !       #include "UnusedPins.h"         // Should be first after Arduino.h header
//  !       // setup unused pins for 328p
//  !       UnusedPins unPins(UP_ATMEGA328p);
//  !
//  !   Other classes/functions will overwrite the default as needed  

#include <arduino.h>
#include "UnusedPins.h"

// Constructor
UnusedPins::UnusedPins(int x){
    
    _uC = x;
    switch (_uC){

     case 0:{
        default328p();
         break;
     }

     }
    
}


// Default Arrangement for ATMEGA328p (Standard Arduino) for all inputs
// Sets all pins as inputs with pull-ups
void UnusedPins::default328p(){
    
    // **************************************************************
    // ****************** UNUSED Pin Setups *************************
    // Set all pins as Input with Pullup as default


    pinMode(0, INPUT_PULLUP);   // Serial  
    pinMode(1, INPUT_PULLUP);   // Serial
    pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
    pinMode(6, INPUT_PULLUP);
    pinMode(7, INPUT_PULLUP);
    pinMode(8, INPUT_PULLUP);
    pinMode(9, INPUT_PULLUP);
    pinMode(10, INPUT_PULLUP);
    pinMode(11, INPUT_PULLUP);
    pinMode(12, INPUT_PULLUP);
    pinMode(13, INPUT_PULLUP);

    pinMode(A0, INPUT_PULLUP);
    pinMode(A1, INPUT_PULLUP);
    pinMode(A2, INPUT_PULLUP);
    pinMode(A3, INPUT_PULLUP);
    pinMode(A4, INPUT_PULLUP);      // I2C Line
    pinMode(A5, INPUT_PULLUP);      // I2C Line
 

}