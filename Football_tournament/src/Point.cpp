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

int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}

void Point::setX(int x_) {
	x = x_;
}
void Point::setY(int y_) {
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

int Point::distance(Point p) {
	return abs(abs(x-p.x)-abs(y-p.y)/2);
}

bool Point::keeperCanCatchTheBall(Point middle, int len) {
	if(x<=middle.x+len && x>=middle.x-len && y<=middle.y+len && y>=middle.y-len) {
		return true;
	}
	return false;
}


void Point::dump() {
	cout << "(" << x << ", " << y << ")" << endl;
}

bool Point::operator==(Point p){
	if(x==p.x && y==p.y)
		return true;

	return false;
}

Point& Point::operator=(Point p) {
	if(this != &p) {
		x = p.x;
		y = p.y;
	}
	return *this;
}

Point& Point::operator()(int x_, int y_) {
	x = x_;
	y = y_;

	return *this;
}

Point sum(Point p1, Point p2) {
	p1.add(p2);
	return p1;
}

Point sub(Point p1, Point p2) {
	p1.sub(p2);
	return p1;
}

bool Point::operator<(Point point)
{
	if(x<point.x && y<point.y)
		return true;
	return false;
}

bool Point::operator<=(Point point)
{
	if(operator<(point) || *this==point)
		return true;
	return false;
}

bool Point::operator>=(Point  point)
{
	if(point<(*this) || *this==point)
		return true;
	return false;
}

Point Point::operator+(int n)
{
	Point p=*this;
	p.x+=n;
	p.y+=n;
	return p;
}

Point Point::operator-(int n)
{
	Point p=*this;
	p.x-=n;
	p.y-=n;
	return p;
}

ostream& operator<<(ostream& os, Point p) {
	return os << "(" << p.x << "," << p.y << ")";
}
