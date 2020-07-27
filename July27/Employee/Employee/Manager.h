#include"Emp.h"
#ifndef MANAGER_
#define MANAGER_
class Manager :public Employee
{
	int ta, da;
public:
	Manager();
	Manager(int,int,int, char*, int, int, int, char*, float);
	void display();
};
#endif
