//
//  main.cpp
//  Que1
//
//  Created by ABHILASH  on 29/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include<typeinfo>
using namespace std;
class Test
{

};
int main(int argc, const char * argv[]) {
   int a;
        char b, str[20] = "Ryan";
        float var;
        Test obj;
    
        cout << "\n\n\t Type Of A : " << typeid(a).name();
        cout << "\n\n\t Type Of B : " << typeid(b).name();
        cout << "\n\n\t Type Of Var : " << typeid(var).name();
        cout << "\n\n\t Type Of str : " << typeid(str).name();
        cout << "\n\n\t Type Of str : " << typeid(str[0]).name();
        cout << "\n\n\t Type Of obj : " << typeid(obj).name();
    return 0;
}
