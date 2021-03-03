#include  "mycpp.h"
//const int LIMIT = 5;
//const int length = 10;
//int main()
//{
//    std::ofstream fout;
//    const char * fn = "ep-data.txt";
//    fout.open(fn);
//    if (!fout.is_open())
//    {
//        std::cout<<"can`t open file!!"<<std::endl;
//        exit(EXIT_FAILURE);
//    }
//    double objective;
//    std::cout<<"enter the focal length of your""telescope objective in mm:";
//    std::cin>>objective;
//    double eps[LIMIT];
//    std::cout<<"enter focal lengths in mm "<<LIMIT<<"eyepieces:"<<std::endl;
//    for (size_t i = 0; i < LIMIT; i++)
//    {
//        std::cout<<"eyepieces #"<<i +1<<":";
//        std::cin>>eps[i];
//    }
//    file_it(fout, objective, eps, LIMIT);
//    file_it(std::cout, objective, eps, LIMIT);
//    std::cout<<"done!"<<std::endl;
//    const std::string no_1 = "Cast Peter";
//    int handicapNo_1 = 10 ;
//    golf golfNo_1;
//    setGolf(golfNo_1, no_1, handicapNo_1);
//    showGolf(golfNo_1);
//    golf golfMy[length];
//    for (int i = 0; i < length; i++)
//    {
//        if(!setGolf(golfMy[i]))break;
//    }
//    SALES::Sales Peter;
//    SALES::Sales Tom;
//    double saleData[4] = {15.2, 15, 15.9, 20.8};
//    Peter.setSales(saleData, 4);
//    Peter.showSales();
//    Tom.setSales();
//    Tom.showSales();
//    using std::cout;
//    using std::endl;
//    Time aida(3, 35);
//    Time tosca(2, 48);
//    Time temp;
//
//    cout<<"aida and tosca :\n"<<aida<<"     "<<tosca<<endl;
//    temp = aida + tosca;
//    cout << temp << "+" << endl;
//    temp = aida - tosca;
//    cout << temp << "-" <<endl;
//    temp = aida * 3;
//    cout << temp << "*3" << endl;
//    temp = 4 * aida;
//    cout << "4*" << temp << endl;
//
//    StringBad botton("botton");
//    StringBad cooc("cooc");
//    StringBad dell = cooc;
//    dell = botton;
//    cooc[2] = 'k';
//    std::cout<<cooc;
//    const StringBad ege("ege");
//    std::cout<<ege[2];
//    return 0;
//const int MIN_PER_HR = 60;
//
//bool newCustomer(double x);
//
//int main()
//{
//    using std::cin;
//    using std::cout;
//    using std::endl;
//
//    std::srand(std::time(0));//rand()initial
//
//    cout << "enter maximum size of queue:   " << endl;
//    int q_size;
//    cin >> q_size;
//    Queue line(q_size);
//    cout << "enter hours:   " << endl;
//    int hours;
//    cin >> hours;
//    long cycle_limit = MIN_PER_HR * hours;
//
//    cout << "average customers per hour:" << endl;
//    double per_hour;
//    cin >> per_hour;
//    double min_per_customer;
//    min_per_customer = MIN_PER_HR / per_hour;
//
//    Item temp;
//    long turnaways = 0;
//    long customers = 0;
//    long served = 0;
//    long sum_line = 0;
//    int wait_time = 0;
//    long line_wait = 0;
//
//    for (int i = 0; i < cycle_limit; ++i)
//    {
//        if (newCustomer(min_per_customer))
//        {
//            if (line.isFull())
//                turnaways++;
//            else
//            {
//                customers++;
//                temp.setArrive(i);
//                line.enQueue(temp);
//            }
//        }
//        if (wait_time > 0)
//            wait_time--;
//        if (wait_time <= 0 && !line.isEmpty())
//        {
//            line.deQueue(temp);
//            wait_time = temp.processTime();
//            line_wait += i - temp.whenArrive();
//            served++;
//            cout << line.queueCount() <<endl;
//        }
//        sum_line += line.queueCount();
//
//    }
//
//    if (customers > 0)
//    {
//        cout << "customers accepted:  " << customers << endl;
//        cout << "served:    " << served << endl;
//        cout << "turnaways:     " << turnaways <<endl;
//        cout << "average queue size:    ";
//        cout.precision(2);
//        cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
//        cout << (double ) sum_line / cycle_limit << endl;
//        cout << "average wait time:     " << (double) line_wait / served << endl;
//    }
//    else
//        cout << "none customer";
//    cout << "done";
//    return 0;
//}
//
//bool newCustomer(double x)
//{
//    return ((std::rand() * x / RAND_MAX) < 1 );
//}
//int main()
//{
//    int A[3][3] = { {3, 2, 8}, {1, 7, 5}, {4, 6, 9} };
//    int B[3][3] = { {2, 3, 6}, {6, 1, 9}, {8, 4, 7} };
//    int C[3][3];
//    std::cout.width(5);
//    for (int i = 0; i < 3; ++i)
//    {
//        for (int j = 0; j < 3; ++j)
//        {
//            C[i][j] = A[i][j] + B[i][j];
//            std::cout.width(5);
//            std::cout << C[i][j] ;
//        }
//        std::cout << std::endl;
//    }
//    return 0;
//}
//int main()
//{
//    std::cout << "Enter one integer:    " << std::endl;
//    int first;
//    std::cin >> first;
//    while (first <= 0)
//    {
//        std::cout << "number is not greater than 0, please re-input!" << std::endl;
//        std::cin >> first;
//    }
//    std::cout << "first number check!\n" << "Please input second number, and it should be less than first one."<<std::endl;
//    int second;
//    std::cin >> second;
//    while (second <= 0 || second > first )
//    {
//        std::cout << "wrong input, please re-input!" << std::endl;
//        std::cin >> second;
//    }
//    if (!(first % second))
//    {
//        std::cout << "fir can be divisible by sec";
//    } else std::cout << "fir can not be divisible by sec";
//    return 0;
//}
//int main()
//{
//    std::string my_string;
//    std::cout << "Enter a string:   " << std::endl;
//    std::cin >> my_string;
//    std::cin.get();
//    char change;
//    std::cout << "Enter character to change:   " << std::endl;
//    std::cin >> change;
//    std::cin.get();
//    char change_to;
//    std::cout << "Enter character to change to:   " << std::endl;
//    std::cin >> change_to;
//    int i = 0;
//    while (my_string[i] != '\0')
//    {
//        if (my_string[i] == change )
//            my_string[i] = change_to;
//        i++;
//    }
//    std::cout << my_string;
//    return 0;
//}
//class point_3D
//{
//private:
//    double x;
//    double y;
//    double z;
//public:
//    point_3D(double x_ = 0.0, double y_ = 0.0, double z_ = 0.0);
//    ~point_3D();
//    double distance(const point_3D & another_point_) const;
//};
//point_3D::point_3D(double x_, double y_, double z_) {x = x_;y = y_;z=z_;}
//point_3D::~point_3D() {}
//double point_3D::distance(const point_3D &another_point_) const
//{
//    double d;
//    d = pow((x - another_point_.x), 2)
//            + pow((y - another_point_.y), 2)
//            + pow((z - another_point_.z), 2);
//    return sqrt(d);
//}
//int main()
//{
//    point_3D point1;
//    point_3D point2(2.5, 3.5, 9);
//    double distance;
//    distance = point1.distance(point2);
//    std::cout << distance;
//    return 0;
//
//}
//using std::cout;
//using std::cin;
//using std::endl;
//class teleDirectory
//{
//private:
//    struct person
//    {
//        std::string first_name;
//        std::string surname;
//        std::string telephone_number;
//    };
//    enum {MAX_SIZE = 50};
//    const int size;
//    person * persons;
//public:
//    explicit teleDirectory(int size_ = MAX_SIZE);
//    ~teleDirectory();
//    void readData();
//    void showData(std::ostream & os = cout) const;
//    bool writeData(const std::string & filepath);
//    void search() const;
//};
//
//teleDirectory::teleDirectory(int size_) : size(size_)
//{
//    persons = new person [size];
//}
//
//teleDirectory::~teleDirectory()
//{
//    delete [] persons;
//}
//
//void teleDirectory::readData()
//{
//    int i = 0;
//    for(;i < size;i++)
//    {
//        cout << "Enter No." << i+1 << "person:  (enter # to quit)" << endl;
//        cout << "       first name:" <<endl;
//        cin >> persons[i].first_name;
//        if (persons[i].first_name[0] == '#')
//            break;
//        cout << "       surname:" <<endl;
//        cin >> persons[i].surname;
//        if (persons[i].surname[0] == '#')
//            break;
//        cout << "       TeleNumber:" <<endl;
//        cin >> persons[i].telephone_number;
//        if (persons[i].telephone_number[0] == '#')
//            break;
//    }
//    if (i == size)
//        cout << "enough!";
//    cout << "Have entered "<<i<<" data"<<endl;
//}
//
//void teleDirectory::showData (std::ostream &os) const
//{
//    for (int i = 0; i < size; ++i)
//    {
//        os << "No." << i+1 <<"    name:    " << persons[i].first_name
//            << " " <<persons[i].surname << endl;
//        os << "TEL:   " << persons[i].telephone_number << endl;
//    }
//}
//
//bool teleDirectory::writeData(const std::string & filepath)
//{
//    std::ofstream my_ofs(filepath, std::ios_base::ate);//open file at end of it
//    if (!my_ofs.is_open())
//        return false;
//    showData(my_ofs);
//    my_ofs.close();
//    return true;
//}
//
//void teleDirectory::search() const
//{
//    for (int i = 0; i < 10; ++i)
//    {
//        cout << "begin search   enter surname(# to quit):" << endl;
//        std::string search_name;
//        cin >> search_name;
//        if (search_name[0] == '#')break;
//        for (int j = 0; j < size; ++j)
//        {
//            if (search_name == persons[j].surname)
//            {
//                cout << "name :" << persons[j].first_name << " " << persons[j].surname<<endl;
//                cout << "TEL:   " << persons[j].telephone_number << endl;
//            }
//        }
//        cout << "again? # to quit" << endl;
//    }
//}
//
//int main()
//{
//    cout << "number of people:" << endl;
//    int number;
//    cin >> number;
//    teleDirectory my_directory(number);
//    my_directory.readData();
//    my_directory.showData();
//    if(my_directory.writeData("/home/tianbot/my_cpp_learn/mydata.txt"))
//        cout << "success!" << endl;
//    my_directory.search();
//    return 0;
//}
int main()
{
    Tv s42;
    Remote grey;
    s42.show_vol();
    grey.vol_up(s42);
    s42.show_vol();
    return 0;
}