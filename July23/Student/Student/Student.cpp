//
//  Student.cpp
//  Student
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Student.hpp"

int Student::roll=100;
Student::Student()
{
   
    name=new char;
    strcpy(name," ");
     roll++;
    
}

Student::Student(const char *name,int dd,int mm,int yy):dateOfAdmission(dd,mm,yy)
{
      
      this->name=new char;
      strcpy(this->name,name);
      roll++;
    
}

Student::Student(Student &s)
{
      
        this->name=new char;
        strcpy(this->name,s.name);
        roll++;
    
}

void Student::accept(Student &s)
{
   
    this->name=new char;
    strcpy(this->name,s.name);
   
    
}

void Student::display()
{
    cout<<"roll         :: "<<roll<<endl;
    cout<<"name         :: "<<name<<endl;
    dateOfAdmission.display();
   
   
    
}

Student::~Student()
{
    delete []name;
    
}
