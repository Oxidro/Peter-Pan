#ifndef MIDFIELDER_H_INCLUDED
#define MIDFIELDER_H_INCLUDED

#include "Player.h"

class Midfielder:public Player{
public:
	Midfielder(Player const&);
	void act(Player*, Player*, Point&);
	virtual ~Midfielder() {};
};

#endif // MIDFIELDER_H_INCLUDED
