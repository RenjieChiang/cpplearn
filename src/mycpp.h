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
//namespace SALES
//{
//    const int QUARTERS = 4;
//    class Sales
//    {
//    private:
//        double sales[QUARTERS];
//        double average;
//        double max;
//        double min;
//        void calculate(int n = 4);
//    public:
//        void setSales(const double saleData[], int n = 4);
//        void setSales();
//        void showSales() const;
//        Sales();
//        ~Sales();
//    };
//}
//class Stock
//{
//private:
//    std::string company;
//    int shares;
//    double share_val;
//    double total_val;
//    inline void setTotal(){total_val = shares * share_val;}
//
//public:
//    //constructor
//    Stock();
//    Stock(std::string &company_, long share_ = 0, double share_val_ = 0.0);
//    ~Stock();//default destructor
//
//    void buy(long num, double price);
//    void sell(long num, double price);
//    void update(double price);
//    void show() const;
//    const Stock & topValue(const Stock & s) const;
//
//};
typedef int Item;
class List
{
private:
//    int MAX = 10; bad code!!
    enum { MAX = 10 };
    Item items[MAX];
    int top;
public:
    List();
    ~List();
    void addData(const Item & item);
    bool isEmpty() const;
    bool isFull() const;
    void visit(void (*fp) (Item &item));
};
#endif