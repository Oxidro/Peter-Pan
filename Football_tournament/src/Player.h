#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <cstdlib>
#include "Point.h"
#include "Zone.h"

typedef enum
{
	TO_THE_BALL=1,
	WITH_THE_TEAM=2,
	CHILL=3
} RunTypes;

class Player{
private:
	char* name;
	int id;
	Zone zone;
	int number;
	Point position;

	int speed;
	double strenght;
	double accuracity;

public:

	Player(char*, int, int, Zone, Point, int ,double , double);
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
	double getAccuracity() const{return accuracity;};
	void setAccuracity(double _accuracity){accuracity=_accuracity;};

	Point getPosition() const {return position;};
	void setPosition(int _x, int _y) {position.setX(_x); position.setY(_y);}

	int getSpeed() const {return speed;};
	void setSpeed(int _speed) {speed=_speed;};
	double getStrenght() const {return strenght;};
	void setStrenght(double _strenght) {strenght=_strenght;};

	void print();

	bool operator==(Player const&);

	void passTheBall();
	void randomShot();

	void run(RunTypes);
	Point whatToDoWithTheBall();

	virtual void specialMove();
};

#endif // PLAYER_H_INCLUDED
