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
//List::List()
//{
////    for(Item & i : items){i = 0;}
//    top = 0;
//}
//
//List::~List() {}
//
//bool List::isEmpty() const
//{
//    if (top == 0)return 1;
//    return 0;
//}
//
//bool List::isFull() const
//{
//    if (top == MAX)return true;
//    return false;
//}
//
//void List::addData(const Item &item)
//{
//    items[top] = item;
//    top ++;
//}
//
//void List::visit(void (*fp)(Item &))
//{
//    for (int i = 0; i < top; ++i)
//    {
//        fp(items[i]);
//    }
//}
//using std::cout;
//Time::Time()
//{
//    hours = minutes =0;
//}
//
//Time::Time(int h, int m)
//{
//    if (m>60)
//    {
//        cout<<"wrong minutes number!"<<std::endl;
//        minutes = m % 60;
//        hours = h + m/60;
//    }
//    if (m<0)
//    {
//        cout<<"wrong minutes number!"<<std::endl;
//        hours = h;
//        minutes = 0;
//    }
//    if (0<=m&&m<=60)
//    {
//        minutes = m;
//        hours = h;
//    }
//}
//
//Time::~Time() {}
//
//void Time::addMin(int minute_)
//{
//    hours += (minutes + minute_) / 60;
//    minutes = (minutes + minute_) % 60;
//}
//
//void Time::addHr(int hour_)
//{
//    hours += hour_;
//}
//
//void Time::reset(int h, int m)
//{
//    if (m>60)
//    {
//        cout<<"wrong minutes number!"<<std::endl;
//        minutes = m % 60;
//        hours = h + m/60;
//    }
//    if (m<0)
//    {
//        cout<<"wrong minutes number!"<<std::endl;
//        hours = h;
//        minutes = 0;
//    }
//    if (0<=m&&m<=60)
//    {
//        minutes = m;
//        hours = h;
//    }
//}
//
//Time Time::operator+(const Time &t) const
//{
//    Time diff;
//    int totalHour, totalMinute;
//    totalMinute = t.minutes + this->minutes;
//    totalHour = t.hours + this->hours;
//    diff.addHr(totalHour);
//    diff.addMin(totalMinute);
//    return diff;
//}
//
//Time Time::operator-(const Time &t) const
//{
//    Time diff;
//    int total1, total2;
//    total1 = this->hours * 60 + this->minutes;
//    total2 = t.hours * 60 + t.minutes;
//    diff.minutes = (total1 - total2) % 60;
//    diff.hours = (total1 - total2) / 60;
//    return diff;
//}
//
//Time Time::operator*(const double n) const
//{
//    Time temp;
//    int total1;
//    total1 = this->hours * 60 + this->minutes;
//    total1 *= n;
//    temp.minutes = total1 % 60;
//    temp.hours = total1 / 60;
//    return temp;
//}
//
//std::ostream & operator<<(std::ostream & os, const Time & t)
//{
//    os<<"hour:  "<<t.hours<<"   minute:    "<<t.minutes<<std::endl;
//    return os;
//}
//int StringBad::num_strings = 0;

