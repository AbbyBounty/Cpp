//
//  Student.cpp
//  Student
//
//  Created by ABHILASH  on 22/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Student.hpp"
static int roll=100;
static const char coll_name[20]="UCLA";
Student::Student()
{
    this->noOfSubject=5;
    name=new char;
    strcpy(name," ");
    mark=new int[this->noOfSubject];
    this->mark={0};
}

Student::Student(const char *name,int noOfSubject,int *mark)
{
  
  this->name=new char;
  strcpy(this->name,name);
  this->mark=new int[noOfSubject];
  this->mark=mark;
    
}

Student::Student(Student &s)
{
      
    this->name=new char;
    strcpy(this->name,s.name);
    this->mark=new int[5];
    this->mark=s.mark;
    
}

void Student::acceptStudent(Student &s)
{
   
    this->name=new char;
    strcpy(this->name,s.name);
    this->mark=new int[5];
    this->mark=s.mark;
    
}

void Student::displayStudent()
{
    cout<<"roll         :: "<<roll<<endl;
    cout<<"name         :: "<<name<<endl;
    cout<<"marks        :: ";
   // for(int i=0;i<5;i++)
 //   cout<<mark[i]<<" ";
    cout<<endl;
    cout<<"college name :: "<<coll_name<<endl;
    cout<<endl;
    roll++;
    
}

Student::~Student()
{
    delete []name;
    
}


Student Student:: copy(Student &student)
{
    
    strcpy(student.name,this->name);
    return student;
}
void Student::setName(const char* name)
{
    strcpy(this->name,name);
}
