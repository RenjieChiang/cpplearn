// #include "iostream"
// void showValue( int a , int b  = 20 );
// int func(int a , int );
// int main()
// {
//     int c = 10;
//     // showValue(c);
//     int * const p = &c;
//     c++;
//     (*p)++;
//     std::cout<<*p;
//     // std::cout<<func(c,10)<<std::endl;
//     return 0;
// }
// void showValue( int a , int b  )//只能函数声明有default parameter value
// {
//     std::cout<<a +  b<<std::endl;
// }
// int func (int a, int b)
// {
//     return a+b ;
// }
#include "mycpp.h"
int * add(int a , int b)
{
    int *p = new int;
    *p = a + b;
    return p;
}