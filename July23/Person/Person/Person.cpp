//
//  Person.cpp
//  Person
//
//  Created by ABHILASH  on 23/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Person.hpp"
Person::Person()
{
  
}
Person::Person( char *n, int d, int m, int y, char *as):nm(n),dob(d,m,y),ad(as)
{
  
 
}
void Person::display()
{
    cout << "\n\t ********** Person  " " ************\n";
    nm.display();
    dob.display();
    ad.display();
   
}
