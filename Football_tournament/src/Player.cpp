#include <iostream>
using namespace std;
#include "Player.h"
#include "Point.h"
#include "Match.h"

Player::Player(char* _name, int _id, Zone _zone, int _number, Point _position , int _speed, int _strenght, int _accuracity)
{
    setName(_name);
    id=_id;
    zone=_zone;
    number=_number;
    position=_position;
    speed=_speed;
    strenght=_strenght;
    accuracity=_accuracity;
}

Player::Player(const Player& other)
:name(NULL),id(other.id), zone(other.zone), number(other.number), position(other.position), speed(other.speed), strenght(other.strenght), accuracity(other.accuracity)
{
    setName(other.name);
}

Player& Player::operator=(const Player& other)
{
	if(this!=&other)
		return this;
	delete[] name;
	setName(other.name);
	id=other.id;
	zone=other.zone;
    number=other.number;
    position=other.position;
    speed=other.speed;
    strenght=other.strenght;
    accuracity=other.accuracity;
    return *this;
}
Player::~Player(){
    delete[] name;
}

void Player::setName(char* _name){
    if(name!=NULL){
        delete[] name;
    }
    name= new char[strlen(_name)+1];
    strcpy(name,_name);
}

Point Player::whatToDoWithTheBall() {
	return *this;
}

void Player::print(){
	cout<<"Player: "<< getName;
	cout<<"\nNumber: "<<getNumber;
	cout<<"\nPosition: "<<getPosition;
	cout<<"\nSpeed: "<<getSpeed;
	cout<<"\nStrenght: "<<getStrenght;
	cout<<"\nAccuracity: "<<getAccuracity;
}
bool Player::operator==(Player const& other)
{
	if(id==other.id)
		return true;
	return false;
}

void Player::run(RunTypes type)
{
	//type is how to run depending on the situation 1 to the ball 2 with the team 3 chill
	//enum
	if(type==TO_THE_BALL)
	{

		//missing logic ...
		if((rand() % 1 + 0)==1)
			position=;
	}
	if(type==WITH_THE_TEAM)
	{
		;
	}
	if(type==CHILL)
	{
		Point newPosition=position;
		int distanceX;
		int distanceY;
		int directionX;
		int directionY;
		do
		{
			distanceX=rand() % 5 + 1;
			distanceY=rand() % 5 + 1;
			directionX=rand() % 1 + -1;
			directionY=rand() % 1 + -1;
			newPosition.x+=distanceX*directionX;
			newPosition.y+=distanceY*directionY;
		}
		while(zone(newPosition));
		position=newPosition;
	}
}

Point Player::whatToDoWithTheBall()
{
	specialMove();
	/*
	if(false)
	{
		;
	}
	else if(position+strenght>=gatePosition)
	{
		randomShot();
	}
	else
	{
		passTheBall();
	}
	*/
}

void Player::passTheBall()
{
    int* nearbyTeammates=new int[11];
    int j=0;
    for(int i=0; i<11; i++)
    {
    	Point teammatePosition=Team.getPlayers()[i].position;
        if(teammatePosition<=position+strenght && teammatePosition>=position-strenght)
            nearbyTeammates[j++]=Team.getPlayers()[i];
    }
    ball=nearbyTeammates[rand() % j];
}

void Player::randomShot()
{
	Point shootTo((position.getX+rand() % getStrenght + 1) , (position.getY()+rand() % getAccuracity+ -getAccuracity));
	ball=shootTo;
}
