//
//  main.cpp
//  Employee
//
//  Created by ABHILASH  on 28/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "SalesPerson.hpp"
#include "WagEmployee.hpp"
int main(int argc, const char * argv[]) {
    Employee *emp=new SalesPerson(50,20.2);
    emp->setSalary(4500);
    emp->calculateSalary();
    
    emp=new WageEmployee(9,1000);
    emp->setSalary(6000);
    emp->calculateSalary();
    return 0;
}
