//
//  Complex.hpp
//  Day3.2
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <stdio.h>
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
    static int count;
public:
    Complex();
    void setReal(int);
    int getReal();
    void setImg(int);
    int getImg();
    void DisplayComplex();
    
    
};
#endif /* Complex_hpp */
