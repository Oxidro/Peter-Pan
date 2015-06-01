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
	Zone(Point, Point);
	bool inTheZone(Point const&);
	Zone operator()(int, int, int, int);
	Point getBottomPoint(){return bottomLeft;}
	Point getTopPoint(){return topRight;}
};

#endif /* ZONE_H_ */
