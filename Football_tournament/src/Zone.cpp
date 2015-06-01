/*
 * Zone.cpp
 *
 *  Created on: Jun 1, 2015
 *      Author: ivko
 */

Zone Zone::operator()(int a, int b, int c, int d)
{
	bottomLeft=(a, b);
	topRight=(c, d);
	return this;
}

bool Zone::inTheZone(Point const& point)
{
	if(point>=bottomLeft && point<=topRight)
		return true;
	return false;
}


