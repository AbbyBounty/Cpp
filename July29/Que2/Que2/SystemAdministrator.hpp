//
//  SystemAdministrator.hpp
//  Que2
//
//  Created by ABHILASH  on 29/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef SystemAdministrator_hpp
#define SystemAdministrator_hpp
#include "Emp.h"
#include <stdio.h>
class SystemAdministrator:public Employee
{
  public:
   void  SystemUpdate();
    void Fun()
    {
        cout << "\n\n\t Fun In SystemAdministrator";
    }
    
};
#endif /* SystemAdministrator_hpp */
