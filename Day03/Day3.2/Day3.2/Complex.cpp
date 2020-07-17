//
//  Complex.cpp
//  Day3.2
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Complex.hpp"
 int Complex:: count=0;
Complex::Complex()
{
    this->real=this->img=0;
    count++;
}
void Complex::setReal(int real)
{
    this->real=real;
}
int Complex::getReal()
{
    return this->real;
}
void Complex::setImg(int img)
{
    this->img=img;
}
int Complex::getImg()
{
    return this->img;
}
void Complex::DisplayComplex()
{
    cout<<"Real :: "<<this->real<<endl;
    cout<<"Img  ::"<<this->img<<endl;
    cout<<"Number of Object Created ::"<<count<<endl;
}
