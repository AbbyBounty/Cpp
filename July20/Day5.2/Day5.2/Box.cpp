//
//  Box.cpp
//  Day5.2
//
//  Created by ABHILASH  on 20/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Box.hpp"
Box::Box()
{
    this->length=0;
    this->width=0;
}

Box::Box(float length,float width)
{
    this->length=length;
     this->width=width;
}

void Box::display()
{
    cout<<"lenght :: "<<length<<endl;
    cout<<"width  :: "<<width<<endl;
    
}

Box::~Box()
{
    this->length=NULL;
      this->width=NULL;
}

int Box:: operator>(Box &b)
{
    int cnt=0;
    if(this->length>b.length)
        cnt++;
    return cnt;
}

int Box:: operator<(Box &b)
{
    int cnt=0;
    if(this->length<b.length)
        cnt++;
    return cnt;
}
