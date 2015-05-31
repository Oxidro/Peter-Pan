/*
 * Event.h
 *
 *  Created on: May 18, 2015
 *      Author: ivko
 */

#ifndef EVENT_H_
#define EVENT_H_

#include <iostream>
#include <cstring>
#include "Point.h"

const int MAX=100;

struct Violation
{
	int noPunishment;
	int yellowCards;
	int redCards;
public:
	Violation(int noPunishment=0, int yellowCards=0, int redCards=0);
};

class Event
{
	string ballPosition;
	int goalsOfTeamA;
	int goalsOfTeamB;
	Violation violationsA;
	Violation violationsB;

    void locationBall(Point);
public:
    Event();
	friend std::ostream& operator<<(std::ostream& os, Event event);
};



#endif /* EVENT_H_ */
