// #include "iostream"
// void showValue( int a , int b  = 20 );
// int func(int a , int );
#include "mycpp.h"
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
//template <typename AnyType>
//void add( AnyType & a , AnyType & b)
//{
//    AnyType temp;
//    temp = a;
//    a = b;
//    b = temp;
//}
//void file_it(std::ostream & os, double fo, const double fe[], int n)
//{
//    std::ios_base::fmtflags initial;
//    initial = os.setf(std::ios_base::fixed);
//    os.precision(1);
//    os<<"focal length of objective:"<<fo<<"mm"<<std::endl;
//    os.setf(std::ios::showpoint);
//    os.precision(1);
//    os.width(12);
//    os<<"f.1. eyepiece";
//    os.width(15);
//    os<<"magnification"<<std::endl;
//    for (int i = 0; i < n; i++)
//    {
//        os.width(12);
//        os<<fe[i];
//        os.width(15);
//        os<<int (fo/fe[i] + 0.5)<<std::endl;
//    }
//    os.setf(initial);
//}
void setGolf(golf & golf_ , const char * fullname_ , int handicap_)
{
    strcpy(golf_.fullname , fullname_);
    golf_.handicap = handicap_;
}

int setGolf(golf & golf_)
{
    std::cout<<"enter fullname  IF ENTER NOTHING --> QUIT"<<std::endl;
    char fullname_[Len];
    std::cin.getline(fullname_, Len);
    if (fullname_[0] == '\0' )return 0;
    std::cout<<"enter handicap"<<std::endl;
    int handicap_;
    std::cin>>handicap_;
    std::cin.get();
    setGolf(golf_, fullname_, handicap_);
    return 1;
}

void handicap(golf & golf_ , int handicap_)
{
    golf_.handicap = handicap_;
}

void showGolf(const golf & golf_)
{
    std::cout<<"    fullname  "<<golf_.fullname<<"  handicap:  "<<golf_.handicap<<std::endl;
}