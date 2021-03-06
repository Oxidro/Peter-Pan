#include <iostream>
using namespace std;
#include "Player.h"
#include "Point.h"
#include "Match.h"
#include "string.h"

Player::Player(int _id, int _number, std::string _name, int _speed, int _strenght, int _accuracity)
{
	id=_id;
	number=_number;
    name=_name;
    speed=_speed;
    strenght=_strenght;
    accuracity=_accuracity;
}

bool Player::iCanGetTheBall(Player* A, Player* B, Point ball) {
	Player* p = A;
	int me = ball.distance(position) - speed;
	int bestPlayer = me;

	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 11; i++) {
			if(ball.distance(p[i].getPosition()) - p[i].speed < bestPlayer)
				bestPlayer = ball.distance(p[i].getPosition()) - p[i].speed;
		}
		p = B;
	}

	if(me == bestPlayer)
		return true;

	return false;
}

void Player::act(Player* A, Player* B, Point &ball)
{
	chill();
}

void Player::print(){
	cout<<"Player: "<< getName();
	cout<<"\nNumber: "<<getNumber();
	cout<<"\nPosition: "<<getPosition();
	cout<<"\nSpeed: "<<getSpeed();
	cout<<"\nStrenght: "<<getStrenght();
	cout<<"\nAccuracity: "<<getAccuracity();
}
bool Player::operator==(Player const& other)
{
	if(id==other.id)
		return true;
	return false;
}

bool Player::iAmCloseToTheBall(Point ball) {
	if (zone.inTheZone(ball))
		return true;
	return false;
}

void Player::chill() {
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
		newPosition.setX(newPosition.getX() + distanceX*directionX);
		newPosition.setY(newPosition.getY() + distanceY*directionY);
	}
	while(zone.inTheZone(newPosition));

	position=newPosition;
}

void Player::runToTheBall(Player* A, Player* B, Point ball) {
	if(iCanGetTheBall(A,B, ball))
		position = ball;
	else
		chill();
}

bool Player::myTeamHaveTheBall(Player* A, Player* B, Point ball) {
	Player* myTeam = (iAmInTheTeam(A))? A : B;
	for (int i = 0; i < 11; i++)
		if (ball == myTeam[i].getPosition())
			return true;

	return false;
}

bool Player::iAmInTheTeam(Player* team) {
	for(int i=0; i<11; i++)
		if(*this == team[i])
			return true;
	return false;
}

Point Player::getHolderPosition(Player* team, Point ball)
{
	Point point;
	for(int i=0; i<11; i++)
	{
		if(team[i].getPosition()==ball)
			point=team[i].getPosition();
	}
	return point;
}

void Player::passTheBall(Player* players, Point ball)
{
    Player nearbyTeammates[11];
    int j=-1;
    for(int i=0; i<11; i++)
    {
    	Point teammatePosition = players[i].getPosition();
        if(teammatePosition<=position+strenght && teammatePosition>=position-strenght)
            nearbyTeammates[j++]=players[i];
    }
    if(j>=0)
    {
		ball=nearbyTeammates[rand() % j].getPosition();
		Notify(ball);
    }
}

void Player::randomShot(Point ball)
{
	Point shootTo((position.getX()+rand() % getStrenght() + 1) , (position.getY()+rand() % getAccuracity()+ -getAccuracity()));
	ball=shootTo;
	Notify(ball);
}
