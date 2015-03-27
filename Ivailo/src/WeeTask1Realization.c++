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

//-----------------------------------------------------------------------------

Squirrel::Squirrel(int _fluffiness, double _tailLenght, char* _color)
{
	fluffiness = _fluffiness;
	tailLenght = _tailLenght;
	color=_color;
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

void Product::print()
{
	cout<<"Product name: ";
	printStr(nameOfProduct);
	cout<<"Price: "<<price<<endl;
	cout<<"Quantity: "<<quantity<<endl;
}

//-----------------------------------------------------------------------------

void Bacteria::print()
{
	cout<<"Bacteria type: ";
	printStr(type);
	cout<<"After "<< hoursOfSpreading<< " hours of spreading the colony size is: "<<colonySize<<endl;
}

//-----------------------------------------------------------------------------

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
