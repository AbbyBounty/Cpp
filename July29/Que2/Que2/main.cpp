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
        a[i]->Fun();
      //  if (typeid(*a[i]) == typeid(B))
         //   dynamic_cast<B*>(a[i])->Check();
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
