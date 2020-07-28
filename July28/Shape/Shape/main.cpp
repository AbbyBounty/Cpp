//
//  main.cpp
//  Shape
//
//  Created by ABHILASH  on 28/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
using namespace std;
class Shape
{
public:
    virtual int calculateArea(){return 0;};
};
class Rectangle:public Shape
{
private:
    int l,b;
public:
    Rectangle(int l,int b)
    {
        this->b=b;
        this->l=l;
    }
    int calculateArea()
    {
        return this->b*this->l;
    }
    
};

class Sqauare:public Shape
{
private:
    int s;
public:
    Sqauare(int s)
    {
        this->s=s;
    }
    int calculateArea()
    {
           return this->s*this->s;
    }
    
};
int main(int argc, const char * argv[]) {
    
    Shape *s=new Rectangle(10,20);
    cout<<"Area of Rectangle ::"<< s->calculateArea()<<endl;
    
    s=new Sqauare(10);
    cout<<"Area of square ::"<<s->calculateArea()<<endl;
    
    return 0;
}
