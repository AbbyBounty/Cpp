#include "math1.hpp"
#include "math2.hpp"
#ifndef calculator_hpp
#define calculator_hpp
class calculator:public math1,public math2
{
private:
    int result;
public:
    void cal(int a,int b);
    void display();
};
#include <stdio.h>

#endif /* calculator_hpp */
