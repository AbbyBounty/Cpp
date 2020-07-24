//
//  WagEmployee.hpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef WagEmployee_hpp
#define WagEmployee_hpp
#include "Employee.hpp"
#include <stdio.h>
class WageEmployee :public Employee
{
public:
    int noOfHrs;
    int ratePerHrs;
public:
    WageEmployee();
    WageEmployee(int,int);
    void calculateSalary();
};
#endif /* WagEmployee_hpp */
