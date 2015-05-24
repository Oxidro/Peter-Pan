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
	double superPower;
public:
	virtual ~Defender();
	void specialMove();
};

#endif /* DEFENDER_H_ */
