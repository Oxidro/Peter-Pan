// Weekly-Task-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "WeeTask1.h";


int main(int argc, _TCHAR* argv[])
{
	Squirrel s1(7, 5.4, "brown"), s2(9, 6.7, "gray");
	s1.print;
	s2.print;
	s1.compare(s2);

	return 0;
}

