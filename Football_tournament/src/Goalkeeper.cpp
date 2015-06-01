/*
 * Goalkeeper.cpp
 *
 *  Created on: May 10, 2015
 *      Author: ivko
 */

#include "Goalkeeper.h"

void Goalkeeper::specialMove()
{
	Zone defendingRadius(position+span, position-span);
	if(defendingRadius(ball))
		setPosition(ball);
	else goal;
	//waiting for EVENT
}



