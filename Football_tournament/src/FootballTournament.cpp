//============================================================================
// Name        : FootballTournament.cpp
// Author      : Ivailo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <cstring>

#include "Match.h"
#include "Event.h"
#include "Team.h"
#include "Player.h"
#include "Attacker.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"
#include "Point.h"
#include "Zone.h"

using namespace std;

int main()
{
	Player players [17];
	players[0]=Goalkeeper(Player(1, 1, "Ramon Villaverde", 4, 30, 3), 1);
	players[1]=Defender(Player(3, 10, "Enric Gensana", 7, 28, 4), 4);
	players[2]=Defender(Player(4, 15, "Marti Verges", 3, 44, 2), 4);
	players[3]=Defender(Player(5, 22, "Ferran Olivella", 4, 49, 1), 4);
	players[4]=Defender(Player(6, 26, "Evaristo de Macedo", 7, 22, 5), 4);
	players[5]=Midfielder(Player(15, 17, "Josep Maria Fuste", 6, 40, 4));
	players[6]=Midfielder(Player(16, 21, "Eladio Silvestre", 3, 37, 0));
	players[7]=Midfielder(Player(17, 17, "Joaquim Rife", 4, 39, 0));
	players[8]=Midfielder(Player(18, 9, "Antoni Torres", 5, 27, 5));
	players[9]=Attacker(Player(23, 6, "Juan Carlos Perez", 3, 37, 3));
	players[10]=Attacker(Player(24, 11, "Marcial Pina", 6, 25, 0));

	Team A("NameA", players);

	Player p [17];
	p[0]=Goalkeeper(Player(100, 1, "Ramon Villaverde", 4, 30, 3), 1);
	p[1]=Defender(Player(300, 10, "Enric Gensana", 7, 28, 4), 4);
	p[2]=Defender(Player(400, 15, "Marti Verges", 3, 44, 2), 4);
	p[3]=Defender(Player(500, 22, "Ferran Olivella", 4, 49, 1), 4);
	p[4]=Defender(Player(600, 26, "Evaristo de Macedo", 7, 22, 5), 4);
	p[5]=Midfielder(Player(150, 17, "Josep Maria Fuste", 6, 40, 4));
	p[6]=Midfielder(Player(160, 21, "Eladio Silvestre", 3, 37, 0));
	p[7]=Midfielder(Player(170, 17, "Joaquim Rife", 4, 39, 0));
	p[8]=Midfielder(Player(180, 9, "Antoni Torres", 5, 27, 5));
	p[9]=Attacker(Player(230, 6, "Juan Carlos Perez", 3, 37, 3));
	p[10]=Attacker(Player(240, 11, "Marcial Pina", 6, 25, 0));

	Team B("NameB", p);

	Match match(A, B);
	match.playMatch();
	return 0;
}


