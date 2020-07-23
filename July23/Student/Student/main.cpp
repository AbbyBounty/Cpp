//
//  main.cpp
//  Student
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Student.hpp"
int main(int argc, const char * argv[]) {
    Student student("ryan",23,10,2020);

    Student *s1;
    s1=new Student[5];
    s1[0].accept(student);
    s1[1].accept(student);
    s1[2].accept(student);
    s1[3].accept(student);
    s1[4].accept(student);
 
    for(int i=0;i<5;i++)
    {
        s1[i].display();
    }
    return 0;
}
