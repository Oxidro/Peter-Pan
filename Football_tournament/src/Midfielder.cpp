#include "Midfielder.h"

void Midfielder::act(Player* A, Player* B, Point ball){
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
