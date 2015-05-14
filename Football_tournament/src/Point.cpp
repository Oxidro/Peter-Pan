#include<iostream>
#include "Point.h"
using namespace std;

Point::Point(int x_, int y_) {
	x = x_;
	y = y_;
}

Point::Point() {
	x = 0;
	y = 0;
}

int Point::get_x() {
	return x;
}

int Point::get_y() {
	return y;
}

void Point::set_x(int x_) {
	x = x_;
}
void Point::set_y(int y_) {
	y = y_;
}

void Point::add(Point p) {
	x += p.x;
	y += p.y;
}
void Point::sub(Point p) {
	x -= p.x;
	y -= p.y;
}

void Point::mul(int a) {
	x *= a;
	y *= a;
}
void Point::dump() {
	cout << "(" << x << ", " << y << ")" << endl;
}

Point sum(Point p1, Point p2) {
	p1.add(p2);
	return p1;
}

Point sub(Point p1, Point p2) {
	p1.sub(p2);
	return p1;
}
