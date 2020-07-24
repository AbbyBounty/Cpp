//
//  main.cpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "WagEmployee.hpp"
#include "SalesPerson.hpp"
int main(int argc, const char * argv[]) {
   
    WageEmployee wageemployee(9,1000);
    wageemployee.setSalary(30000);
    wageemployee.calculateSalary();
    
    cout<<"\n====================================="<<endl;
    
    SalesPerson salesperson(50,20.2);
    salesperson.setSalary(45000);
    salesperson.calculateSalary();
 
    
    return 0;
}
