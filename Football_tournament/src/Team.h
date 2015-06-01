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

public:
	Team();
	Team(const Team&);
	Team &operator=(const Team&);
	~Team();

	Team(char*, Player[]);

	char* getTeamName() {return teamName;}

	Team* getTeam() {return this;}

	void setTeamName(char* _teamName);

	bool hasPlayer(Player p);

	void printTeam();
	void printTeamStatistics();
};

#endif /* CLASSTEAM_H_ */
