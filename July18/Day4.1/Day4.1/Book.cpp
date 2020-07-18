//
//  Book.cpp
//  Day4.1
//
//  Created by ABHILASH  on 18/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include "Book.hpp"
int Book::number=100;
Book::Book() {
    name=new char;
    strcpy(name,"");
    this->price = 0;
    number++;
}
Book::Book(char *name, float price) {
    this->name=new char;
       strcpy(this->name,name);
      
      this->price = price;
}

void Book::acceptBook(char *name, float price)
{
    this->name=new char;
          strcpy(this->name,name);
    this->price = price;
}
  void Book::displayBook()
{
    cout<<"Number :"<<this->number<<endl;
    cout<<"Name :"<<this->name<<endl;
    cout<<"Price :"<<this->price<<endl;
    
}

float Book::getPrice() {
    return price;
}

void Book::setPrice(float price) {
    this->price = price;
}
