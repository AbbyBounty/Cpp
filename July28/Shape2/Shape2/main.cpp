//
//  main.cpp
//  Shape2
//
//  Created by ABHILASH  on 28/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
using namespace std;
class Shape
{
public:
    virtual int calculateArea(){return 0;}
    virtual int calculatePerimeter()=0;
};
int Shape::calculatePerimeter(){return 0;}
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
    int calculatePerimeter()
    {
        return 2*(this->b+this->l);
    }
    
};


class Triangle:public Shape
{
private:
    int h,b,s;
public:
    Triangle(int h,int b,int s)
    {
        this->h=h;
        this->b=b;
        this->s=s;
    }
    int calculateArea()
    {
        return 0.5*this->h*this->b;
    }
    int calculatePerimeter()
    {
        return this->b+this->s+this->s;
    }
    
};
int main(int argc, const char * argv[]) {
    
    Shape *s;

    s=new Rectangle(10,20);
    cout<<"Area of Rectangle ::"<<s->calculateArea()<<endl;
    cout<<"Perimeter of Rectangle ::"<<s->calculatePerimeter()<<endl;


    cout<<endl;

    s=new Triangle(12,13,14);
    cout<<"Area of Triangle ::"<<s->calculateArea()<<endl;
    cout<<"Perimeter of Triangle ::"<<s->calculatePerimeter()<<endl;
    

    
    return 0;
}
