//
//  main.cpp
//  Que2
//
//  Created by ABHILASH  on 29/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include<typeinfo>
#include "Programmer.hpp"
#include "DataBaseAdministrato.hpp"
#include "SystemAdministrator.hpp"
void check(Employee e)
{
     cout<<typeid(e).name()<<endl;
}
int main(int argc, const char * argv[]) {
 
    Employee *emp=new Employee[5];
    
    emp=new Programmer();
    
    check(emp[0]);
    return 0;
}
