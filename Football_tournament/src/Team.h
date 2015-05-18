/*
 * ClassTeam.h
 *
 *  Created on: Mar 28, 2015
 *      Author: ivko
 */

#ifndef CLASSTEAM_H_
#define CLASSTEAM_H_

#include "Player.h"
class Team {
private:
	char* teamName;
	Player players[18];
	/*
	 char group;
	 int won, draw, lost, goalDifference, totalPoints, top;
	 */

public:
	// Default constructor
	Team();
	// Coppy constructor
	Team(const Team&);
	// Operator =
	Team &operator=(const Team&);
	// Destructor
	~Team();

	Team(char*, Player[]);

	char* getTeamName() {
		return teamName;
	}
	;

	Team* getTeam() {
		return this;
	}
	;

	void setteamName(char* _teamName);

	bool hasPlayer(Player p);

	/*	void addPlayer(Player*);
	 void removePlayer(Player*);
	 */
	void printTeam();
	void printTeamStatistics();
};

#endif /* CLASSTEAM_H_ */
