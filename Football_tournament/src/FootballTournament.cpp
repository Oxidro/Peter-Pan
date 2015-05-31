//============================================================================
// Name        : FootballTournament.cpp
// Author      : Ivailo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Match.h"
#include "Event.h"
#include "Team.h"
#include "Player.h"
#include "Attacker.h"
#include "Midfielder.cpp"
#include "Defender.h"
#include "Goalkeeper.h"
#include "Point.h"
#include "Zone.h"

using namespace std;

int main()
{
	Player players1[18];
	Player players2[18];
	Team team1("Name1", players1);
	Team team2("Name2", players2);

	Match match(team1, team2);

	return 0;
}
