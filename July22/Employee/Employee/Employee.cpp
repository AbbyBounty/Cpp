//
//  Employee.cpp
//  Employee
//
//  Created by ABHILASH  on 22/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Employee.hpp"
Employee::Employee()
{
    this->id=10;
    name=new char;
    strcpy(name," ");
  
}

Employee::Employee(const char *name,int id,char city[])
{
  
  this->name=new char;
  strcpy(this->name,name);
    strcpy(this->city,city);
    this->id=id;
    
}

void Employee::acceptEmployee(const char *name,char city[])
{
   
    this->name=new char;
    strcpy(this->name,name);
   strcpy(this->city,city);
    
}

void Employee::displayEmployee()
{
    cout<<"id         :: "<<this->id<<endl;
    cout<<"name         :: "<<this->name<<endl;
     cout<<"City         :: "<<this->city<<endl;
   
    
}

Employee::~Employee()
{
    delete []name;
    
}

void Employee::setName(const char *name)
{
    this->name=new char;
     strcpy(this->name,name);
}
