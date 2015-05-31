/*
 * Event.cpp
 *
 *  Created on: May 18, 2015
 *      Author: ivko
 */

#include "Event.h"
#include "Match.h"

Event::Event()
:ballPosition("in the center"), goalsOfTeamA(0), goalsOfTeamB(0), violationsA(), violationsB() {}

std::ostream& operator<<(std::ostream& os, Event event)
{
//	os<<A.getTeamName()<<"                                  "<<B.getTeamName();
	os<<"               "<<event.goalsOfTeamA<<":"<<event.goalsOfTeamB<<"                ";
	os<<"Fals: "<<event.violationsA.noPunishment<<" Yellow Cards: "<<event.violationsA.yellowCards<<" Red Cards: "<<event.violationsA.redCards<<" Fals: "<<event.violationsB.noPunishment<<" Yellow Cards: "<<event.violationsB.yellowCards<<" Red Cards: "<<event.violationsB.redCards;
	os<<"The ball is :"<<event.ballPosition;
	return os;
}

void Event::locationBall(Point ball){
    //take the location of the ball in the match and translate it into words, so it is printable
    //ball=match.ball??? how to get the ball from the match

    if(ball.get_y()==60 && ball.get_x()==45){
        ballPosition="in the center";
    }
    if(ball.get_y()>=40 && ball.get_y()<=80){
        ballPosition="in midfield";
    }
    if(ball.get_y()>=10 && ball.get_y()<40){
        ballPosition="in the left half";
    }
    if(ball.get_y()>80 && ball.get_y()>=110){
        ballPosition="in the right half";
    }
    if(ball.get_y()<10 && ball.get_y()>110){
        ballPosition="in penalty area";
    }
}
