//
//  Box.hpp
//  Day5.2
//
//  Created by ABHILASH  on 20/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Box
{
private:
    float length,width;
public:
    Box();
    Box(float,float);
    void display();
    ~Box();
    int operator>(Box&);
    int operator<(Box&);
};
#endif /* Box_hpp */
