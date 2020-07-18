//
//  Complex.hpp
//  Day4.3
//
//  Created by ABHILASH  on 18/07/20.
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
    
    
};
#endif /* Complex_hpp */
