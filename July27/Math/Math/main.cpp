//
//  main.cpp
//  Math
//
//  Created by ABHILASH  on 27/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "calculator.hpp"
int main(int argc, const char * argv[]) {
   math1 *m=new calculator();
    
    cout<<m->add(10, 20)<<endl;
     cout<<m->sub(10, 20)<<endl;

    
    
    return 0;
}
