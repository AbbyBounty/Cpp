//
//  Book.hpp
//  Day4.1
//
//  Created by ABHILASH  on 18/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include<iostream>
using namespace std;
class Book {
private:
   static int number;
    char *name;
    float price;
public:
    Book();
    Book(char *name, float price);
    void acceptBook(char *name, float price);
    void displayBook();
    float getPrice();
    void setPrice(float);
};

#endif /* Book_hpp */
