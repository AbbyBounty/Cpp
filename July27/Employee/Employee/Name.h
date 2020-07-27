#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#ifndef NAME_
#define NAME_
class Name
{
	int ln;
	char *str;
public:
	Name();
	Name(char*);
	Name(Name&);
	Name operator=(Name&);
	void display();
};
#endif

