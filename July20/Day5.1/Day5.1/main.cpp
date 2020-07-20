//
//  main.cpp
//  Day5.1
//
//  Created by ABHILASH  on 20/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Complex.hpp"
int main(int argc, const char * argv[]) {
    Complex complex1,complex2;
    complex1.setImg(10);
    complex1.setReal(20);
    complex2.setReal(20);
    complex2.setImg(10);
 
    cout<<"\nAddition :"<<endl;
    (complex1+complex2).DisplayComplex();
    
    cout<<"\nPost increment"<<endl;
    complex1++;
    complex1.DisplayComplex();

    cout<<"\nPre decrement"<<endl;
    --complex2;
    complex2.DisplayComplex();//
    return 0;
}
