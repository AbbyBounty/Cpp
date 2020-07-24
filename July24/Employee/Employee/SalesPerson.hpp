//
//  SalesPerson.hpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef SalesPerson_hpp
#define SalesPerson_hpp
#include "Employee.hpp"
#include <stdio.h>
class SalesPerson:public Employee
{
private:
    int totalSales;
    float commmision;
public:
    SalesPerson();
    SalesPerson(int,float);
    void calculateSalary();
};
#endif /* SalesPerson_hpp */
