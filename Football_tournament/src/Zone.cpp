/*
 * Zone.cpp
 *
 *  Created on: Jun 1, 2015
 *      Author: ivko
 */

Zone::Zone(){}

bool Zone::inTheZone(Point const& point)
{
	if(point>=bottomLeft && point<=topRight)
		return true;
	return false;
}


