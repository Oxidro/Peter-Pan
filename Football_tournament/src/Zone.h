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
	Zone(int, int, int, int);
	bool inTheZone(Point const&);
};

#endif /* ZONE_H_ */
