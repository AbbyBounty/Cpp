//
//  Area.hpp
//  Day1.1
//
//  Created by ABHILASH  on 16/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Area_hpp
#define Area_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Area
{
private:
    double length;
    double breadth;
public:
    Area();
    Area(double,double);
    void calculateArea();
};

#endif /* Area_hpp */
