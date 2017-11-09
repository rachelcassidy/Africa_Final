//////////////////////////////////////////////////////////////////////
//    event.cpp                                                     //
//    Created by Mikaela Smit on 30/10/2014.						//
//    Copyright (c) 2015 Mikaela Smit. All rights reserved.         //
//    Provides  properties of new 'events' being added to EventQ.   //
//////////////////////////////////////////////////////////////////////

#include <stdio.h> 
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "event.h"
#include "person.h"

//// --- OUTSIDE INFORMATION --- ////
extern double StartYear;									


//// --- CLASS (EVENT) CONSTRUCTOR ---
event::event()			
	{														// Miki Notes: Could also write with class constructor: event::event():time(0),sex(2) 
			time=StartYear;									// [...] this is the same thing but could be 'clearner' if lots of functions in constructor
															// StartYear refers to initial time  - this is changed later on in the model
	}	