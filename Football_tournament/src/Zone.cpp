/*
 * Zone.cpp
 *
 *  Created on: Jun 1, 2015
 *      Author: ivko
 */
#include"Zone.h"

Zone Zone::operator()(int a, int b, int c, int d)
{
	bottomLeft(a, b);
	topRight(c, d);
	return *this;
}

Zone::Zone(Point p1, Point p2) {
	bottomLeft = p1;
	topRight = p2;
}

bool Zone::inTheZone(Point point)
{
	if(point>=bottomLeft && point<=topRight)
		return true;
	return false;
}


