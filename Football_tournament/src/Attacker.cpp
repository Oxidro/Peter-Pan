/*
 * Attacker.cpp
 *
 *  Created on: May 18, 2015
 *      Author: ivko
 */
#include"Attacker.h"

void Attacker::specialMove()
{
	Point shootTo=gatePosition.get_y()+rand() % gateLenght/2 + -gateLenght/2;
	ball=shootTo+(rand() % accuracity + -accuracity);
}


