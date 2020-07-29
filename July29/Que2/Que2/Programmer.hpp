//
//  Programmer.hpp
//  Que2
//
//  Created by ABHILASH  on 29/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Programmer_hpp
#define Programmer_hpp
#include "Emp.h"
#include <stdio.h>
class Programmer:public Employee
{
public:
    void Codding()
    {
        cout << "\n\n\t Doing Coding";
        
    }
    void Fun()
       {
           cout << "\n\n\t Fun In Programmer";
       }
};
#endif /* Programmer_hpp */
