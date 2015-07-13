/*
 * Attacker.cpp
 *
 *  Created on: May 18, 2015
 *      Author: ivko
 */
#include "Attacker.h"

Attacker::Attacker(Player const& p)
	:Player(p)
{}

void Attacker::act(Player* A, Player* B, Point &ball)
{
	Point gate;
	if(getPosition().getX()>60)
		gate(120, 45);
	else
		gate(0, 45);

	if (ball == getPosition()) {
		if(getPosition().distance(gate)>=getStrenght()) {
			Point shootTo(gate.getX(), gate.getY()+rand() % 4 + (-4));
			ball(shootTo.getX(), shootTo.getY() + rand() % getAccuracity() + (-getAccuracity()));
			Notify(ball);
		}else
			randomShot(ball);
	}else{
		if (iAmCloseToTheBall(ball))
			runToTheBall(A,B, ball);
		else
			chill();
	}


}


