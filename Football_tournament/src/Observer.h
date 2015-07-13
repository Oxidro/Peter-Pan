/*
 * Observer.h
 *
 *  Created on: Jul 12, 2015
 *      Author: ivko
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer
{
public:
	virtual void Update(int, int) = 0;
	virtual ~Observer() {};
};

#endif /* OBSERVER_H_ */
