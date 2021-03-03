#include "iostream"
#include "fstream"
#include "cstdlib"
#include "cstring"
#include "string"
#include "sstream"
#include "ctime"
#include "cmath"
#ifndef _MYCPP_
#define _MYCPP_
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
//typedef int Item;
//class List
//{
//private:
//    int MAX = 10; bad code!!
//    enum { MAX = 10 };
//    Item items[MAX];
//    int top;
//public:
//    List();
//    ~List();
//    void addData(const Item & item);
//    bool isEmpty() const;
//    bool isFull() const;
//    void visit(void (*fp) (Item &item));
//};
//class Time
//{
//private:
//    int hours;
//    int minutes;
//public:
//    Time();
//    Time(int h, int m = 0);
//    ~Time();
//    void addMin(int minute_);
//    void addHr(int hour_);
//    void reset(int h = 0, int m = 0);
//    Time operator+(const Time & t) const;
//    Time operator-(const Time & t) const;
//    Time operator*(const double n) const;
//    friend Time operator*(const double n, const Time & t){return t*n;}
//    friend std::ostream & operator<<(std::ostream &os, const Time & t);
//};
//class String
//{
//private:
//    char * str;
//    int len;
//    static int num_strings ;
//    static const int CINLIM = 80;
//public:
//    String();
//    String(const char * s);
//    ~String();
//    String(const StringBad & st);
//    String & operator=(const StringBad & st);
//    char & operator[](int i){return str[i];}
//    const char & operator[](int i) const {return str[i];}//针对const对象的只读版本
//    friend std::ostream & operator<<(std::ostream & os, const StringBad & strbad);
//};
//class String
//{
//private:
//    char * str;
//    int len;
//    static int num_strings;
//    static const int CINLIM = 80;
//public:
//    String();
//    String(const char * s);
//    String(const String & scopy);//copy constructor
//    ~String();
//    int length() const{return len;}
//
//    String & operator=(const String & st);
//    String & operator=(const char * s);
//    char & operator[](int i);
//    const char & operator[](int i) const;
//
//    friend bool operator<(const String &str1, const String &str2);
//    friend bool operator>(const String &str1, const String &str2);
//    friend bool operator==(const String &str1, const String &str2);
//    friend std::ostream & operator<<(std::ostream & os, const String &st);
//    friend std::istream & operator>>(std::istream & is, String &st);
//
//    static int howMany();
//};
//class Customer
//{
//private:
//    long arrive;
//    int process_time;
//public:
//    Customer(){arrive = process_time = 0;}
//    void setArrive(long when_arrive);
//    long whenArrive() const {return arrive;}
//    int processTime() const {return process_time;}
//};
//
//typedef Customer Item;
//
//class Queue
//{
//private:
//    struct Node {Item item; struct Node * next;};
//    enum {Q_size = 10};
//    Node * front;
//    Node * rear;
//    int items;
//    const int q_size;
//    Queue(const Queue & q) : q_size(0) {}
//    Queue & operator=(const Queue & q) {return  *this;}
//
//public:
//    Queue(int q_size_ = Q_size);
//    ~Queue();
//    bool isEmpty() const;
//    bool isFull() const;
//    int queueCount() const;
//    bool enQueue(const Item &item_);
//    bool deQueue(Item &item_);
//};

//base class USING dynamic memory assign
class baseDMA {
private:
    char *label;
    int rating;

public:
    baseDMA(const char *label_ = "null", int r = 0);

    baseDMA(const baseDMA &rs);//copy constructor
    virtual ~baseDMA();

    baseDMA &operator=(const baseDMA &rs);

    friend std::ostream &operator<<(std::ostream &os, const baseDMA &rs);
};

class lacksDMA : public baseDMA
{
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * label_ = "null", int r = 0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
    //can use default destructor
//    ~lacksDMA(){};
};

class hasDMA : public baseDMA
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * label_ = "null", int r = 0);
    hasDMA(const char * s, const baseDMA & rs);
    hasDMA(const hasDMA & rs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif