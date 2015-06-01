#include "Match.h"

Match::Match(Team _team1, Team _team2)
:A(_team1),B(_team2),ball(60,45),game()
{}

void Match::setStartPosition(Team A_, Team B_)
{

}



void Match::setZones()
{


	A.players[0].setZone(105, 25, 120, 65);

}

bool Match::playerIsCloseToTheBall(Player p) {

	if(p.zone(ball))
		return true;
	return false;
}

int Match::ballStatus(Player p) {
	if(A.hasPlayer(p)) {
		for(int i=0; i<11; i++) {
			if(ball == A.players[i].getPosition())
				return 1;
		}
	}else {
		for(int i=0; i<11; i++) {
			if(ball == B.players[i].getPosition())
				return 1;
		}
	}
	return 0;
}

void Match::move(Player p) {
	if (ball == p.getPosition()) {
		ball = p.whatToDoWithTheBall();
	} else if (ballStatus(p) == 1) {
		p.run(WITH_THE_TEAM);
	} else {
		if (playerIsCloseToTheBall(p))
			p.run(TO_THE_BALL);
		else
			p.run(CHILL);
	}

}

void Match::playMatch() {
	for(int min = 1; min <= 90; min++) {
		for(int i=0; i<11; i++) {
			move(A.players[i]);
			move(B.players[i]);
		}
	}
}
