/*
 * Attacker.cpp
 *
 *  Created on: May 18, 2015
 *      Author: ivko
 */
#include "Attacker.h"

void Attacker::specialMove(Point ball)
{
	Point gate;
	if(getPosition().getX()>60)
		gate(120, 45);
	else
		gate(0, 45);
	Point shootTo(gate.getX(), gate.getY()+rand() % 4 + (-4));
	ball(shootTo.getX(), shootTo.getY() + rand() % getAccuracity() + (-getAccuracity()));
}


