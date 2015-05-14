/*
 * ClassTeam.h
 *
 *  Created on: Mar 28, 2015
 *      Author: ivko
 */

#ifndef CLASSTEAM_H_
#define CLASSTEAM_H_



class Team
{
private:
	char* teamName;
	char group;
//	Player* players[18];
	int won, draw, lost, goalDifference, totalPoints, top;

public:
	// Default constructor
	Team();
	// Coppy constructor
	Team(const Team&);
	// Operator =
	Team &operator=(const Team&);
	// Destructor
	~Team();

	char* getTeamName(){return teamName;};
	char getGroup(){return group;};

	int getWon(){return won;};
	int getDraw(){return draw;};
	int getLost(){return lost;};
	int getGoalDifferece(){return goalDifference;};
	int getTotalPoints(){return totalPoints;};

	Team* getTeam(){return this;};

	void setteamName(char* _teamName);
	void setGroup(char _group){group=_group;};
	void setWor(int _won){won=_won;};
	void setDraw(int _draw){draw=_draw;};
	void setLost(int _lost){lost=_lost;};
	void setGoalDifference(int _goalDifference){goalDifference=_goalDifference;};
	void setTotalPoints(int _totalPoints){totalPoints=_totalPoints;};

/*	void addPlayer(Player*);
	void removePlayer(Player*);
*/
	void printTeam();
	void printTeamStatistics();
};

#endif /* CLASSTEAM_H_ */
