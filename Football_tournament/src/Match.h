/*
 * Match.h
 *
 *  Created on: 10.05.2015 �.
 *      Author: Deni
 */

#ifndef MATCH_H_
#define MATCH_H_

class Match {
private:
	Team A;
	Team B;
	Point ball;

public:
	Match(Team, Team, Point);

	void setStartPosition(Team, Team);

	void movement(Player);

	void playMatch();

	int ballStatus(Player);

	bool playerIsCloseToTheBall(Player);

	Point getBall(){return ball;};
};

typedef enum
{
	TO_THE_BALL=1,
	WITH_THE_TEAM=2,
	CHILL=3
} RunTypes;

#endif /* MATCH_H_ */
