#include"Manager.h"
Manager::Manager()
{
	ta = da = 0;
}
Manager::Manager(int x, int z,int id, char *n, int d, int m, int y, char *as, float s):Employee(id, n, d, m, y, as, s)
{
	ta = x;
	da = z;
}
void Manager::display()
{
     Employee::display();
	cout << "\t\tta\t:" << ta<<"\n"<<"\t\tda\t:"<<da;
}
