/*
 * Goalkeeper.cpp
 *
 *  Created on: May 10, 2015
 *      Author: ivko
 */

#include "math.h"
#include <cstdlib>

struct coordinates
{
	int x;
	int y;
public:
	bool operator()(coordinates, int);
	friend int operator-(coordinates, coordinates);
};

bool coordinates::operator()(coordinates middle, int len)
{
	if(x<=middle.x+len && x>=middle.x-len && y<=middle.y+len && y>=middle.y-len)
	{
		return true;
	}
	return false;
}

int operator-(coordinates a, coordinates b)
{
	return abs(abs(a.y-b.y)-abs(a.x-b.x)/2);
}

class Goalkeeper
{
private:
	coordinates mySpot; // coordinates of the goalkeeper
	double reactionTime; //seconds needed to start running
	int span; //arms spread + small jump to a side
	double speed; // squares per second
public:
	bool defend(coordinates, coordinates, double);
};

bool Goalkeeper::defend(coordinates landing, coordinates shootingPoint, double _speed)
{
	double visibility=(rand()%101)/100; // from 0 to 1 depending on the situation
	double defendingRadius;
	if(landing(mySpot,span))
		return true;
	else if(visibility>=0.5)
	{
		defendingRadius=(abs(shootingPoint-landing)/_speed-reactionTime)*speed;
		if(landing(mySpot,(int)defendingRadius+rand()%1))
			return true;
	}
	else
	{
		if(rand()%101>=50)
			return true;
	}
	return false;
}


