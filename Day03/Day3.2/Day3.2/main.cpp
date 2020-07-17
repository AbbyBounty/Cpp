//
//  main.cpp
//  Day3.2
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Complex.hpp"
int main(int argc, const char * argv[]) {
    Complex complex1;
    complex1.DisplayComplex();
    
    Complex complex2;
    complex1.setReal(10);
    complex2.setImg(20);
    
    complex2.DisplayComplex();
    return 0;
}
