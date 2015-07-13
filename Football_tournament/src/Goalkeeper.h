/*
 * Goalkeeper.h
 *
 *  Created on: May 24, 2015
 *      Author: ivko
 */

#ifndef GOALKEEPER_H_
#define GOALKEEPER_H_

#include "Player.h"

class Goalkeeper : public Player
{
private:
	int span; //arms spread + small jump to a side
public:
	Goalkeeper(Player const&, int);
	virtual ~Goalkeeper() {};
	void specialMove(Player*, Player*, Point);
};

#endif /* GOALKEEPER_H_ */
