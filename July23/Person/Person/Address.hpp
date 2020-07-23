//
//  Address.hpp
//  Person
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Address_hpp
#define Address_hpp
#include <iostream>

#include <stdio.h>
using namespace std;

class Address
{
    int ln;
    char *str;
public:
    Address();
    Address(char*);
    Address(Address &);
    Address  operator=(Address &);
    void display();
};
#endif /* Address_hpp */
