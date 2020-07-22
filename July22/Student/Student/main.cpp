//
//  main.cpp
//  Student
//
//  Created by ABHILASH  on 22/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Student.hpp"
int main(int argc, const char * argv[]) {
  
    Student student1;
    student1.setName("rayn");
    
    Student student2=student1;
    student2.displayStudent();
    return 0;
}
