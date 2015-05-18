/*
 * Event.cpp
 *
 *  Created on: May 18, 2015
 *      Author: ivko
 */

#include "Event.h"

std::ostream& operator<<(std::ostream& os, Event event)
{
//	os<<A.getTeamName()<<"                                  "<<B.getTeamName();
	os<<"               "<<event.goalsOfTeamA<<":"<<event.goalsOfTeamB<<"                ";
	os<<"Fals: "<<event.violationsA.noPunishment<<" Yellow Cards: "<<event.violationsA.yellowCards<<" Red Cards: "<<event.violationsA.redCards<<" Fals: "<<event.violationsB.noPunishment<<" Yellow Cards: "<<event.violationsB.yellowCards<<" Red Cards: "<<event.violationsB.redCards;
	os<<"The ball is :"<<event.ballPosition;
	return os;
}
