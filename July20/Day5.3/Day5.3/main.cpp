//
//  main.cpp
//  Day5.3
//
//  Created by ABHILASH  on 20/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Student.hpp"
int main(int argc, const char * argv[]) {
    int mark[5]={10,20,30,40,50};
    Student s("abhi",mark);
    s.displayStudent();
    cout<<endl;
    Student *s1;
    s1=new Student[5];
    
    for(int i=0;i<5;i++)
    {
        s1[i].acceptStudent(s);
       
    }
    
    for(int i=0;i<5;i++)
    {
        s1[i].displayStudent();
        cout<<endl;
    }
    delete []s1;
    cout<<endl;
    return 0;
}

