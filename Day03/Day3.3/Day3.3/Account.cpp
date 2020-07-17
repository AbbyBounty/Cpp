//
//  Account.cpp
//  Day3.3
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Account.hpp"
int Account::accountNo=1000;
Account::Account()
{
    this->name=new char;
    strcpy(this->name," ");
    this->balance=0.0;
    accountNo++;
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
void Account::displayAccount()
{
    cout<<"Accout Number :"<<accountNo<<endl;
    cout<<"Name :"<<this->name<<endl;
    cout<<"Balance :"<<this->balance<<endl;
}
