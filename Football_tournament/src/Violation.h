/*
 * Violation.h
 *
 *  Created on: Jul 11, 2015
 *      Author: ivko
 */

#ifndef VIOLATION_H_
#define VIOLATION_H_

class Violation
{
	std::string player;
	int noPunishment;
	int yellowCards;
	int redCards;
public:
	Violation(std::string name="", int noPunishment_=0, int yellowCards_=0, int redCards_=0):
			player(name), noPunishment(noPunishment_), yellowCards(yellowCards_), redCards(redCards_) {}

	int getNoPunishment() const { return noPunishment; }
	void setNoPunishment(int noPunishment) { this->noPunishment = noPunishment; }
	const std::string& getPlayer() const { return player; }
	void setPlayer(const std::string& player) { this->player = player; }
	int getRedCards() const { return redCards; }
	void setRedCards(int redCards) { this->redCards = redCards; }
	int getYellowCards() const { return yellowCards; }
	void setYellowCards(int yellowCards) { this->yellowCards = yellowCards; }

	friend std::ostream& operator<<(std::ostream& os, Violation v) { return os<<v.player<<" "<<v.noPunishment<<" "<<v.yellowCards<<" "<<v.redCards; }
};

#endif /* VIOLATION_H_ */
