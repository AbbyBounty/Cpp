//
//  DataBaseAdministrato.hpp
//  Que2
//
//  Created by ABHILASH  on 29/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef DataBaseAdministrato_hpp
#define DataBaseAdministrato_hpp
#include "Emp.h"
#include <stdio.h>

class DataBAseAdministrator:public Employee
{
public:
void CreateDataBase()
    {
        cout << "\n\n\t Creting DataBase";
    }
    void Fun()
         {
             cout << "\n\n\t Fun In DataBAseAdministrator";
         }

};
#endif /* DataBaseAdministrato_hpp */
