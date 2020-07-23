//
//  Employee.hpp
//  Employee
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp
#include "Date.hpp"
#include "Name.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;
class Employee
{
  static  int eid;
    Name nm;
    Date dob;
    float sal;
public:
    Employee();
    Employee( char*, int, int, int,float);
    void display();
    
};
#endif /* Employee_hpp */
