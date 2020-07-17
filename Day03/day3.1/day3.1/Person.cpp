//
//  Person.cpp
//  day3.1
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Person.hpp"
Person::Person()
{
    this->name=new char;
    strcpy(this->name," ");
    this->age=0;
    this->city=new char;
    strcpy(this->city," ");
}
Person::Person(char* name,int age,char* city)
{
      this->name=new char;
      strcpy(this->name,name);
      this->age=age;
      this->city=new char;
      strcpy(this->city,city);
}
void Person::displayPerson()
{
    cout<<"Name : "<<this->name<<endl;
    cout<<"Age  : "<<this->age<<endl;
    cout<<"city : "<<this->city<<endl;
    
}

void Person::setName(char* name)
{
    this->name=new char;
    strcpy(this->name,name);
    
}
char* Person::getName()
{
    return this->name;
}
void Person::setAge(int age)
{
     this->age=age;
}
int Person::getAge()
{
    return this->age;
}
void Person::setCity(char* city)
{
    this->city=new char;
    strcpy(this->city,city);
    
}
char* Person::getCity()
{
    return this->city;
}
