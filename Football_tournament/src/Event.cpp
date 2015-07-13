/*
 * Event.cpp
 *
 *  Created on: May 18, 2015
 *      Author: ivko
 */

#include "Event.h"
#include "Match.h"
#include "Violation.h"

Event::Event()
: goalsOfTeamA(0), goalsOfTeamB(0), violationsA(), violationsB(), nameA(""), nameB("")
{}

Event::Event(std::string _nameA, std::string _nameB)
: goalsOfTeamA(0), goalsOfTeamB(0), violationsA(), violationsB()
{
	nameA=_nameA;
	nameB=_nameB;
}

Event::Event(Event const& e)
: ball(e.ball), goalsOfTeamA(e.goalsOfTeamA), goalsOfTeamB(e.goalsOfTeamB), violationsA(e.violationsA), violationsB(e.violationsB)
{
	nameA=e.nameA;
	nameB=e.nameB;
}

void Event::addViolation(Violation violation, char c)
{
	bool flag=false;
	if(c=='A')
	{
		for(unsigned i=0; i<violationsA.size(); i++)
		{
			if(violationsA[i].getPlayer()==violation.getPlayer())
			{
				flag=true;
				violationsA[i].setNoPunishment(violationsA[i].getNoPunishment() + violation.getNoPunishment());
				violationsA[i].setYellowCards(violationsA[i].getYellowCards() + violation.getYellowCards());
				violationsA[i].setRedCards(violationsA[i].getRedCards() + violation.getRedCards());
			}
		}
		if(!flag)
			violationsA.push_back(violation);
	}
	else
	{
		for(unsigned i=0; i<violationsB.size(); i++)
		{
			if(violationsB[i].getPlayer()==violation.getPlayer())
			{
				violationsB[i].setNoPunishment(violationsB[i].getNoPunishment() + violation.getNoPunishment());
				violationsB[i].setYellowCards(violationsB[i].getYellowCards() + violation.getYellowCards());
				violationsB[i].setRedCards(violationsB[i].getRedCards() + violation.getRedCards());
			}
		}
		if(!flag)
			violationsB.push_back(violation);
	}
}

void Event::print()
{
	cout<<nameA<<"\t\t\t"<<nameB;
	cout<<"\t\t\t\t\t"<<goalsOfTeamA<<":"<<goalsOfTeamB<<"\t"<<ball<<endl;
	cout<<"Violations of: "<<nameA;
	for(unsigned i=0; i<violationsA.size(); i++)
	{
		cout<<violationsA[i]<<" ";
	}
	cout<<endl<<"Violations of: "<<nameB;;
	for(unsigned i=0; i<violationsB.size(); i++)
	{
		cout<<violationsB[i]<<" ";
	}
	cout<<endl;
}

void Event::Update(int x, int y)
{
	goalsOfTeamA+=x;
	goalsOfTeamB+=y;
}

void Event::Update(Point const& p)
{
	ball=p;
}

void Event::Update(Violation const& v, char c)
{
	addViolation(v, c);
}
