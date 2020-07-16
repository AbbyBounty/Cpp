//
//  Student.cpp
//  Day1.2
//
//  Created by ABHILASH  on 16/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Student.hpp"
Student::Student()
{
    this->rollNo=0;
    name=new char;
    strcpy(name," ");
    this->percentage=0.0;
}
Student::Student(int rollNo ,char* name,float percentage)
{
    this->rollNo=rollNo;
    strcpy(this->name, name);
    this->percentage=percentage;
}

void Student::acceptStudent(int rollNo ,char* name,float percentage)
{
    this->rollNo=rollNo;
    strcpy(this->name, name);
    this->percentage=percentage;
}

void Student::displayStudent()
{
    cout<<"RollNo :: "<<this->rollNo<<endl;
    cout<<"Name   :: "<<this->name<<endl;
    cout<<"Percentage :: "<<this->percentage<<endl;
}

void Student::showResult()
{
    if(35<this->percentage && this->percentage<50)
        cout<<"PASS"<<endl;
    else if(50<this->percentage && this->percentage<60)
         cout<<"SECOND DIVISON"<<endl;
    else if(60<this->percentage && this->percentage<75)
        cout<<"FIRST DIVISON"<<endl;
    else if(this->percentage>75)
        cout<<"DISTINCTION"<<endl;
    else
        cout<<"FAILED"<<endl;
}
