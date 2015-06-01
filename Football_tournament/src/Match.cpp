#include "Match.h"

Match::Match(Team _team1, Team _team2) :
		A(_team1), B(_team2) {}

void Match::setStartPosition()
{
	Player* arr = A.getPlayers();
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 11; i++) {
			int x1 = arr[i].getZone().getBottomPoint().getX();
			int y1 = arr[i].getZone().getBottomPoint().getY();
			int x2 = arr[i].getZone().getTopPoint().getX();
			int y2 = arr[i].getZone().getTopPoint().getY();
			int randX = rand() % (x2 - x1) + x1;
			int randY = rand() % (y2 - y1) + y1;
			arr[i].setPosition(randX, randY);
		}
		arr = B.getPlayers();
	}

}

void Match::setZones()
{
	A.getPlayers()[0].setZone(105, 25, 120, 65);
	A.getPlayers()[1].setZone(105, 45, 120, 90);
	A.getPlayers()[2].setZone(105, 0, 120, 45);
	A.getPlayers()[3].setZone(80, 45, 105, 90);
	A.getPlayers()[4].setZone(80, 0, 105, 45);
	A.getPlayers()[5].setZone(40, 67, 80, 90);
	A.getPlayers()[6].setZone(40, 45, 80, 67);
	A.getPlayers()[7].setZone(40, 23, 80, 45);
	A.getPlayers()[8].setZone(40, 0, 80, 23);
	A.getPlayers()[9].setZone(0, 45, 40, 90);
	A.getPlayers()[10].setZone(0, 0, 40, 45);

	B.getPlayers()[0].setZone(0, 25, 25, 65);
	B.getPlayers()[1].setZone(0, 65, 25, 90);
	B.getPlayers()[2].setZone(0, 0, 25, 45);
	B.getPlayers()[3].setZone(25, 45, 50, 90);
	B.getPlayers()[4].setZone(25, 0, 50, 45);
	B.getPlayers()[5].setZone(50, 67, 90, 90);
	B.getPlayers()[6].setZone(50, 45, 90, 67);
	B.getPlayers()[7].setZone(50, 23, 90, 45);
	B.getPlayers()[8].setZone(50, 0, 90, 23);
	B.getPlayers()[9].setZone(90, 45, 120, 90);
	B.getPlayers()[10].setZone(90, 0, 120, 45);
}


void Match::playMatch()
{
	ball(59,45);
	for (int min = 1; min <= 90; min++) {
		for (int i = 0; i < 11; i++) {
			A.getPlayers()[i].act(A.getPlayers(),B.getPlayers(), ball);
			B.getPlayers()[i].act(A.getPlayers(),B.getPlayers(), ball);
		}
	}
}
