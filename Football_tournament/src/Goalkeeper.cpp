/*
 * Goalkeeper.cpp
 *
 *  Created on: May 10, 2015
 *      Author: ivko
 */

#include "math.h"
#include <cstdlib>
#include "Player.h"

class Goalkeeper :public Player
{
private:
	int reactionTime; //seconds needed to start running
	int span; //arms spread + small jump to a side
	int speed; // squares per second
public:
	bool defend(Point, Point, int);
};

bool Goalkeeper::defend(Point landing, Point shootingPoint, int _speed)
{
	double visibility=(rand()%101)/100; // from 0 to 1 depending on the situation
	double defendingRadius;
	if(landing.keeperCanCatchTheBall(position,span))
		return true;
	else if(visibility>=0.5)
	{
		int distance = shootingPoint.distance(landing);
		defendingRadius=(abs(distance)/_speed-reactionTime)*speed;
		if(landing.keeperCanCatchTheBall(position,((int)defendingRadius+rand()%1)))
			return true;
	}
	else
	{
		if(rand()%101>=50)
			return true;
	}
	return false;
}



