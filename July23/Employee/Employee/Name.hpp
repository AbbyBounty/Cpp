//
//  Name.hpp
//  Employee
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Name_hpp
#define Name_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
class Name
{
    int ln;
    char *str;
public:
    Name();
    Name(char*);
    Name(Name&);
    Name operator=(Name&);
    void display();
};
#endif /* Name_hpp */
