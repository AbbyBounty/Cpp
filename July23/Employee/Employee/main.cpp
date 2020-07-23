//
//  main.cpp
//  Employee
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
#include <vector>
int main(int argc, const char * argv[]) {
   

    
    Employee *employee= new Employee[3];
    Employee emp1("ryan",2,2,1802,35.5);
    Employee emp2("jack",6,4,2000,999.6);
    Employee emp3("jimmy",8,8,2020,882.1);
    
    employee[0]={emp1};
    employee[1]={emp2};
    employee[2]={emp3};
    
    employee[0].display();
    employee[1].display();
    employee[2].display();
    
    
    
    return 0;
}
