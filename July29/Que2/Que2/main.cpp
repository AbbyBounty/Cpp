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

void Check(Employee *a[], int size)
{
    for (int i = 0; i < size; i++)
    {
   
    if (typeid(*a[i]) == typeid(Programmer))
        dynamic_cast<Programmer*>(a[i])->Codding();
    else if(typeid(*a[i]) == typeid(DataBAseAdministrator))
        dynamic_cast<DataBAseAdministrator*>(a[i])->CreateDataBase();
    else if(typeid(*a[i]) == typeid(SystemAdministrator))
        dynamic_cast<SystemAdministrator*>(a[i])->SystemUpdate();
    }

}
int main(int argc, const char * argv[]) {
 
    Employee *emp[5];

    emp[0]=new Employee();
    emp[1]=new Programmer();
    emp[2]=new DataBAseAdministrator();
    emp[3]=new SystemAdministrator();
    emp[4]=new Programmer();

    Check(emp,5);
    

    
    
        cout << "\n\n\n";
    return 0;
}
