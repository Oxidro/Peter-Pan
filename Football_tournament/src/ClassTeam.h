/*
 * ClassTeam.h
 *
 *  Created on: Mar 28, 2015
 *      Author: ivko
 */

#ifndef CLASSTEAM_H_
#define CLASSTEAM_H_

class Player
{
private:
	char* name;
public:
	Player(){name="Gosho";}
	Player(char*_name){name=_name;}
	Player* getPlayer(){return this;};
	char* getName(){return name;};
	void print();
};


class Team
{
private:
	char* teamName;
	char group;
	Player* players[18];
	int won, draw, lost, goalDifference, totalPoints, top;

public:

	Team(char* _teamName, char _group)
	{
		teamName=_teamName;
		group=_group;
		won=draw=lost=goalDifference=totalPoints=0;
		top=-1;
	}

	char* getTeamName(){return teamName;};
	char getGroup(){return group;};

	int getWon(){return won;};
	int getDraw(){return draw;};
	int getLost(){return lost;};
	int getGoalDifferece(){return goalDifference;};
	int getTotalPoints(){return totalPoints;};

	Team* getTeam(){return this;};

	void setteamName(char* _teamName){teamName=_teamName;};
	void setGroup(char _group){group=_group;};
	void setWor(int _won){won=_won;};
	void setDraw(int _draw){draw=_draw;};
	void setLost(int _lost){lost=_lost;};
	void setGoalDifference(int _goalDifference){goalDifference=_goalDifference;};
	void setTotalPoints(int _totalPoints){totalPoints=_totalPoints;};

	void addPlayer(Player*);
	void removePlayer(Player*);

	void printTeam();
	void printTeamStatistics();
};

#endif /* CLASSTEAM_H_ */
