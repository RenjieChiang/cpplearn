#ifndef _MYCPP_ 
#define _MYCPP_
#include "iostream"
#include "fstream"
#include "cstdlib"
#include "cstring"
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
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void setGolf(golf & golf_ , const char * fullname_ , int handicap_);
int setGolf(golf & golf_);
void handicap(golf & golf_ , int handicap_);
void showGolf(const golf & golf_);
#endif