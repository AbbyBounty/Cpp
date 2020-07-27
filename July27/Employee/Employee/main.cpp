//
//  main.cpp
//  Employee
//
//  Created by ABHILASH  on 27/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include"Salesman.h"
#include"Manager.h"
int main(int argc, const char * argv[]) {
    
    Manager m1;
    Manager m2(1200, 1100, 1, "Ryan", 1, 1, 2020, "NY", 25);
    cout << "\t*********MANAGER DETAILS************" << endl;
    m1.display();
    m2.display();
    
    
    Salesman s1;
    Salesman s2(1200, 1100, 1, "John", 1, 1, 2020, "LA", 25);
    cout << "\n\n\t*********SALESMAN DETAILS************" << endl;
    s1.display();
    s2.display();
    cout << "\n\t\t";
    return 0;
}
