#include"addr.h"
Address::Address()
{
	ln = 1;
	str = new char[ln];
	str[0] = '\0';
}
Address::Address(char *s)
{
	ln = strlen(s);
	str = new char[ln + 1];
	strcpy(str, s);
}
Address::Address(Address &addr)
{
	ln = addr.ln;
	str = new char[ln + 1];
	strcpy(str, addr.str);
}
Address Address:: operator =(Address &addr)
{
	ln = addr.ln;
	str = new char[ln + 1];
	strcpy(str, addr.str);
	return *this;
}
void Address::display()
{
	cout << "\t\tAddress :" << str << endl;;
}
