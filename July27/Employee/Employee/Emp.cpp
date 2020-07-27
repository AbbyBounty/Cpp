#include"Emp.h"
Employee::Employee()
{
	eid = 0;
	sal = 0;
}
Employee::Employee(int id, char *n, int d, int m, int y, char *as,float s):nm(n),dob(d,m,y),ad(as)
{
	eid = id;
	sal = s;
}
void Employee::display()
{
	cout << "\n\t ********** Emp id " << eid << " ************\n";
	nm.display();
	dob.display();
	ad.display();
	cout << "\t\tSal\t:" << sal << endl;
}
