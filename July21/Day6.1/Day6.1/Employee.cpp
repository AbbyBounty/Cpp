//
//  Employee.cpp
//  Day6.1
//
//  Created by ABHILASH  on 21/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Employee.hpp"

Employee::Employee()
{
    this->id=10;
    name=new char;
    strcpy(name," ");
  
}

Employee::Employee(const char *name,int id)
{
  
  this->name=new char;
  strcpy(this->name,name);
    this->id=id;
    
}

void Employee::acceptEmployee(const char *name)
{
   
    this->name=new char;
    strcpy(this->name,name);
   
    
}

void Employee::displayEmployee()
{
    cout<<"id         :: "<<this->id<<endl;
    cout<<"name         :: "<<this->name<<endl;
   
   
    
}

Employee::~Employee()
{
    delete []name;
    
}
