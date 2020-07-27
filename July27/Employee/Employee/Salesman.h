#include"Emp.h"
#ifndef SALSEMAN_
#define SALSEMAN_
class Salesman :public Employee
{
	int sale;
	float com;
public:
	Salesman();
	Salesman(int, float, int, char*, int, int, int, char*, float);
	void display();
};
#endif
