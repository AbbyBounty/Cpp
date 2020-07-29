//
//  main.cpp
//  Que4
//
//  Created by ABHILASH  on 29/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
using namespace std;
class Test
{
private:
int number;
public:
    //Test *const this;
    Test( void ) : number( 10 ) {}
    //Test *const this;
    void showRecord( void )
    {
        cout<<"Number   : "<<this->number<<endl;
    }
   
    //const Test *const this;
    void displayRecord( void )const
    {
        //Test *const ptr = ( Test *const  )this;
        Test *const ptr = const_cast<Test *const>( this );
        ptr->showRecord();
    }
};
int main(int argc, const char * argv[]) {
    const Test t1;
    t1.displayRecord();
    return 0;
}
