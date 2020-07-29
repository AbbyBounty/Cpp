#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Name.h"
#include"Date.h"
#include"addr.h"
#ifndef EMP_
#define EMP_
class Employee
{
	
	Name nm;

public:
	Employee();
	Employee(char*);
	void display();
};
#endif
