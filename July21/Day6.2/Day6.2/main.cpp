//
//  main.cpp
//  Day6.2
//
//  Created by ABHILASH  on 21/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include<iostream>
using namespace std;
//
//class Test {  //const data members
//    const int t;
//
//public:
//    Test(int t):t(t) //Initializer
//    {
//
//    }
//
//    int getT()
//    {
//        return t;
//
//    }
//
//};
//
class Test {  //reference members
    int &t;
public:
    Test(int &t):t(t)
    {

    }  //Initializer
    int getT()
    {
        return t;

    }
};
int main(int argc, const char * argv[]) {
//    Test t1(10);
//    cout<<t1.getT();
    
        int x = 20;
       Test t1(x);
       cout<<t1.getT()<<endl;
       x = 30;
       cout<<t1.getT()<<endl;
    return 0;
}
