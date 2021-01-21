#ifndef _MYCPP_ 
#define _MYCPP_
#include "iostream"
#include "fstream"
#include "cstdlib"
#include "cstring"
#include "string"
#include "sstream"
//template <typename AnyType>
//void add( AnyType & a , AnyType & b)
//{
//AnyType temp;
//temp = a;
//a = b;
//b = temp;
//}
//
//void file_it(std::ostream & os, double fo, const double fe[], int n);
//const int Len = 40;
//struct golf
//{
//    std::string fullname;
//    int handicap;
//};
//
//void setGolf(golf & golf_ , const std::string fullname_ , int handicap_);
//int setGolf(golf & golf_);
//void handicap(golf & golf_ , int handicap_);
//void showGolf(const golf & golf_);
namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
        void calculate(int n = 4);
    public:
        void setSales(const double saleData[], int n = 4);
        void setSales();
        void showSales();
        Sales();
        ~Sales();
    };
}
#endif