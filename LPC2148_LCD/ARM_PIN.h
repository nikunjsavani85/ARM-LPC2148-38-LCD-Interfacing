//********************************************************************
//********************************************************************
//
//									ARM REG NAME DECLARATION													
//														By																			
//											Nikunj Savani																	
//
//********************************************************************
//********************************************************************
#ifndef __ARM_PIN_H
#define __ARM_PIN_H

//------------ Slow GPIO port0 ---------------//

#define DIRPIN0 IO0DIR		// PIN as input or output (Default - Input)
#define CLRPIN0 IO0CLR		// Input-output pin clear 
#define SETPIN0 IO0SET		// Input-output pin set
#define RPIN0 	IO0PIN		// Read PIN Status

//------------ Fast GPIO Port0 ---------------//

#define FDIRPIN0 FIO0DIR		// PIN as input or output (Default - Input)
#define FCLRPIN0 FIO0CLR		// Input-output pin clear 
#define FSETPIN0 FIO0SET		// Input-output pin set
#define FRPIN0 	 FIO0PIN		// Read PIN Status

//------------ Slow GPIO port1 ---------------//

#define DIRPIN1 IO1DIR		// PIN as input or output (Default - Input)
#define CLRPIN1 IO1CLR		// Input-output pin clear 
#define SETPIN1 IO1SET		// Input-output pin set
#define RPIN1 	IO1PIN		// Read PIN Status

//------------ Fast GPIO port1 ---------------//

#define FDIRPIN1 FIO1DIR		// PIN as input or output (Default - Input)
#define FCLRPIN1 FIO1CLR		// Input-output pin clear 
#define FSETPIN1 FIO1SET		// Input-output pin set
#define FRPIN1 	 FIO1PIN		// Read PIN Status

#endif
