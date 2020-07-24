//
//  Employee.cpp
//  Person
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Employee.hpp"
Employee::Employee()
{
    this->empid=0;
    this->salaray=0.0;
    
}


Employee::Employee(int empid,float salaray):Person("John","NY")
{
    this->empid=empid;
    this->salaray=salaray;
}
void Employee::display()
{
    cout<<"Epmployee ID :"<<this->empid<<endl;
    Person::display();
    cout<<"Salary : "<<this->salaray<<endl;
}
