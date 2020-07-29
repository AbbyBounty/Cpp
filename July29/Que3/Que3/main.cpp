//
//  main.cpp
//  Que3
//
//  Created by ABHILASH  on 29/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int num1 = 10;
    //double num2 = ( double )num1;
    double num2 = static_cast<double>( num1 );
    cout<<"Num2 : "<<num2<<endl;
    
    double num3 = 10.5;
    //int num2 = ( int )num1; //C-Style
    int num4 = static_cast<int>( num3 ); //C++ Style
    cout<<"Num2 : "<<num4<<endl;
    
    
    return 0;
}
