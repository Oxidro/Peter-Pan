/*
 * Goalkeeper.cpp
 *
 *  Created on: May 10, 2015
 *      Author: ivko
 */

#include "math.h"
#include <cstdlib>
#include "Player.h"

class Goalkeeper : Player
{
private:
	int span; //arms spread + small jump to a side
public:
	bool defend(Point, Point, int);
};

bool Goalkeeper::defend()
{
	Zone defendingRadius(position+span, position-span);
	if(defendingRadius(ball))
		return true;
	return false;
}



