#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player{
private:
	char* name;
	int id;
	int number;
	Point position;
	int speed;
	double strenght;
	double accuracity;

public:

	Player(char*, int,int,  Point,int ,double , double);
	Player(const Player&);
	Player& operator=(const Player&);
	~Player();

	void setNumber(int _number){number=_number;};
	int getNumber(){return number;};

	void setId(int _id){id=_id;};
	int getId(){return id;};

	void setName(char*);
	char* getName(){return name;};
	double getAccuracity() const{return accuracity;};
	void setAccuracity(double _accuracity){accuracity=_accuracity;};

	Point getPosition() const {return position;};
	void setPosition(Point _position) {position=_position;};

	int getSpeed() const {return speed;};
	void setSpeed(int _speed) {speed=_speed;};
	double getStrenght() const {return strenght;};
	void setStrenght(double _strenght) {strenght=_strenght;};

	void print();

	bool operator==(Player const&);

	void run(int);
	Point whatToDoWithTheBall();

};

#endif // PLAYER_H_INCLUDED
