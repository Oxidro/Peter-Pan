#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "WeeTask1.h"

using namespace std;

void printColor(char *color)
{
	char* pointerToColor = color;
	while (*pointerToColor)
	{
		cout << *pointerToColor++;
	}
	cout << endl;
}

void str_cpy(char* color, char* _color)
{
	while (*_color)
	{
		*color++ = *_color++;
	}
	*color = '\0';
}

Squirrel::Squirrel(int _fluffiness, double _tailLenght, char* _color)
{
	fluffiness = _fluffiness;
	tailLenght = _tailLenght;
	str_cpy(*color, _color);
}
void Squirrel::setColor(char*_color)
{
	str_cpy(*color, _color);
}
void Squirrel::print()
{
	cout << "Fluffiness: " << fluffiness << endl;
	cout << "Tail lenght: " << tailLenght << endl;
	cout << "Color: ";
	printColor(*color);
}
void Squirrel::compare(Squirrel squirrel)
{
	if (this->fluffiness > squirrel.fluffiness)
	{
		cout << "Your squirrel is fluffier" << endl;
	}
	else
	{
		cout << "Your squirrel is less fluffy" << endl;
	}
	if (this->fluffiness == squirrel.fluffiness)
	{
		cout << "They have the same fluffiness" << endl;
	}
	if (this->tailLenght > squirrel.tailLenght)
	{
		cout << "Your squirrel have longer tail" << endl;
	}
	else
	{
		cout << "Your squirrel have shorter tail" << endl;
	}
	if (this->tailLenght == squirrel.tailLenght)
	{
		cout << "They have the same tail lenght" << endl;
	}
	cout << "Your squirrel is: ";
	printColor(*this->color);
	cout << "The other squirrel is: ";
	printColor(*squirrel.color);
}