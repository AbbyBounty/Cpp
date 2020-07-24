//
//  Date.cpp
//  Employee
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Date.hpp"
Date::Date()
{
    dd = mm = 1;
    yy = 2020;
}
Date::Date(int d, int m, int y)
{
    dd = d; mm = m; yy = y;
}
void Date::display()
{
    cout << "\t\tDate is\t:" << dd << "/" << mm << "/" << yy << endl;
}
