//
//  Person.hpp
//  Person
//
//  Created by ABHILASH  on 24/07/20.
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
    char *add;
    
public:
    Person();
    Person(const char *,const char *);
    void display();
};

#endif /* Person_hpp */
