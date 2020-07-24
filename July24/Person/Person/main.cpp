//
//  main.cpp
//  Person
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
#include "Student.hpp"
int main(int argc, const char * argv[]) {
    
    Employee employee(100,3500.50);
    employee.display();
    
    Student student(123,"UCLA");
    student.display();

    return 0;
}
