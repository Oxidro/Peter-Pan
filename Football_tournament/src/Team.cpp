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

Team::Team()
	:teamName(""), players(NULL)
{}

Team::Team(std::string _name, Player* _players)
{
	teamName=_name;
	setPlayers(_players);
}

void Team::setPlayers(Player* p)
{
	players=new Player[17];
	for(int i=0; i<17; i++)
	{
		players[i]=p[i];
	}
}

Team::Team(const Team& t) :players(NULL)
{
	teamName=t.teamName;
	setPlayers(t.players);
}

Team& Team::operator=(const Team& t)
{
	if (this == &t)
		return *this;
	teamName=t.teamName;
	delete[] players;
	setPlayers(t.players);
	return *this;
}

Team::~Team()
{
	delete[] players;
}
