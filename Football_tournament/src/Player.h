#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <cstdlib>
#include "Point.h"
#include "Zone.h"


const int TO_THE_BALL=1;
const int WITH_THE_TEAM=2;
const int CHILL=3;


class Player{
private:
	char* name;
	int id;
	int number;
	Zone zone;
	Point position;

	int speed;
	int strenght;
	int accuracity;

public:
	Player():name(NULL),id(0),number(0),speed(0),strenght(0),accuracity(0){};
	Player(char*, int, Zone, int, Point, int ,int , int);
	Player(const Player&);
	Player& operator=(const Player&);
	virtual ~Player();

	void setZone(Zone _zone){zone=_zone;}
	void setZone(int x1, int y1, int x2, int y2){zone(x1,y1,x2,y2);}
	Zone getZone() {return zone;}

	void setNumber(int _number){number=_number;}
	int getNumber(){return number;}

	void setId(int _id){id=_id;}
	int getId(){return id;}

	void setName(char*);
	char* getName(){return name;};
	int getAccuracity() const{return accuracity;};
	void setAccuracity(int _accuracity){accuracity=_accuracity;};

	Point getPosition() const {return position;};
	void setPosition(int _x, int _y) {position.setX(_x); position.setY(_y);}
	void setPosition(Point point) {position=point;}

	int getSpeed() const {return speed;};
	void setSpeed(int _speed) {speed=_speed;};

	int getStrenght() const {return strenght;};
	void setStrenght(int _strenght) {strenght=_strenght;};

    void print();
	bool iCanGetTheBall(Player*, Player*, Point);
	bool iAmInTheTeam(Player*);
	bool iAmCloseToTheBall(Point);

    void passTheBall(Player*, Point);
    void runToTheBall(Player*, Player*, Point);
	void randomShot(Point);
	void chill();
	bool myTeamHaveTheBall(Player*, Player*, Point);

	bool operator==(Player const&);

	//virtual void specialMove(Point, Player*);
	virtual void act(Player*, Player*, Point);
};

#endif // PLAYER_H_INCLUDED
