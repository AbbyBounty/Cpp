//
//  String.cpp
//  String
//
//  Created by ABHILASH  on 22/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "String.hpp"
String::String()
{
    len=5;
    str=new char[len];
    strcpy(str," ");
}

String::String(const char *s)
{
    len=strlen(s);
    str=new char[len];
    strcpy(str,s);
}

String String::operator+(String &s)
{
    String temp;
    temp.len=this->len+s.len;
    temp.str=new char[temp.len];
    strcpy(temp.str,this->str);
    strcat(temp.str,s.str);
    return temp;
}

int String::operator==(String &s)
{
    int cnt=0;
    if(strlen(this->str)==strlen(s.str))
    {
        cnt=1;
    }
    return cnt;
}

int String::operator>=(String &s)
{
    int cnt=0;
    if(strlen(this->str)>=strlen(s.str))
    {
        cnt=1;
    }
    return cnt;
    
}

int String::operator>(String &s)
{
    int cnt=0;
    if(strlen(this->str)>strlen(s.str))
    {
        cnt=1;
    }
    return cnt;
    
}

char String::operator[](int index)
{
    return str[index];
}

String String::operator=(const String &s)
{
    this->str=new char[len];
    strcpy(this->str,s.str);
    return *this;

}

 String::String(String &s)
{
    len=strlen(s.str);
    s.str=new char[len];
    strcpy(this->str,s.str);
    
}
void String::display()
{
    cout<<" "<<str<<endl;
}
