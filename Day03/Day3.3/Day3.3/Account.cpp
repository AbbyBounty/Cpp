//
//  Account.cpp
//  Day3.3
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Account.hpp"

Account::Account()
{
    this->name=new char;
    strcpy(this->name," ");
    this->balance=0.0;
    
}

void Account::setName(char* name)
{
    this->name=name;
}

char* Account::getName()
{
    return this->name;
}

void Account::setBalance(double balance)
{
    this->balance=balance;
}

double Account::geBalance()
{
    return this->balance;
}
