//
//  Student.hpp
//  Day1.2
//
//  Created by ABHILASH  on 16/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include<iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Student
{
private:
    int rollNo;
    char *name;
    float percentage;
public:
    Student();
    Student(int ,char*,float);
    void acceptStudent(int ,char*,float);
    void displayStudent();
    void showResult();
};
#endif /* Student_hpp */
