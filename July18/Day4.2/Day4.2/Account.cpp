//
//  Account.cpp
//  Day4.2
//
//  Created by ABHILASH  on 18/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Account.hpp"
int Account::accountNo=100;
float Account::intrest=7.2;
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
    cout<<"Intrest Rate :"<<this->intrest<<endl;
}
void Account::setIntrestRate(float intrest)
{
    this->intrest=intrest;
}
