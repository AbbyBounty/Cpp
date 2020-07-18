//
//  main.cpp
//  Day4.3
//
//  Created by ABHILASH  on 18/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Complex.hpp"
int main(int argc, const char * argv[]) {
      Complex complex1;
      complex1.DisplayComplex();
      
      Complex complex2;
      complex2.setReal(10);
      complex2.setImg(20);
      complex2.DisplayComplex();
    
    const Complex complex3(40,50);
    complex3.DisplayComplex();
    return 0;
}
