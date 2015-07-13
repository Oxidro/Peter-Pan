/*
 * Referee.h
 *
 *  Created on: Jul 11, 2015
 *      Author: ivko
 */

#ifndef OBSERVABLE_H_
#define OBSERVABLE_H_

#include "Event.h"
#include "Violation.h"
#include "Point.h"

class Observable
{
private:
	Event* event;

public:
	void Attach(Event);
	void Notify(int, int);
	void Notify(Point const&);
	void Notify(Violation const&, char);
};

#endif /* OBSERVABLE_H_ */
