#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#ifndef ADDRESS_
#define ADDRESS_
class Address 
{
	int ln;
	char *str;
public:
	Address();
	Address(char*);
	Address(Address &);
	Address  operator=(Address &);
	void display();
};
#endif
