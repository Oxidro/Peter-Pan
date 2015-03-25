#ifndef WEETASK1_H_
#define WEETASK1_H_

const int MAX = 100;

class Squirrel
{
private:
	int fluffiness;
	double tailLenght;
	char* color[MAX];

public:
	Squirrel(int _fluffiness, double _tailLenght, char* _color);

	void setFluffiness(int _fluffiness) { fluffiness = _fluffiness; };
	void setTailLenght(int _tailLenght) { tailLenght = _tailLenght; };
	void setColor(char* _color);

	int getFluffiness(){return fluffiness;};
	double getTailLenght(){return tailLenght;};
	char* getColor(){return *color;};

	void print();
	void compare(Squirrel squirrel);

	void reduceFluffiness();
	void changeColor();
};

#endif /*WEETASK1_H_*/