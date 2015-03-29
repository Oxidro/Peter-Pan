/*
 * TeamRealization.cpp
 *
 *  Created on: Mar 28, 2015
 *      Author: ivko
 */
#include<iostream>
#include"string.h"
#include"ClassTeam.h"
using namespace std;

void shortName(char c)
{
	if(c>=97 || c<=122)
		cout<<c-32;
	else
		cout<<c;
}

void printStr(char *str)
{
	char* pointerToStr = str;
	while (*pointerToStr)
	{
		cout << *pointerToStr++;
	}
}

void Player::print()
{
	cout<<"Name: ";
	printStr(name);
}

void Team::addPlayer(Player *p)
{
	players[++top]=p;
}

void Team::removePlayer(Player *p)
{
	for(int i=0; i<=top; i++)
	{
		if(p==players[i])
		{
			i++;
			players[i-1]=players[i];
		}
	}
	top--;
}
void Team::printTeam()
{
	cout<<"Team name: "<<teamName<<endl;
	cout<<"Group: "<<group<<endl;
	cout<<"Players: "<<endl;
	for(int i=0; i<=top; i++)
	{
		printStr(players[i]->getName());
	}
}
void Team::printTeamStatistics()
{
	cout<<"Team name W   D   L   GD   Pts";
	for(int i=0; i<3; i++)
	{
	shortName(teamName[i]);
	}
	cout<<won<<"       "<<draw<<"   "<<lost<<"   "<<goalDifference<<"   "<<totalPoints;

}


