//
//  Date.hpp
//  Student
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp
#include <iostream>
#include <stdio.h>
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
