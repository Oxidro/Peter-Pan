#include<iostream>
#include "Player.h"
using namespace std;

int* nearbyTeammates(Player const& player)
{
    int* nearbyTeammates=new int[11];
    int j=0
    for(int i=0; i<11; i++)
    {
        if(Team.getPlayers()[i](player.getCoordinates(), player.getStrength()) && player.getMySpot()!=team.getCoordinates())
            nearbyTeammates[j++]=Team.getPlayers()[i];
    }
    nearbyTeammates[j]=-1;
    return nearbyTeammates;
}

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


