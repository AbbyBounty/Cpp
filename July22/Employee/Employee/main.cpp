//
//  main.cpp
//  Employee
//
//  Created by ABHILASH  on 22/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
int main(int argc, const char * argv[]) {
   Employee employee("ryan",11,"NY");
    employee.displayEmployee();
    employee.setName("john");
    employee.displayEmployee();
    return 0;
}
