//
//  Complex.cpp
//  Day5.1
//
//  Created by ABHILASH  on 20/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Complex.hpp"
int Complex:: count=0;
Complex::Complex(int r,int i)
{
    real=r;
    img=i;
    count++;
}
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
void Complex::DisplayComplex() const
{
    cout<<"Real :: "<<this->real<<endl;
    cout<<"Img  ::"<<this->img<<endl;
    
}
Complex Complex::operator+(Complex &s)
{
    Complex temp;
    temp.real=this->real+s.real;
    temp.img=this->img+s.img;
    return temp;
}
Complex Complex::operator-(Complex &s)
{
    Complex temp;
    temp.real=this->real-s.real;
    temp.img=this->img-s.img;
    return temp;
}

void Complex::operator++(int dummmy)
{
    this->real=++this->real;
    this->img=++this->img;
}

void Complex::operator--()
{
     this->real=--this->real;
    this->img=--this->img;
    
}
