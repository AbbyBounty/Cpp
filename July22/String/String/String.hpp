//
//  String.hpp
//  String
//
//  Created by ABHILASH  on 22/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef String_hpp
#define String_hpp

#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include "string"
using namespace std;

class String
{
private:
    int len;
    char *str;
public:
    String();
    String(const char *);
    String(String &);
    String operator+(String &);
    int operator==(String &);
    int operator>=(String &);
    int operator>(String &);
    char operator[](int);
    String operator=(const String &);
    friend void operator<<(ostream &out,String &s)
    {
        out<<s.str<<endl;
    }
    void display();
    
    
};

#endif /* String_hpp */
