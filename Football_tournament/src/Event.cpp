/*
 * Event.cpp
 *
 *  Created on: May 18, 2015
 *      Author: ivko
 */

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
	char ballPosition[MAX];
	int goalsOfTeamA;
	int goalsOfTeamB;
	Violation violationsA;
	Violation violationsB;

public:

};


