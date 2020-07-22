//
//  Employee.hpp
//  Employee
//
//  Created by ABHILASH  on 22/07/20.
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
    char city[30];
public:
    Employee();
    Employee(const char *,int id,char city[]);
    Employee(Employee&);
    void acceptEmployee(const char *name,char city[]);
    void displayEmployee();
    ~Employee();
    void setName(const char *name);
};
#endif /* Employee_hpp */
