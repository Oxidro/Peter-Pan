#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player{
private:
	char* name;
	int years;
	int health;
	int experience;
	double payment;
    bool penalty;

	bool injured();
	bool playing();
public:
	Player(char*, int, int, int, double, bool);
	Player(const Player&);
	Player& operator=(const Player&);
	~Player();

	void setName(char*);
	void setYears(int y){years=y;};
	void setHealth(int h){health=h;};
	void setExp(int exp){experience=exp;};
	void setPenalty(bool p){penalty=p;};

	char* getName(){return name;};
	int getYears(){return years;};
	int getHealth(){return health;};
	int getExp(){return experience;};
	bool getPenalty(){return penalty;};
	void print();
	void train();
	void play();
	void heal();
	void punish();
};

#endif // PLAYER_H_INCLUDED
