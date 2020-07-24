//
//  Person.cpp
//  Person
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Person.hpp"

 static char const *city="pune";
Person::Person()
{
    name=new char;
    strcpy(name," ");
    add=new char;
    strcpy(add," ");
}

Person::Person(const char *name,const char *add)
{
    this->name=new char;
    strcpy(this->name,name);
    this->add=new char;
    strcpy(this->add,add);
}


void Person::display()
{
    cout<<"name :: "<<name<<endl;
    cout<<"add  :: "<<add<<endl;
    //cout<<"city :: "<<city<<endl;
    
}
