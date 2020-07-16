//
//  Date.hpp
//  Day1.3
//
//  Created by ABHILASH  on 16/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Date
{
private:
    int day,month,year;
public:
    Date();
    Date(int,int,int);
    void acceptDate(int,int,int);
    void displayDate();
    void setDay(int);
    int getDay();
    void setMonth(int);
    int getMonth();
    void setYear(int);
    int getYear();
    
};
#endif /* Date_hpp */
