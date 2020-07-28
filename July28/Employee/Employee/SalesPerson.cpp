//
//  SalesPerson.cpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "SalesPerson.hpp"
SalesPerson::SalesPerson()
{
    
}
   
SalesPerson::SalesPerson(int totalSales,float commmision):Employee("rayn",22,11,2002,"USA")
{
    this->totalSales=totalSales;
    this->commmision=commmision;
}

void SalesPerson::calculateSalary()
{
    Employee::display();
    cout<<"SalesPerson Salary :"<< getSalary()+(this->totalSales+this->commmision)<<endl;
}
