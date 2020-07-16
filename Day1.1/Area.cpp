//
//  Area.cpp
//  Day1.1
//
//  Created by ABHILASH  on 16/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Area.hpp"

Area::Area()
{
    this->length=this->breadth=0.0;
}
Area::Area(double length,double breadth)
{
    this->length=length;
    this->breadth=breadth;
    
}
void Area::calculateArea()
{
    cout<<"\t\t Area :: "<<this->length*this->breadth<<endl;
}

