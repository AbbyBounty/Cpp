//
//  Employee.cpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Employee.hpp"
int Employee::empid=100;
Employee::Employee()
{
    
}
Employee::Employee(string name,int dd,int mm ,int yy ,char *add):dateOfJoining(dd,mm,yy),address(add)
{
    this->name=name;
    
}
void Employee::display()
{
    empid++;
    cout<<"Employee id ::"<<empid<<endl;
    cout<<"Name :"<<this->name<<endl;
    dateOfJoining.display();
    address.display();
    
}

float Employee::getSalary()
{
    return this->salary;
}

void Employee::setSalary(float salary)
{
    this->salary=salary;
}
