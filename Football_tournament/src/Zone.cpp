/*
 * Zone.cpp
 *
 *  Created on: Jun 1, 2015
 *      Author: ivko
 */
#include"Zone.h"

Zone Zone::operator()(int x1, int y1, int x2, int y2)
{
	bottomLeft(x1, y1);
	topRight(x2, y2);
	return *this;
}

Zone::Zone(Point p1, Point p2)
{
	bottomLeft = p1;
	topRight = p2;
}

bool Zone::inTheZone(Point point)
{
	if(point>=bottomLeft && point<=topRight)
		return true;
	return false;
}


