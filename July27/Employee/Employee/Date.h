#include<iostream>
#ifndef DATE_
#define DATE_
using namespace std;
class Date
{
	int dd, mm, yy;
public:
	Date();
	Date(int, int, int);
	void display();
};
#endif
