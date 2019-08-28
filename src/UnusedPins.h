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

#ifndef UnusedPins_H
#define UnusedPins_H

// ***** Define verbose names for valid uC's

// Standard Arduino Chip
#define UP_ATMEGA328p 0

class UnusedPins
{
	public:
		UnusedPins(int x);
		
	protected:
	private:
		void default328p();
		int _uC;
};

#endif	// UnusedPins_H