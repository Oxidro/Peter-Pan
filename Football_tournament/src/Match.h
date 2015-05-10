/*
 * Match.h
 *
 *  Created on: 10.05.2015 ã.
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
	void setStartPosition(Team, Team);

	void movement();

	void playMatch();

	Point getPlayerPos(Player);

};



#endif /* MATCH_H_ */
