//
//  WagEmployee.cpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "WagEmployee.hpp"

WageEmployee::WageEmployee()
{
    
}

WageEmployee:: WageEmployee(int noOfHrs,int ratePerHrs):Employee("rayn",22,11,2002,"USA")
{
    this->noOfHrs=noOfHrs;
    this->ratePerHrs=ratePerHrs;
}
  
void WageEmployee::calculateSalary()
{
    
    Employee::display();
    cout<<"WAgeEmployee Sal "<<getSalary()+this->noOfHrs*this->ratePerHrs<<endl;
}
