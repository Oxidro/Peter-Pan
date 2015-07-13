/*
 * Goalkeeper.cpp
 *
 *  Created on: May 10, 2015
 *      Author: ivko
 */

#include "Goalkeeper.h"

Goalkeeper::Goalkeeper(Player const& p, int _span)
	:Player(p), span(_span)
{}

void Goalkeeper::specialMove(Player* A, Player* B, Point ball)
{
	Point gate;
	Player* myTeam = (iAmInTheTeam(A))? A : B;
	if(getPosition().getX()>60)
		gate(120, 45);
	else
		gate(0, 45);

	if (ball == getPosition()) {
		passTheBall(myTeam, ball);
	}else if(ball.getX() == gate.getX() &&
			ball.getY() < gate.getY()+4 &&
			ball.getY() > gate.getY()-4){
		Zone defendingRadius(getPosition()+span, getPosition()-span);
		if(defendingRadius.inTheZone(ball))
			setPosition(ball);
		else
			myTeam==A ? Notify(0, 1) : Notify(1, 0);
	}else{
		if (iAmCloseToTheBall(ball))
			runToTheBall(A,B, ball);
		else
			chill();
	}
}