//StringBad::StringBad()
//{
//    len = 0;
//    str = new char[len + 1];//与delete[]兼容!!!
//    str = nullptr;
////    num_strings++;
////    std::cout<<"num_strings:    "<<num_strings<<"   "<<std::endl;
//}
//
//StringBad::StringBad(const char *s)
//{
//    len = std::strlen(s);
//    str = new char[len + 1];
//    std::strcpy(str, s);
////    num_strings++;
////    std::cout<<"num_strings:    "<<num_strings<<"   "<<std::endl;
//}
//
//StringBad::~StringBad()
//{
//    delete [] str;
////    num_strings--;
//}
//
//std::ostream & operator<<(std::ostream & os, const StringBad & strbad)
//{
//    os << strbad.str;
//    return os;
//}
//
//StringBad::StringBad(const StringBad &st)
//{
////    num_strings++;
//    len = st.len;
//    str = new char [len + 1];
//    std::strcpy(str, st.str);
////    std::cout<<"num_strings:    "<<num_strings<<std::endl;
//}
//
//StringBad & StringBad::operator=(const StringBad &st)
//{
//    if (this == &st)return *this;
//    delete [] str;
//    len = st.len;
//    str = new char [len + 1];
//    std::strcpy(str, st.str);
//    return *this;
//}
//using std::cin;
//using std::cout;
//
//int String::num_strings = 0;
//
//int String::howMany() {return num_strings;}
//
//String::String()
//{
//    len = 0;
//    str = new char [len+1];
//    str = nullptr;
//    num_strings++;
//}
//
//String::String(const char *s)
//{
//    len = std::strlen(s);
//    str = new char [len+1];
//    std::strcpy(str, s);
//    num_strings++;
//}
//
//String::String(const String &scopy)
//{
//    len = scopy.len;
//    str = new char [len+1];
//    std::strcpy(str, scopy.str);
//    num_strings++;
//}
//
//String::~String()
//{
//    delete [] str;
//    num_strings--;
//}
//
//String & String::operator=(const String &st)
//{
//    delete [] str;
//    len = st.len;
//    str = new char [len+1];
//    std::strcpy(str, st.str);
//    return *this;
//}
//
//String & String::operator=(const char *s)
//{
//    delete [] str;
//    len = std::strlen(s);
//    str = new char [len+1];
//    std::strcpy(str, s);
//    return *this;
//}
//
//char & String::operator[](int i)
//{
//    return str[i];
//}
//
//const char & String::operator[](int i) const
//{
//    return str[i];
//}
//
//bool operator<(const String &str1, const String &str2)
//{
//    return std::strcmp(str1.str, str2.str) < 0;
//}
//
//bool operator>(const String &str1, const String &str2)
//{
//    return std::strcmp(str1.str, str2.str) > 0;
//}
//
//bool operator==(const String &str1, const String &str2)
//{
////    char temp[String::CINLIM];
//    return std::strcmp(str1.str, str2.str) == 0;
//
//}
//
//std::ostream & operator<<(std::ostream & os, const String &st)
//{
//    os << st.str;
//    return os;
//}
//
//std::istream & operator>>(std::istream & is,  String &st)
//{
//    char temp[String::CINLIM];
//    is.get(temp, String::CINLIM);
//    if (is)
//    {
//        st = temp;
//    }
//    while (is && is.get() != 0)
//        continue;
//    return is;
//}
//void Customer::setArrive(long when_arrive)
//{
//    process_time = std::rand() % 3 + 1;
//    arrive = when_arrive;
//}
//
//Queue::Queue(int q_size_) : q_size(q_size_)
//{
//    front = rear = nullptr;
//    items = 0;
//}
//
//Queue::~Queue()
//{
//    Node * temp;
//    while (front != nullptr)
//    {
//        temp = front;
//        front = front->next;
//        delete temp;
//    }
//}
//
//bool Queue::isEmpty() const
//{
//    return items == 0;
//}
//
//bool Queue::isFull() const
//{
//    return items == q_size;
//}
//
//int Queue::queueCount() const
//{
//    return items;
//}
//
//bool Queue::enQueue(const Item &item_)
//{
//    if (isFull())
//        return false;
//    Node * temp = new Node;
//    temp->item = item_;
//    temp->next = nullptr;
//    if (isEmpty())
//    {
//        rear = temp;
//        front = temp;
//    }
//    else
//    {
//        rear->next = temp;
//        rear = temp;
//    }
//    items++;
//    return true;
//}
//
//bool Queue::deQueue(Item &item_)
//{
//    if (isEmpty())
//        return false;
//    Node * temp;
//    temp = front;
//    item_ = temp->item;
//    front = front->next;
//    if (front == nullptr)
//        rear = nullptr;
//    delete temp;
//    items--;
//    return true;
//}
baseDMA::baseDMA(const char * label_, int r)
{
    label = new char [std::strlen(label_) + 1];//strlen can not  contain /0
    std::strcpy(label, label_);
    rating = r;
}

baseDMA::baseDMA(const baseDMA &rs)
{
    label = new char [std::strlen(rs.label) + 1];
    std::strcpy(label , rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA() noexcept
{
    delete [] label;
}

baseDMA & baseDMA::operator=(const baseDMA &rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char [std::strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream & operator<<(std::ostream &os, const baseDMA &rs)
{
    os << "lable:  " << rs.label << std::endl;
    os << "rating:  " << rs.rating << std::endl;
    return os;
}

lacksDMA::lacksDMA(const char *c, const char *label_, int r) : baseDMA(label_, r)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const char *c, const baseDMA &rs) : baseDMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream &os, const lacksDMA &ls)
{
    os << (const baseDMA &) ls;
    os << "Color:  " << ls.color << std::endl;
    return os;
}

hasDMA::hasDMA(const char *s, const char *label_, int r) : baseDMA(label_, r)
{
    style = new char [std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const baseDMA &rs) : baseDMA(rs)
{
    style = new char [std::strlen(s) + 1];
    std::strcpy(style , s);
}

hasDMA::hasDMA(const hasDMA &rs) : baseDMA(rs)
{
    style = new char [std::strlen(rs.style) + 1];
    std::strcpy(style , rs.style);
}

hasDMA::~hasDMA() noexcept
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA &rs)
{
    if (this == & rs)
        return *this;
    delete [] style;
    baseDMA::operator=(rs);
    style = new char [std::strlen(rs.style)];
    std::strcpy(style, rs.style);
    return *this;
}

std::ostream & operator<<(std::ostream &os, const hasDMA &hs)
{
    os << (const baseDMA &) hs;
    os << "Color:  " << hs.style << std::endl;
    return os;
}
