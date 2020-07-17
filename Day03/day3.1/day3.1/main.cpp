//
//  main.cpp
//  day3.1
//
//  Created by ABHILASH  on 17/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "Person.hpp"
int main(int argc, const char * argv[]) {
  
    Person person("ryan",25,"USA");
    person.displayPerson();
    
    cout<<endl;
    
    person.setName("john");
    person.setAge(30);
    person.setCity("AUS");
    person.displayPerson();
    
    return 0;
}
