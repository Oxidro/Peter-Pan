/*
 * Observable.cpp
 *
 *  Created on: Jul 12, 2015
 *      Author: ivko
 */

#include "Observable.h"

void Observable::Attach(Event _event)
{
	event=&_event;
}

void Observable::Notify(int x, int y)
{
	event->Update(x, y);
}

void Observable::Notify(Point const& p)
{
	event->Update(p);
}

void Observable::Notify(Violation const& v, char c)
{
	event->Update(v, c);
}
