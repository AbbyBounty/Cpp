//
//  Person.hpp
//  Person
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include "Address.hpp"
#include "Name.hpp"
#include "Date.hpp"
#include <stdio.h>
#include<iostream>
using namespace std;
class Person
{
  
    Name nm;
    Date dob;
    Address ad;

public:
    Person();
    Person( char*, int, int, int, char*);
    void display();
};
#endif /* Person_hpp */
