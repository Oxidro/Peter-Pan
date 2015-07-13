#include "Midfielder.h"
#include <iostream>

Midfielder::Midfielder(Player const& p)
	:Player(p)
{}

void Midfielder::act(Player* A, Player* B, Point &ball)
{
	if (ball == getPosition()) {
		if(rand() % getAccuracity() != 0 ) {
			Player* myTeam = (iAmInTheTeam(A))? A : B;
			passTheBall(myTeam, ball);
		}else
			randomShot(ball);
	}else{
		if (iAmCloseToTheBall(ball))
			runToTheBall(A,B, ball);
		else
			chill();
	}
}
