//============================================================================
// Name        : Weekly.cpp
// Author      : Ivailo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "WeeTask1.h"
using namespace std;

int main() {
	cout<<"Testing Squirrel ... "<<endl<<endl;
	Squirrel squirrel1(7, 6.5, "brown"), squirrel2(9, 7.8, "black");
	squirrel1.trim(6);
	squirrel2.rePaint("white");
	squirrel1.compare(squirrel2);
	cout<<endl<<"End of class Squirrel test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Warrior ... "<<endl<<endl;
	Warrior warrior1(100, 20, 5, 10), warrior2(70, 50, 0, 20);
	warrior1.print(); warrior2.print();
	warrior1.attack(warrior2);
	warrior2.spellForReducingStrenght(warrior1);
	warrior1.print(); warrior2.print();
	cout<<endl<<"End of class Warrior test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Box ... "<<endl<<endl;
	Box box(0,2);
	box.print();
	box.removeElement();
	box.addElement();
	box.addElement();
	box.addElement();
	box.increaseSize();
	box.print();
	cout<<endl<<"End of class Box test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Concert ... "<<endl<<endl;
	Concert concert("Earth_sounds", 19.25, "Hall-Bulgaria", 250);
	concert.print();
	concert.changeHall("Hall-number5-NDK");
	concert.delay(20.15);
	concert.print();
	cout<<endl<<"End of class Concert test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Baloon ... "<<endl<<endl;
	Baloon baloon("standart_cylindrical", 0, 1);
	baloon.inflate();
	baloon.print();
	baloon.newShape("rabbit");
	baloon.inflate();
	baloon.print();
	baloon.inflate();
	baloon.print();
	baloon.inflate();
	cout<<endl<<"End of class Baloon test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Plant ... "<<endl<<endl;
	Plant plant(1, 0, 0 ,5 ,0);
	plant.addYears(3);
	plant.print();
	plant.collectFruits();
	plant.addYears(5);
	plant.print();
	cout<<endl<<"End of class Plant test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Product ... "<<endl<<endl;
	Product product(0.70, 1000, "banana");
	product.print();
	product.promotion();
	product.itemsBought(275);
	product.print();
	cout<<endl<<"End of class Product test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Bacteria ... "<<endl<<endl;
	Bacteria b("Lactobacillus_Bulgaricus", 5, 10, 'G', 1);
	b.passedHours(5);
	b.print();
	b.changeConditions('B');
	b.passedHours(5);
	b.print();
	cout<<endl<<"End of class Bacteria test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Car ... "<<endl<<endl;
	Car c1, c2;
	for(int i=0; i<=4; i++)
	{
		c2.getBetterEngine();
		c1.getBetterBreaks();
	}
	c1.printCar();
	c2.printCar();
	cout<<endl<<"End of class Car test ..."<<endl<<endl;
	//-----------------------------------------------------------------------------
	cout<<"Testing Tail ... "<<endl<<endl;
	Tail t;
	for(int i=0; i<=15; i++)
		t.push(i);
	while(!t.empty())
		cout<<t.pop()<<endl;
	cout<<endl<<"End of class Tail test ..."<<endl<<endl;
	return 0;
}
