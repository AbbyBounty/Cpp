//
//  Account.hpp
//  Day3.3
//
//  Created by ABHILASH  on 17/07/20.
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
public:
    Account();
    void setName(char*);
    char* getName();
    void setBalance(double);
    double geBalance();
    void displayAccount();
    
};
#endif /* Account_hpp */
