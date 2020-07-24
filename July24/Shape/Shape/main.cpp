//
//  main.cpp
//  Shape
//
//  Created by ABHILASH  on 24/07/20.
//  Copyright © 2020 ABHILASH . All rights reserved.
//

#include <iostream>
using namespace std;
class shape
{
    protected:
        double b;
        double h;
    public:
        shape(double b1,double h1)
        {
            b=b1;
            h=h1;
        }
        virtual void disp_area()=0;
};

class Sqaure :public shape
{
    public:
        Sqaure( double b1, double h1):shape(b1,h1)
        {
        }
        void disp_area();
};

class rectangle:public shape
{
    public:
        rectangle(double b1,double h1):shape(b1,h1)
        {
        }
        void disp_area();
};

void rectangle::disp_area()
{
    double a1;
    a1=b*h;
    cout<<"\nTHE AREA OF RECTANGLE IS :"<<a1;

}

void Sqaure ::disp_area()
{
    double a1;
    a1=b*h;
    cout<<"\nTHE AREA OF  SQAURE :"<<a1;
}
int main(int argc, const char * argv[]) {
    double b1,h1;
   
      cout<<"\n\nPLEASE ENTER THE SQAURE DETAILS\n";
      cout<<"LENGTH         = ";
      cin>>b1;
      cout<<"\nBREADTH   = ";
      cin>>h1;
      Sqaure t1(b1,h1);
      cout<<"\n\nPLEASE ENTER THE RECTANGLE DETAILS\n";
      cout<<"\nLENGTH  = ";
      cin>>b1;
      cout<<"\nBREADTH = ";
      cin>>h1;
      rectangle r1(b1,h1);
      shape *list[2];
      list[0]=&t1;
      list[1]=&r1;
      while(1)
      {
         
          cout<<"\n\n\n\n\n------------MENU------------";
          cout<<"\n\n1. SQAURE AREA";
          cout<<"\n2. RECTANGLE AREA";
          cout<<"\n3. EXIT";
          cout<<"\nENTER YOUR CHOICE :";
          int ans;
          cin>>ans;
          if(ans ==1)
          {
              list[0]->disp_area();
          }
          else if(ans==2)
          {
              list[1]->disp_area();
          }
          else if(ans==3)
              exit(1);
          else
          {
              cout<<"\nINVALID CHOICE";
    
              continue;

        }
    }
    return 0;
}
