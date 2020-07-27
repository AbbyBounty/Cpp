#include"Salesman.h"
Salesman::Salesman()
{
	sale = 0;
	com = 0;
}
Salesman::Salesman(int x, float z, int id, char *n, int d, int m, int y, char *as, float s) :Employee(id, n, d, m, y, as, s)
{
	sale = x;
	com = z;
}
void Salesman::display()
{
	Employee::display();
	cout << "\t\tsale\t:" << sale << "\n" << "\t\tcommision:" << com;
}
