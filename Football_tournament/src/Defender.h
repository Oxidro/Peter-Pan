/*
 * Defender.h
 *
 *  Created on: May 24, 2015
 *      Author: ivko
 */

#ifndef DEFENDER_H_
#define DEFENDER_H_

#include "Player.h"

class Defender : public Player
{
private:
	int aggression;
public:
	Defender(Player const&, int);
	virtual ~Defender() {};
	void act(Player*, Player*, Point);
};

#endif /* DEFENDER_H_ */
