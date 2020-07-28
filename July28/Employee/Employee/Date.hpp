//
//  Date.hpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Date
{
    int dd, mm, yy;
public:
    Date();
    Date(int, int, int);
    void display();
};
#endif /* Date_hpp */
