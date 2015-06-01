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
	Event game;
	Point ball;

public:
	Match(Team, Team);

	void setStartPosition();

	void move(Player);

	void playMatch();

	int ballStatus(Player);

	bool playerIsCloseToTheBall(Player);

	Point getBall(){return ball;}

	void setZones();
};


#endif /* MATCH_H_ */
