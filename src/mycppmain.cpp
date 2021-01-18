#include  "mycpp.h"
#include "iostream"
int main()
{
    int a = 10;
    int b = 20;
    int * p = add(a,b);
    std::cout<<*p<<std::endl;
    delete p;
}