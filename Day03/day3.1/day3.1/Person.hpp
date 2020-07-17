//
//  Person.hpp
//  day3.1
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Person
{
private:
    char *name;
    int age;
    char *city;
public:
    Person();
    Person(char*,int,char*);
    void displayPerson();
    void setName(char*);
    char* getName();
    void setAge(int);
    int getAge();
    void setCity(char*);
    char* getCity();
    
    
    
};
#endif /* Person_hpp */
