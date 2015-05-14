/*
 * TeamRealization.cpp
 *
 *  Created on: Mar 28, 2015
 *      Author: ivko
 */
#include<iostream>
#include"string.h"

#include "Team.h"
using namespace std;

void printStr(char *str) {
	char* pointerToStr = str;
	while (*pointerToStr) {
		cout << *pointerToStr++;
	}
}
Team::Team() {
	teamName = new char[51];

}

void Team::setteamName(char* _teamName) {
	int len = strlen(_teamName);
	delete[] teamName;
	teamName = new char[len + 1];
	strcpy(teamName, _teamName);
	teamName[len + 1] = '\0';
}

Team::Team(const Team& t) :
		teamName(NULL) {
	setteamName(t.teamName);
}

Team& Team::operator=(const Team& t) {
	if (this == &t)
		return *this;

	setteamName(t.teamName);
	return *this;
}

Team::~Team() {
	delete teamName;
}

bool Team::hasPlayer(Player p) {
	for(int i=0; i<18; i++)
		if(p == players[i])
			return true;

	return false;
}

/*
 void Player::print()
 {
 cout<<"Name: ";
 printStr(name);
 }

 void Team::addPlayer(Player *p)
 {
 players[++top]=p;
 }

 void Team::removePlayer(Player *p)
 {
 for(int i=0; i<=top; i++)
 {
 if(p==players[i])
 {
 i++;
 players[i-1]=players[i];
 }
 }
 top--;
 }
 void Team::printTeam()
 {
 cout<<"Team name: "<<teamName<<endl;
 cout<<"Group: "<<group<<endl;
 cout<<"Players: "<<endl;
 for(int i=0; i<=top; i++)
 {
 printStr(players[i]->getName());
 }
 }
 void Team::printTeamStatistics()
 {
 cout<<"Team name W   D   L   GD   Pts";
 for(int i=0; i<3; i++)
 {
 shortName(teamName[i]);
 }
 cout<<won<<"       "<<draw<<"   "<<lost<<"   "<<goalDifference<<"   "<<totalPoints;

 }
 */

