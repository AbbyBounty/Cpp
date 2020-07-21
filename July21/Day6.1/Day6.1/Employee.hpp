//
//  Employee.hpp
//  Day6.1
//
//  Created by ABHILASH  on 21/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
class Employee
{
private:
    int id;
    char *name;
public:
    Employee();
    Employee(const char *,int id);
    Employee(Employee&);
    void acceptEmployee(const char *name);
    void displayEmployee();
    ~Employee();
};
#endif /* Employee_hpp */
