#include<iostream>
#include"Defender.h"

Defender::Defender(Player const& p, int _aggression)
	:Player(p), aggression(_aggression)
{}

void Defender::act(Player* A, Player* B, Point ball)
{
	Player* myTeam;
	Player* enemyTeam;
	char c;
	if(iAmInTheTeam(A))
	{
		myTeam=A;
		enemyTeam=B;
		c='A';
	}
	else
	{
		myTeam=B;
		enemyTeam=A;
		c='B';
	}
	if (ball == getPosition())
	{
		passTheBall(myTeam, ball);
	}
	else if(iAmCloseToTheBall(ball))
	{
		if(!myTeamHaveTheBall(A,B, ball))
		{

			int n=rand() % aggression;
			if(n<=aggression/4)
			{
				if(rand() % aggression>aggression/2)
				{
					ball=getPosition();
				}
			}
			if(n>aggression/4 && n<=aggression/2)
			{
				Notify(Violation(getName(), 1, 0, 0), c);
				ball=getHolderPosition(enemyTeam, ball);
			}
			if(n>aggression/2 && n<=3*(aggression/4))
			{
				Notify(Violation(getName(), 0, 1, 0), c);
				ball=getHolderPosition(enemyTeam, ball);
			}
			if(n>3*(aggression/4))
			{
				Notify(Violation(getName(), 0, 0, 1), c);
				ball=getHolderPosition(enemyTeam, ball);
			}
			Notify(ball);
		}
		else
			runToTheBall(A,B, ball);
	}
	else
		chill();
}
