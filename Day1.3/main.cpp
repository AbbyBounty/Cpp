//
//  main.cpp
//  Day1.3
//
//  Created by ABHILASH  on 16/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Date.hpp"
int main(int argc, const char * argv[]) {
    Date date;
    date.acceptDate(16, 07, 2020);
    date.displayDate();
    cout<<endl;
    
    date.setDay(17);
    date.setMonth(8);
    date.setYear(2021);
    date.displayDate();
    
    return 0;
}
