/*
 * Zone.h
 *
 *  Created on: Jun 1, 2015
 *      Author: ivko
 */

#ifndef ZONE_H_
#define ZONE_H_

#include "Point.h"

class Zone
{
	Point bottomLeft;
	Point topRight;

public:
	Zone():bottomLeft(0,0), topRight(0,0){};
	Zone(Point, Point);

	Point getBottomPoint(){return bottomLeft;}
	Point getTopPoint(){return topRight;}

	bool inTheZone(Point);
	Zone operator()(int, int, int, int);
};

#endif /* ZONE_H_ */
