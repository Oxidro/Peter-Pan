#include<iostream>
#include "Player.h"
using namespace std;

class defender
{
private:
    int speed;
    double strength;
    double accuracity;
public:
     bool defend(coordinates enemy, coordinates landing);
     friend coordinates shoot(nearbyTeammates());
};


