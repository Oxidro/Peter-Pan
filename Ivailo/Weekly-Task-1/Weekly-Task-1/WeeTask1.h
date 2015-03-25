#ifndef WEETASK1_H_
#define WEETASK1_H_

const int MAX = 100;

class Squirrel
{
private:
	int fluffiness;
	double tailLenght;
	char* color[MAX];

public:
	Squirrel(int _fluffiness, double _tailLenght, char* _color);

	void setFluffiness(int _fluffiness) { fluffiness = _fluffiness; };
	void setTailLenght(int _tailLenght) { tailLenght = _tailLenght; };
	void setColor(char* _color);

	int getFluffiness(){return fluffiness;};
	double getTailLenght(){return tailLenght;};
	char* getColor(){return *color;};

	void print();
	void compare(Squirrel squirrel);

	void reduceFluffiness();
	void changeColor();
};

class Warrior
{
private:
	int health;
	int strenght;
	int deffence;
	int spellPower;

public:
	Warrior::Warrior(int _health, int _strenght, int _deffence, int _spellPower);

	int Warrior::getHealth(){ return health; };
	int Warrior::getStrenght(){ return strenght; };
	int Warrior::getDeffence(){ return deffence; };
	int Warrior::getSpellPower(){ return spellPower; };

	void Warrior::setHealth(int _health){ health = _health; };
	void Warrior::setStrenght(int _strenght){ strenght = _strenght; };
	void Warrior::setDeffence(int _deffence){ deffence = _deffence; };
	void Warrior::setSpellPower(int _spellPower){ spellPower = _spellPower; };

	void Warrior::print();

	void Warrior::attack(Warrior warrior);
	void Warrior::spellForReducingStrenght(Warrior warrior);

};

#endif /*WEETASK1_H_*/