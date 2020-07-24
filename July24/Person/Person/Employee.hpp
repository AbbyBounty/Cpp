//
//  Employee.hpp
//  Person
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp
#include "Person.hpp"
#include <stdio.h>
class Employee : public Person
{
private:
    int empid;
    float salaray;
public:
    Employee();
    Employee(int,float);
    void display();
};
#endif /* Employee_hpp */
