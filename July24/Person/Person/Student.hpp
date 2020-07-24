//
//  Student.hpp
//  Person
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp
#include <String>
#include <stdio.h>
#include <iostream>
#include "Person.hpp"
using namespace std;

class Student: public Person
{
private:
    int rollNo;
    char *collegeName;
public:
    Student();
    Student(int,char *collegName);
    void display();
    
};
#endif /* Student_hpp */
