//
//  Student.cpp
//  Person
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Student.hpp"

Student::Student()
{
    collegeName=new char;
    this->rollNo=0;
    strcpy(this->collegeName," ");
}
Student::Student(int roll,char *collegName):Person("ryan","USA")
{
    collegeName=new char;
    this->rollNo=roll;
    strcpy(this->collegeName,collegeName);
}
void Student::display()
{
    cout<<"Student ROLL :"<<this->rollNo<<endl;
    Person::display();
    cout<<"College Name :"<<this->collegeName<<endl;
}
