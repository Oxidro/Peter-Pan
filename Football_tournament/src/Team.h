/*
 * ClassTeam.h
 *
 *  Created on: Mar 28, 2015
 *      Author: ivko
 */

#ifndef CLASSTEAM_H_
#define CLASSTEAM_H_

#include <string>

#include "Player.h"

class Team {
private:
	std::string teamName;
	Player* players;

public:
	Team();
	Team(std::string, Player*);
	Team(const Team&);
	Team &operator=(const Team&);
	~Team();

	Player* getPlayers(){return players;};
	std::string getTeamName() {return teamName;}
	Team* getTeam() {return this;}

	void setPlayers(Player*);
	bool hasPlayer(Player p);

	void printTeam();
	void printTeamStatistics();
};

#endif /* CLASSTEAM_H_ */
