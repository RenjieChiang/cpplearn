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
int main()
{
    std::cout << "Enter one integer:    " << std::endl;
    int first;
    std::cin >> first;
    while (first <= 0)
    {
        std::cout << "number is not greater than 0, please re-input!" << std::endl;
        std::cin >> first;
    }
    std::cout << "first number check!\n" << "Please input second number, and it should be less than first one."<<std::endl;
    int second;
    std::cin >> second;
    while (second <= 0 || second > first )
    {
        std::cout << "wrong input, please re-input!" << std::endl;
        std::cin >> second;
    }
    if (!(first % second))
    {
        std::cout << "fir can be divisible by sec";
    } else std::cout << "fir can not be divisible by sec";
    return 0;
}