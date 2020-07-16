//
//  Date.cpp
//  Day1.3
//
//  Created by ABHILASH  on 16/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Date.hpp"
Date::Date()
{
    this->day=this->month=this->year=0;
}

Date::Date(int day ,int month, int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
}
   
void Date::acceptDate(int day ,int month, int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
}

void Date::displayDate()
{
    cout<<"Date : "<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    
}

void Date::setDay(int day)
{
      this->day=day;
}

int Date::getDay()
{
    return this->day;
}

void Date::setMonth(int month)
{
     this->month=month;
}

int Date::getMonth()
{
    return  this->month;
}

void Date::setYear(int year)
{
    this->year=year;
}

int Date::getYear()
{
    return this->year;
}
