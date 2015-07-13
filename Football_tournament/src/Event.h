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
#include <string>
#include <vector>
#include "Point.h"
#include "Violation.h"
#include "Observer.h"

const int MAX=100;

class Event : Observer
{
	std::string nameA;
	std::string nameB;
	int goalsOfTeamA;
	int goalsOfTeamB;
	std::vector<Violation> violationsA;
	std::vector<Violation> violationsB;
	Point ball;

    void locationBall(Point);
public:
    Event();
    Event(std::string, std::string);
    Event(Event const&);

    Point getBall() { return ball; }
    void setBall(Point _ball) { ball=_ball; }
	void setGoalsOfTeamA(int const g) { goalsOfTeamA =  g; }
	void setGoalsOfTeamB(int const g) { goalsOfTeamB =  g; }
	int getGoalsOfTeamA() {return goalsOfTeamA;}
	int getGoalsOfTeamB() {return goalsOfTeamB;}
	void setNameA(std::string a) {nameA=a;}
	void setNameB(std::string b) {nameB=b;}

	void addViolation(Violation, char);

	void print();
	void Update(int, int);
	void Update(Point const&);
	void Update(Violation const&, char);
};



#endif /* EVENT_H_ */
