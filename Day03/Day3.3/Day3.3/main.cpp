//
//  main.cpp
//  Day3.3
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Account.hpp"
int main(int argc, const char * argv[]) {
    Account account;
    account.setName("rayn");
    account.setBalance(3500.50);
    account.displayAccount();
    return 0;
}
