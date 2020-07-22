//
//  main.cpp
//  String
//
//  Created by ABHILASH  on 22/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
#include "String.hpp"
int main(int argc, const char * argv[]) {
    String s1("abhii");
        String s2("Abhi");
        String s3;
        cout<<"s1 :: ";
        s1.display();
        cout<<"s2 :: ";
        s2.display();
        cout<<endl;
    //    s1+s2
        s3=s1+s2;
        cout<<"s1+s2 :: ";
        s3.display();
        cout<<endl;
    //  s1==s2
        cout<<"s1==s2 (compare length) :: ";
            if(s1==s2)
            {
                cout<<"same"<<endl;
            }
            else
            {
                cout<<"diff"<<endl;
            }
        cout<<endl;
    // s1>=s2
        cout<<"s1>=s2 (compare length) :: ";
            if(s1>=s2)
               {
                   cout<<"s1 is greater"<<endl;
               }
               else
               {
                   cout<<"s2 is greater"<<endl;
               }
        cout<<endl;
    // s1>s2
        cout<<"s1>s2 (compare length) :: ";
            if(s1>s2)
               {
                   cout<<"s1 is greater"<<endl;
               }
               else
               {
                   cout<<"s2 is greater"<<endl;
               }
        cout<<endl;
    // s1[]
        
        cout<<"s1[0] :: "<<s1[0]<<endl; // s1.operator[](0)
        cout<<"s1[1] :: "<<s1[1]<<endl;
        cout<<"s1[2] :: "<<s1[2]<<endl;
        cout<<"s1[3] :: "<<s1[3]<<endl;
        cout<<endl;
    //  s1<<
        cout<<"s1<< :: ";
        cout<<s1;
        cout<<endl;
    //  s1=s2
        s1=s2;
        cout<<"(s1=s2) copy :: "<<s1;
        cout<<endl;
    return 0;
}
