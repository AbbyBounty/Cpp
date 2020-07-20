//
//  Student.hpp
//  Day5.3
//
//  Created by ABHILASH  on 20/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <iostream>
#include <stdio.h>
using namespace std;
class Student
{
private:
    int noOfSubject;
    char *name;
    int *mark;
public:
    Student();
    Student(const char *,int noOfSubject,int *);
    Student(Student&);
    void acceptStudent(Student &);
    void displayStudent();
    ~Student();
};
#endif /* Student_hpp */
