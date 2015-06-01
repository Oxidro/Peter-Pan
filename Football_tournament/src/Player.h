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
	Zone zone;
	int number;
	Point position;

	int speed;
	int strenght;
	int accuracity;

public:

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

	bool iCanGetTheBall(Player*, Player*);

	void print();

	bool operator==(Player const&);

	void passTheBall(Player*);
	void randomShot();

	void run(int, Player*, Player*);
	Point whatToDoWithTheBall(Point);

	virtual void specialMove(Point);
};

#endif // PLAYER_H_INCLUDED
