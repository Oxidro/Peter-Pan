#include<iostream>
#include"Defender.h"

void Defender::act(Player* A, Player* B, Point ball) {
	if (ball == getPosition()) {
		Player* myTeam = (iAmInTheTeam(A))? A : B;
		passTheBall(myTeam, ball);
	}else if(iAmCloseToTheBall(ball)) {
		if(!myTeamHaveTheBall(A,B, ball)) {
			int n=rand() % aggression;
			if(n<=aggression/4)
			{
				if(rand() % superPower>superPower/2)
					ball=getPosition();
			}
			if(n>aggression/4 && n<=aggression/2)
			{
				;//noPunishment++;
			}
			if(n>aggression/2 && n<=3*(aggression/4))
			{
				;//yellowCard++;
			}
			if(n>3*(aggression/4))
			{
				;//redCard++;
			}
		}else
			runToTheBall(A,B, ball);
	}else
		chill();
}
