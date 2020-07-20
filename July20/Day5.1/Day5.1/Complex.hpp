//
//  Complex.hpp
//  Day5.1
//
//  Created by ABHILASH  on 20/07/20.
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
    Complex(int,int);
    void setReal(int);
    int getReal();
    void setImg(int);
    int getImg();
    void DisplayComplex() const;
    Complex operator+(Complex&);
    Complex operator-(Complex&);
    void operator++(int);
    void operator--();
    
};
#endif /* Complex_hpp */
