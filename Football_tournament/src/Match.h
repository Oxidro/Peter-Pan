/*
 * Match.h
 *
 *  Created on: 10.05.2015 �.
 *      Author: Deni
 */

#ifndef MATCH_H_
#define MATCH_H_

#include <cstdlib>
#include "Team.h"
#include "Event.h"


class Match {
private:
	Team A;
	Team B;
	Point ball;
	//Event game;

public:
	Match();
	Match(Team, Team);

    Point getBall(){return ball;}

	void setStartPosition();
	void setZones();

	void move(Player);
	void playMatch();
	int ballStatus(Player);
	bool playerIsCloseToTheBall(Player);
};


#endif /* MATCH_H_ */
