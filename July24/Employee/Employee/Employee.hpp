//
//  Employee.hpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp
#include "Date.hpp"
#include "Address.hpp"
#include <stdio.h>
#include<string>
class Employee
{
private:
    static int empid;
    string name;
    Date dateOfJoining;
    Address address;
    float salary;
public:
    Employee();
    Employee(string,int,int,int,char *);
    void display();
    void setSalary(float);
    float getSalary();
    virtual void calculateSalary()=0;
};
#endif /* Employee_hpp */
