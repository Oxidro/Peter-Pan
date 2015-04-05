/*
 * WeeTask1Realization.c++
 *
 *  Created on: Mar 27, 2015
 *      Author: ivko
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "WeeTask1.h"
const int MIN = 50;
using namespace std;

void printStr(char *color)
{
	char* pointerToColor = color;
	while (*pointerToColor)
	{
		cout << *pointerToColor++;
	}
	cout << endl;
}

TestingTheBigFour::TestingTheBigFour()
{
	str=new char[MIN];
	num=0;
}
void TestingTheBigFour::setStr (char* _str)
{
	int len=strlen(_str);
	delete[] str;
	str = new char[len+1];
	strcpy(str, _str);
	str[len+1] = '\0';
}

TestingTheBigFour::TestingTheBigFour(const TestingTheBigFour& t)
	:num(t.num)
{
	setStr(t.str);
}
TestingTheBigFour& TestingTheBigFour :: operator=(const TestingTheBigFour& t)
{
	if(this == &t)
		return *this;
	setStr(t.str);
	num=t.num;
	return *this;
}
TestingTheBigFour::~TestingTheBigFour()
{
	delete str;
}

//-----------------------------------------------------------------------------

Squirrel::Squirrel()
{
	color=new char[MIN];
	fluffiness=0;
	tailLenght=0;
}
void Squirrel::setColor (char* _color)
{
	int len=strlen(_color);
	delete[] color;
	color = new char[len+1];
	strcpy(color, _color);
	color[len+1] = '\0';
}

Squirrel::Squirrel(const Squirrel& s)
	:fluffiness(s.fluffiness), tailLenght(s.tailLenght)
{
	setColor(s.color);
}
Squirrel& Squirrel :: operator=(const Squirrel& s)
{
	if(this == &s)
		return *this;
	fluffiness=s.fluffiness;
	tailLenght=s.tailLenght;
	setColor(s.color);
	return *this;
}
Squirrel::~Squirrel()
{
	delete color;
}

void Squirrel::compare(Squirrel squirrel)
{
	if (fluffiness > squirrel.fluffiness)
	{
		cout << "Your squirrel is fluffier" << endl;
	}
	else
	{
		cout << "Your squirrel is less fluffy" << endl;
	}
	if (fluffiness == squirrel.fluffiness)
	{
		cout << "They have the same fluffiness" << endl;
	}
	if (tailLenght > squirrel.tailLenght)
	{
		cout << "Your squirrel have longer tail" << endl;
	}
	else
	{
		cout << "Your squirrel have shorter tail" << endl;
	}
	if (tailLenght == squirrel.tailLenght)
	{
		cout << "They have the same tail lenght" << endl;
	}
	cout << "Your squirrel is: ";
	printStr(color);
	cout << "The other squirrel is: ";
	printStr(squirrel.color);
}

//-----------------------------------------------------------------------------

Warrior::Warrior(int _health, int _strenght, int _deffence, int _spellPower)
{
	health = _health;
	strenght = _strenght;
	deffence = _deffence;
	spellPower = _spellPower;
}
void Warrior::attack(Warrior &warrior)
{
	if ((strenght - warrior.deffence) > 0)
	{
		warrior.health-=(strenght - warrior.deffence);
	}
}
void Warrior::spellForReducingStrenght(Warrior &warrior)
{
	warrior.strenght -= spellPower;
}
void Warrior::print()
{
	cout<<"Health: "<<health<<" Strenght: "<<strenght<<" Deffence: "<<deffence<<" Spellpower: "<<spellPower<<endl;
}

//-----------------------------------------------------------------------------

void Box::addElement()
{
		if(elements==size)
		{
			cout<<"The box is full, cannot add"<<endl;
		}
		else
		{
			cout<<"Adding element ..."<<endl;
			elements=elements+1;
		}
}
void Box::removeElement()
{
		if(elements==0)
		{
			cout<<"The box is empty, cannot remove"<<endl;
		}
		else
		{
			cout<<"Removing element ..."<<endl;
			elements=elements-1;
		}
}
void Box::increaseSize()
{
		size=size+1;
}
void Box::print()
{
	cout<<"The box size is: "<<size<<endl;
	cout<<"There are "<<elements<<" elements"<<endl;
}

//-----------------------------------------------------------------------------

Concert::Concert()
{
	title=new char[MIN];
	beginning=0;
	numberOfSeats=0;
	concertHall="";
}
void Concert::setTitle (char* _title)
{
	int len=strlen(_title);
	delete[] title;
	title = new char[len+1];
	strcpy(title, _title);
	title[len+1] = '\0';
}

Concert::Concert(const Concert& c)
	:beginning(c.beginning), concertHall(c.concertHall), numberOfSeats(c.numberOfSeats)
{
	setTitle(c.title);
}
Concert& Concert :: operator=(const Concert& c)
{
	if(this == &c)
		return *this;
	beginning=c.beginning;
	numberOfSeats=c.numberOfSeats;
	setTitle(c.title);
	return *this;
}
Concert::~Concert()
{
	delete title;
}

void Concert::print()
{
	cout<<"Concert hall: ";
	printStr(concertHall);
	cout<<"Number of seats: "<<numberOfSeats<<endl;
	cout<<"Beginning:"<<beginning<<endl;
}
void Concert::changeHall(char* _concertHall)
{
	concertHall=_concertHall;
	numberOfSeats = rand() % 700 + 300;
}
void Concert::delay(double _beginning)
{
	beginning=_beginning;
}

//-----------------------------------------------------------------------------

Baloon::Baloon()
{
	shape=new char[MIN];
	volume=0;
	intact=1;
}
void Baloon::setShape (char* _shape)
{
	int len=strlen(_shape);
	delete[] shape;
	shape = new char[len+1];
	strcpy(shape, _shape);
	shape[len+1] = '\0';
}

Baloon::Baloon(const Baloon& b)
	:volume(b.volume), intact(b.intact)
{
	setShape(b.shape);
}
Baloon& Baloon :: operator=(const Baloon& b)
{
	if(this == &b)
		return *this;
	setShape(b.shape);
	volume=b.volume;
	intact=b.intact;
	return *this;
}
Baloon::~Baloon()
{
	delete shape;
}


void Baloon::inflate()
{
	if(intact)
	{
		if(volume==30)
		{
			intact=false;
			cout<<"The baloon exploded, you inflated too much"<<endl;
		}
		else
			volume+=10;
	}
	if(!intact)
		cout<<"Cannot inflate exploded baloon"<<endl;
}
void Baloon::newShape(char*_shape)
{
	shape=_shape;
}
void Baloon::print()
{
	switch(volume)
	{
	case 0: cout<<"Your baloon is not inflated"<<endl;break;
	case 10: cout<<"You have a really good looking small "; printStr(shape); cout<<"shaped baloon"<<endl;break;
	case 20: cout<<"You have a really good looking medium "; printStr(shape); cout<<"shaped baloon"<<endl;break;
	case 30: cout<<"You have a really good looking big "; printStr(shape); cout<<"shaped baloon"<<endl;break;
	}
}

//-----------------------------------------------------------------------------

void Plant::print()
{
	cout<<"After "<<years<<" years "<<"the plant has "<<leaves<<" leaves and "<<fruits<<" fruits"<<endl;
	cout<<"The fruits were collected "<<timesCollected<<" times"<<endl;

}
void Plant::addYears(int _years)
{
	years+=_years;
	leaves+=_years*growthRate*2;
	fruits+=_years*growthRate/2;
}
void Plant::collectFruits()
{
	if(fruits==0)
	{
		cout<<"No fruits to collect"<<endl;
	}
	else
	{
		fruits=0;
		timesCollected++;
		cout<<"All fruits collected"<<endl;
	}
}

//-----------------------------------------------------------------------------

Product::Product()
{
	nameOfProduct=new char[MIN];
	price=0;
	quantity=0;
}
void Product::setNameOfProduct (char* _nameOfProduct)
{
	int len=strlen(_nameOfProduct);
	delete[] nameOfProduct;
	nameOfProduct = new char[len+1];
	strcpy(nameOfProduct, _nameOfProduct);
	nameOfProduct[len+1] = '\0';
}

Product::Product(const Product& p)
	:price(p.price), quantity(p.quantity)
{
	setNameOfProduct(p.nameOfProduct);
}
Product& Product :: operator=(const Product& p)
{
	if(this == &p)
		return *this;
	setNameOfProduct(p.nameOfProduct);
	price=p.price;
	quantity=p.quantity;
	return *this;
}
Product::~Product()
{
	delete nameOfProduct;
}

void Product::print()
{
	cout<<"Product name: ";
	printStr(nameOfProduct);
	cout<<"Price: "<<price<<endl;
	cout<<"Quantity: "<<quantity<<endl;
}

//-----------------------------------------------------------------------------

Bacteria::Bacteria()
{
	type=new char[MIN];
	reproductionRate=0;
	colonySize=0;
	conditions=0;
	hoursOfSpreading=0;
}

Bacteria::~Bacteria()
{
	delete type;
}

void Bacteria::setType (char* _type)
{
	int len=strlen(_type);
	delete[] type;
	type = new char[len+1];
	strcpy(type, _type);
	type[len+1] = '\0';
}

Bacteria& Bacteria :: operator=(const Bacteria& b)
{
	if(this == &b)
		return *this;
	setType(b.type);
	reproductionRate=b.reproductionRate;
	colonySize=b.colonySize;
	conditions=b.conditions;
	hoursOfSpreading=b.hoursOfSpreading;
	return *this;
}

Bacteria::Bacteria(const Bacteria& b)
	: reproductionRate(b.reproductionRate), colonySize(b.colonySize), conditions(b.conditions),hoursOfSpreading(b.hoursOfSpreading)
{
	setType(b.type);
}


void Bacteria::print()
{
	cout<<"Bacteria type: ";
	printStr(type);
	cout<<"After "<< hoursOfSpreading<< " hours of spreading the colony size is: "<<colonySize<<endl;
}

//-----------------------------------------------------------------------------

Car::Car()
{
	brand=new char[MIN];
	engine=brakes=engineScore=brakesScore=overallScore=0;
}

Car::~Car()
{
	delete brand;
}

void Car::setBrand (char* _brand)
{
	int len=strlen(_brand);
	delete[] brand;
	brand = new char[len+1];
	strcpy(brand, _brand);
	brand[len+1] = '\0';
}

Car& Car :: operator=(const Car& c)
{
	if(this == &c)
		return *this;
	setBrand(c.brand);
	engine=c.engine;
	brakes=c.brakes;
	engineScore=c.engineScore;
	brakesScore=c.brakesScore;
	overallScore=c.overallScore;
	return *this;
}

Car::Car(const Car& c)
	: brand(c.brand), engine(c.engine), brakes(c.brakes), engineScore(c.engineScore), brakesScore(c.brakesScore), overallScore(c.overallScore)
{
	setBrand(c.brand);
}

void Car::getBetterEngine()
{
	if(engine==5)
	{
		cout<<"There are no better engines"<<endl;
	}
	else
	{
		engine++;
		engineScore+=1.5;
		if(brakes>=engine)
			overallScore=engineScore;
		if(brakes<engine)
			overallScore=((engineScore+brakesScore)/2)-(engine-brakes)/2;
	}
}
void Car::getBetterBreaks()
{
	if(brakes==5)
	{
		cout<<"There are no better brakes"<<endl;
	}
	else
	{
		brakes++;
		brakesScore+=1.5;
		if(brakes>=engine)
			overallScore=engineScore;
		if(brakes<engine)
			overallScore=((engineScore+brakesScore)/2)-(engine-brakes)/2;
	}
}
void Car::printCar()
{
	if(true)
	{
	cout<<"Engine is "<<engine<<" out of 5"<<endl;
	cout<<"Brakes are "<<brakes<<" out of 5"<<endl;
	cout<<"Engine Score is "<<engineScore<<endl;
	cout<<"Brake Score is "<<brakesScore<<endl;
	cout<<"Overall Score is "<<overallScore<<endl;
	}
}

//-----------------------------------------------------------------------------

int const emptyTop=-1;
int const normalSize=10;


Tail::Tail()
{
	size=normalSize;
	top=emptyTop;
	arr=new double [size];
}

void Tail::resize()
{
	int oldSize=size;
	size+=2;
	double* newarr= new double[size];
	for(int i = 0; i < oldSize; i++)
		newarr[i] = arr[i];
	delete[] arr;
	arr = newarr;

}
void Tail::rewrite()
{
	size-=1;
	double* newarr= new double[size];
	for(int i = 0; i < size; i++)
		newarr[i] = arr[i+1];
	delete[] arr;
	arr = newarr;
	top-=1;
}

bool Tail::empty()
{
	if(top==emptyTop)
		return 1;
	return 0;
}

void Tail::push(double element)
{
	if(top==size-1)
	{
		resize();
		cout<<"Size increased!"<<endl;
	}
	arr[++top]=element;
}
double Tail::pop()
{
	double first=0;
	if(empty())
		cout<<"Error!"<<endl;
	else
	{
		first=arr[0];
		rewrite();
	}
	return first;
}
