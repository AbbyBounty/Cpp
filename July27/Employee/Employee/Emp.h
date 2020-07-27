#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Name.h"
#include"Date.h"
#include"addr.h"
#ifndef EMP_
#define EMP_
class Employee
{
	int eid;
	Name nm;
	Date dob;
	Address ad;
	float sal;
public:
	Employee();
	Employee(int, char*, int, int, int, char*,float);
	void display();
};
#endif
