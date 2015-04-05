/*
 * WeeTask1.h
 *
 *  Created on: Mar 27, 2015
 *      Author: ivko
 */

#ifndef WEETASK1_H_
#define WEETASK1_H_

const int MAX = 100;

class TestingTheBigFour
{
private:
	char* str;
	int num;
public:
	TestingTheBigFour();
	TestingTheBigFour(const TestingTheBigFour&);
	TestingTheBigFour& operator=(const TestingTheBigFour&);
	~TestingTheBigFour();

	void setStr(char*);
};

class Squirrel
{
private:
	int fluffiness;
	double tailLenght;
	char* color;

public:
	Squirrel();
	~Squirrel();
	Squirrel(const Squirrel&);
	Squirrel &operator=(const Squirrel&);

	int getFluffiness(){return fluffiness;};
	double getTailLenght(){return tailLenght;};
	char* getColor();

	void setColor(char*);
	void rePaint(char* _color){color=_color;};
	void trim(int _fluffiness) { fluffiness = _fluffiness; };
	void compare(Squirrel squirrel);
};

class Warrior
{
private:
	int health;
	int strenght;
	int deffence;
	int spellPower;

public:
	Warrior(int _health, int _strenght, int _deffence, int _spellPower);

	int getHealth(){ return health; };
	int getStrenght(){ return strenght; };
	int getDeffence(){ return deffence; };
	int getSpellPower(){ return spellPower; };

	void setHealth(int _health){ health = _health; };
	void setStrenght(int _strenght){ strenght = _strenght; };
	void setDeffence(int _deffence){ deffence = _deffence; };
	void setSpellPower(int _spellPower){ spellPower = _spellPower; };

	void attack(Warrior &warrior);
	void spellForReducingStrenght(Warrior &warrior);
	void print();

};

class Box
{
private:
	int elements;
	int size;

public:
	Box(int _elements, int _size)
	{
		elements=_elements;
		size=_size;
	}
	int getElements(){return elements;};
	int getSize(){return size;};

	void setElements(int _elements){elements=_elements;};
	void setSize(int _size){size=_size;};

	void addElement();
	void removeElement();
	void increaseSize ();
	void print();
	};

class Concert
{
private:
	char* title;
	double beginning;
	char* concertHall;
	int numberOfSeats;

public:
	Concert(char* _title, double _beginning, char* _concertHall, int _numberOfSeats)
	{
		title=_title;
		beginning=_beginning;
		concertHall=_concertHall;
		numberOfSeats=_numberOfSeats;
	}

	Concert();
	Concert(const Concert&);
	Concert& operator=(const Concert&);
	~Concert();

	void setTitle(char*);
	void changeHall(char*);
	void delay(double);
	void print();

};
/*
class Member
{
private:
	char* nickname;
	double rating;

public:
	Member(char* _nickname, double rating);

	char* getNickname(){return nickname;};
	double getRating(){return rating;};

	void changeNickname(char* _nickname){nickname=_nickname;};
	void changeRating(double _rating){rating=_rating;};
};

class Team
{
private:
	char* name;
	Member members [10];

public:
	Team(char* _name, int _members);

	char* getName(){return name;};
	int getMembers(){return members;};

	void setName(char*);
	void setMembers(int _members){members=_members;};

	void changeName();
	void addMember();
	void removeMember();
};
*/

class Baloon
{
private:

	char* shape;
	int volume;
	bool intact;

public:

	Baloon(char* _shape, int _volume=0, bool _intact=1)
	{
		shape=_shape;
		volume=_volume;
		intact=_intact;
	}

	Baloon();
	Baloon(const Baloon&);
	Baloon & operator=(const Baloon&);
	~Baloon();

	void setShape(char*);
	void inflate();
	void newShape(char*);
	void print();

};

class Plant
{
private:

	int leaves;
	double years;
	int fruits;
	double growthRate;
	int timesCollected;

public:

	Plant(int _leaves=1, double _years=0, int _fruits=0, double _growthRate=5, int _timesCollected=0)
	{
		leaves=_leaves;
		years=_years;
		fruits=_fruits;
		growthRate=_growthRate;
		timesCollected=_timesCollected;
	}

	void addYears(int);
	void collectFruits();
	void print();
};

class Product
{
private:
	double price;
	int quantity;
	char* nameOfProduct;

public:
	Product(double _price, int _quantity, char* _nameOfProduct)
	{
		price=_price;
		quantity=_quantity;
		nameOfProduct=_nameOfProduct;
	}
	Product();
	Product(const Product&);
	Product& operator=(const Product&);
	~Product();
	void setNameOfProduct(char*);
	void promotion()
	{
		price-=price*1/10;
	}
	void itemsBought(int itemsBought)
	{
		if(quantity-itemsBought > 0)
			quantity-=itemsBought;
	}
	void print();
};

class Bacteria
{
private:
	char* type;
	double reproductionRate;
	int colonySize;
	char conditions;
	int hoursOfSpreading;

public:
	Bacteria(char* _type, double _reproductionRate, int _colonySize, char _conditions='G', int _hoursOfSpreading=0)
	{
		type=_type;
		reproductionRate=_reproductionRate;
		colonySize=_colonySize;
		conditions=_conditions;
		hoursOfSpreading=_hoursOfSpreading;
	}

	Bacteria();
	~Bacteria();
	void setType(char*);
	Bacteria(const Bacteria&);
	Bacteria& operator=(const Bacteria&);

	void changeConditions(char c)
	{
		conditions=c;
		if(conditions=='g'||conditions=='G')
		{
			reproductionRate*=2;
		}
		if(conditions=='b'||conditions=='B')
		{
			reproductionRate/=2;
		}
	}
	void passedHours(int hours)
	{
		hoursOfSpreading+=hours;
		colonySize*=reproductionRate*hours;
	}
	void print();
};

class Car
{
private:
	char* brand;
	int engine;
	int brakes;
	double engineScore;
	double brakesScore;
	double overallScore;
public:
	Car();
	Car(const Car&);
	Car& operator =(const Car&);
	~Car();

	void getBetterEngine();
	void getBetterBreaks();
	void setBrand(char*);
	void score();
	void printCar();
};

class Tail
{

private:

	int size;
	int top;
	double* arr;

	void resize();
	void rewrite();

public:

	Tail();
	bool empty();
	void push(double);
	double pop();
};

#endif /* WEETASK1_H_ */

