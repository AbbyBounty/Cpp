#include "calculator.hpp"
void calculator::cal(int a,int b)
{
    int result1=add(a, b);
    int result2=sub(a, b);
    int result3=mul(a, b);
    int result4=div(a, b);
    cout<<result1<<endl;
     cout<<result2<<endl;
     cout<<result3<<endl;
     cout<<result4<<endl;
    
}

void calculator::display()
{
    cout<<"result :: "<<result<<endl;
    
}
