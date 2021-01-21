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
//void setGolf(golf & golf_ , const std::string fullname_ , int handicap_)
//{
//    golf_.fullname = fullname_;
//    golf_.handicap = handicap_;
//}
//
//int setGolf(golf & golf_)
//{
//    std::cout<<"enter fullname  IF ENTER NOTHING --> QUIT"<<std::endl;
//    std::string fullname_;
//    getline(std::cin, fullname_);
//    if (fullname_.empty())return 0;
//    std::cout<<"enter handicap"<<std::endl;
//    int handicap_;
//    std::cin>>handicap_;
//    std::cin.get();
//    setGolf(golf_, fullname_, handicap_);
//    return 1;
//}
//
//void handicap(golf & golf_ , int handicap_)
//{
//    golf_.handicap = handicap_;
//}
//
//void showGolf(const golf & golf_)
//{
//    std::cout<<"    fullname  "<<golf_.fullname<<"  handicap:  "<<golf_.handicap<<std::endl;
//}
//void SALES::Sales::calculate(int n )
//{
//    double sum;
//    if (n == 1)
//    {
//       sum = average = max = min = sales[0];
//    }
//    else
//        {
//        sum = average = max = min = sales[0];
//        for (int i = 0; i < n-1; ++i)
//        {
//           max = max > sales[i+1] ? max : sales[i+1];
//           min = min < sales[i+1] ? min : sales[i+1];
//           sum += sales[i+1];
//        }
//        average = sum/n;
//        }
//}
//
//void SALES::Sales::setSales()
//{
//    std::string inputSales;
//    std::stringstream stringStream(inputSales);//流方法!!!!
//    int n = 0;
//    for (int i = 0; i < 4; ++i)
//    {
//        std::cout<<"input No."<<i+1<<" data(less than 4), or q to quit!"<<std::endl;
//        std::getline(std::cin, inputSales);
//        if (inputSales[0] == 'q')break;
//        std::stringstream stringstream(inputSales);
//        stringstream>>sales[i];
//        n++;
//    }
//    std::stringstream stringStream(inputSales);//流方法!!!!
//    int i = 0;
//    int n_temp = n;
//    while (n_temp--)
//    {
//        stringStream>>sales[i];
//        i++;
//    }
// WRONG!!!
//    do{
//        if (n == 0)
//        {
//            std::cout<<"quit...";
//            break;
//        }
//        calculate(n);
//    } while (0);
//}
//void SALES::Sales::setSales(const double *saleData, int n)
//{
//    for (int i = 0; i < n; ++i)
//    {
//        sales[i] = saleData[i];
//    }
//    calculate(n);
//}
//
//void SALES::Sales::showSales() const
//{
//    std::cout<<"    average:    "<<average<<std::endl;
//    std::cout<<"    max:    "<<max<<std::endl;
//    std::cout<<"    min:    "<<min<<std::endl;
//    for (int i = 0; i < QUARTERS; ++i)
//    {
//        std::cout<<"sales data No."<<i+1<<"     "<<sales[i]<<std::endl;
//    }
//}
//
//SALES::Sales::Sales()
//{
//    for (int i = 0; i < QUARTERS; ++i) {
//        sales[i] = 0;
//    }
//    average = 0;
//    max = 0;
//    min = 0;
//}
//
//SALES::Sales::~ Sales() {}
//Stock::Stock()
//{
//    company = "no name";
//    shares = 0;
//    share_val = 0.0;
//    total_val = 0.0;
//}
//
//Stock::Stock(std::string &company_, long share_, double share_val_)
//{
//    company = company_;
//    if (share_ < 0)
//    {
//        std::cout<<"shares can not be negative  "<<company<<"   shares set to 0"<<std::endl;
//        shares = 0;
//    } else{shares = share_;}
//    share_val = share_val_;
//    setTotal();
//}
//
//Stock::~Stock() {}
//
//void Stock::buy(long num, double price)
//{
//    if (num < 0)
//    {
//        std::cout<<"can not negative"<<std::endl;
//    }
//    else
//    {
//        shares += num;
//        share_val = price;
//        setTotal();
//    }
//}
//
//void Stock::sell(long num, double price)
//{
//    if (num < 0)std::cout<<"000";
//    else if(num > shares)std::cout<<"0000";
//    else
//    {
//        shares -= num;
//        share_val = price;
//        setTotal();
//    }
//}
//
//void Stock::update(double price)
//{
//    share_val = price;
//    setTotal();
//}
//
//void Stock::show() const
//{
//    using std::cout;
//    using std::ios_base;
//    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//    std::streamsize prec = cout.precision(3);
//
//    cout << "company:   " << company
//        << "    shares:    " << shares
//        << "    share value:    " << share_val << std::endl;
//    cout.precision(2);
//    cout << "total value:   " << total_val;
//
//    cout.setf(orig ,ios_base::floatfield);
//    cout.precision(prec);
//}
//
//const Stock & Stock::topValue(const Stock &s) const
//{
//    if (s.total_val > this->total_val)return s;
//    else return * this;
//}
List::List()
{
//    for(Item & i : items){i = 0;}
    top = 0;
}

List::~List() {}

bool List::isEmpty() const
{
    if (top == 0)return 1;
    return 0;
}

bool List::isFull() const
{
    if (top == MAX)return true;
    return false;
}

void List::addData(const Item &item)
{
    items[top] = item;
    top ++;
}

void List::visit(void (*fp)(Item &))
{
    for (int i = 0; i < top; ++i)
    {
        fp(items[i]);
    }
}