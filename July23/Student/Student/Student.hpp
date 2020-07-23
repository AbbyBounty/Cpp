//
//  Student.hpp
//  Student
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp
#include "Date.hpp"
#include <stdio.h>
class Student
{
private:
    
    char *name;
    static int roll;
    Date dateOfAdmission;
    
public:
    Student();
    Student(const char *,int ,int,int);
    Student(Student&);
    void accept(Student &);
    void display();
    ~Student();
};
#endif /* Student_hpp */
