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
	Violation(int noPunishment_=0, int yellowCards_=0, int redCards_=0):
		noPunishment(noPunishment_),yellowCards(yellowCards_),redCards(redCards_){};
};

class Event
{
	int goalsOfTeamA;
	int goalsOfTeamB;
	Violation violationsA;
	Violation violationsB;

    void locationBall(Point);
public:
    Event();
	friend std::ostream& operator<<(std::ostream& os, Event event);
	void setGoalsOfTeamA(int const g) { goalsOfTeamA =  g; }
	void setGoalsOfTeamB(int const g) { goalsOfTeamB =  g; }
	int getGoalsOfTeamA() {return goalsOfTeamA;}
	int getGoalsOfTeamB() {return goalsOfTeamB;}
};



#endif /* EVENT_H_ */
