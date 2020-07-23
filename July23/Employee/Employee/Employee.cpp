//
//  Employee.cpp
//  Employee
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Employee.hpp"
int Employee::eid=1000;
Employee::Employee()
{
    
    sal = 0;
    
}
Employee::Employee( char *n, int d, int m, int y,float s):nm(n),dob(d,m,y)
{
   
    sal = s;
    eid++;
}
void Employee::display()
{
    cout << "\n\t ********** Emp id " << eid << " ************\n";
    nm.display();
    dob.display();
   
    cout << "\t\tSal\t:" << sal << endl;
}
