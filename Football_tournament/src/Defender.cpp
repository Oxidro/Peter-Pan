#include<iostream>
#include"Defender.h"

void Defender::specialMove()
{
	if(enemy player has the ball && enemy player in my zone)
	{
		int n=rand() % aggression;
		if(n<=aggression/4)
		{
			if(rand() % superPower>superPower/2)
				ball=this->position;
		}
		if(n>aggression/4 && n<=aggression/2)
		{
			noPunishment++;
		}
		if(n>aggression/2 && n<=3*(aggression/4))
		{
			yellowCard++;
		}
		if(n>3*(aggression/4))
		{
			redCard++;
		}
	}
}


