#include"Emp.h"
Employee::Employee()
{
	
}
Employee::Employee(char *n):nm(n)
{
	
}
void Employee::display()
{
	cout << "\n\t ********** Emp is  ************\n";
	nm.display();
	

}
