//
//  main.cpp
//  Day4.1
//
//  Created by ABHILASH  on 18/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Book.hpp"
int max(int *temp)
{
    int max=temp[0],c=0;
    for(int i=0;i<5;i++)
    {
        if(max<temp[i])
        {
            max=temp[i];
            c=i;
            
        }
    }
    return c;
}
int main(int argc, const char * argv[]) {
    Book b[4];
    int *temp=NULL;
    temp=new int[5];
    b[0].acceptBook("C++", 345.50);
    b[1].acceptBook("JAVA", 770.50);
    b[2].acceptBook("DS", 600.50);
    b[3].acceptBook("OS", 200.50);
    
     for(int i=0;i<5;i++)
          temp[i]=b[i].getPrice();
    int result=max(temp);
    b[result].displayBook();
   
    return 0;
}
