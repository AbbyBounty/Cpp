//
//  Name.cpp
//  Employee
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Name.hpp"
Name::Name()
{
    ln = 1;
    str = new char[ln];
    str[0] = '\0';
}
Name::Name(char *s)
{
    ln = strlen(s);
    str = new char[ln + 1];
    strcpy(str, s);
}
Name::Name(Name &nm)
{
    ln = nm.ln;
    str = new char[ln + 1];
    strcpy(str, nm.str);
}
Name Name:: operator =(Name &nm)
{
    ln = nm.ln;
    str = new char[ln + 1];
    strcpy(str, nm.str);
    return *this;
}
void Name::display()
{
    cout << "\t\tName is\t:" << str << endl;;
}
