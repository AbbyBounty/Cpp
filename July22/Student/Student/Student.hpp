//
//  Student.hpp
//  Student
//
//  Created by ABHILASH  on 22/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
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
    Student copy(Student&);
    void setName(const char*);

    ~Student();
};
#endif /* Student_hpp */
