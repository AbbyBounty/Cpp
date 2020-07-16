//
//  main.cpp
//  Day1.2
//
//  Created by ABHILASH  on 16/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Student.hpp"
int main(int argc, const char * argv[]) {
    Student student;
    student.acceptStudent(101,"rayn",55.5);
    student.displayStudent();
    student.showResult();
    
    return 0;
}
