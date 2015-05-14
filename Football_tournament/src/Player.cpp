#include <iostream>
using namespace std;
#include "Player.h"

Player::Player(char* _name, int _id, int _number, Point _position , int _speed,double _strenght, double _accuracity)
{
    setName(_name);
    id=_id;
    number=_number;
    position=_position;
    speed=_speed;
    strenght=_strenght;
    accuracity=_accuracity;
}
Player::Player(const Player& other)
:name(NULL),id(other.id), number(other.number), position(other.position), speed(other.speed), strenght(other.strenght), accuracity(other.accuracity)
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
