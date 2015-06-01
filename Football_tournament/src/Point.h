/*
 * Point.h
 *
 *  Created on: 10.05.2015 �.
 *      Author: Deni
 */

#ifndef POINT_H_
#define POINT_H_

#include "math.h"

class Point {
private:
	int x; // dalgo;
	int y; // kaso;

public:
	Point(int, int);

	Point();

	int getX();

	int getY();

	void setX(int);

	void setY(int);

	void add(Point);

	void sub(Point);

	void mul(int a);

	void dump();

	int distance(Point);

	bool keeperCanCatchTheBall(Point, int);

	Point& operator=(Point&);

	Point& operator()(int, int);

	bool operator==(Point&);

	bool operator<(Point const&);
	bool operator<=(Point const&);
	bool operator>=(Point const&);
	Point operator+(int);
	Point operator-(int);
};

#endif /* POINT_H_ */
