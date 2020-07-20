//
//  main.cpp
//  Day5.2
//
//  Created by ABHILASH  on 20/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Box.hpp"
int main(int argc, const char * argv[]) {
  Box box1(10,20),box2(20,10);
       if(box1<box2)
           cout<<"true"<<endl;
       else
           cout<<"false"<<endl;
    return 0;
}
