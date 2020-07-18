//
//  Account.hpp
//  Day4.2
//
//  Created by ABHILASH  on 18/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Account
{
private:
    char *name;
    double balance;
   static int accountNo;
    static float intrest;
public:
    Account();
    void setName(char*);
    char* getName();
    void setBalance(double);
    double geBalance();
    void displayAccount();
    void setIntrestRate(float);
    
};
#endif /* Account_hpp */
