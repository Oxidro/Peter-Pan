#include <iostream>
using namespace std;
#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <cstring>
srand(time(0));

bool Player::injured(){
	if(health==0) return true;
	else return false;
}
bool Player::playing(){
	if(!injured && !penalty)
		return true;
	else return false;
}
Player::Player(char* _name, int age, int health,int exp,double pay,bool penalty){
    setName(_name);
	this->age=age;
	this->health=health;
	this->experience=exp;
	this->payment=pay;
	this->penalty=penalty;
}
Player::Player(const Player& other)
:name(NULL), age(other.age), health(other.health), experience(other.experience), payment(other.payment), penalty(other.penalty)
{
    setName(other.name);
}
Player& Player::operator=(const Player& other){
    Player(other);
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
void Player::print(){
	cout<<"Player: "<< getName;
	cout<<"\nAge: "<<getAge;
	cout<<"\nHealth: "<<getHealth;
	cout<<"\nExperience: "<<getExp;
	cout<<"\nHas penalty: "<<getPenalty;
	cout<<"\nPayment: "<<getPayment;
}
void Player::train(){
	setExp(getExp()+rand()%10);
	cout<<"His experience has increased to "<<getExp()<<endl;

}
void Player::play(){
	setExp(getExp()+rand()%100);
	cout<<"His experience has increased to "<<getExp()<<endl;
}
void Player::heal(){
	setHealth(getHealth()+rand()%50);
	cout<<"His health has increased to "<<getHealth()<<endl;

}
void Player::punish(){
	if(getPenalty){
		setPenalty(getPenalty-300);
	}
}
