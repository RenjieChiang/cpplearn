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
////}
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
<<<<<<< HEAD
=======
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
>>>>>>> win10509
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
<<<<<<< HEAD
//void outint(int n){std::cout << n << " ";}
//int main()
//{
//    std::list<int> one(5,2);
//    for (auto x : one) std::cout << x << " ";
//    std::cout << std::endl;
//    int stuff[5] = {1,2,3,4,8};
//    std::list<int> two;
//    two.insert(two.begin(), stuff, stuff + 5);
//    std::for_each(two.begin(), two.end(), outint);//在algorith头文件
//    std::cout << std::endl;
//    std::list<int> three(two);
//    three.remove(4);
//    three.insert(three.end(), stuff, stuff+4);
//    std::for_each(three.begin(), three.end(), outint);
//    std::cout << std::endl;
//    three.sort();
//    std::for_each(three.begin(), three.end(), outint);
//    std::cout << std::endl;
//    three.unique();
//    std::for_each(three.begin(), three.end(), outint);
//    std::cout << std::endl;
//    auto my_iterator = three.begin();
//    for (int i = 0; i < three.size() - 2; ++i) my_iterator ++;
//    three.splice(my_iterator, two);
//    std::for_each(three.begin(), three.end(), outint);
//    std::ostream_iterator<int,char> out(std::cout, " ");
//    return 0;
//}
//template<class T>
//class Toobig
//{
//private:
//    T cutoff;
//public:
//    explicit Toobig(const T & t) : cutoff(t){};
//    bool operator()(const T & v){return v > cutoff;}
//};
//
//void outint(int n){std::cout << n << " ";}
//
//int main()
//{
//    using std::cout;
//    using std::list;
//    using std::endl;
//    Toobig<int> int100(100);
//    int value[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
//    list<int> one = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
//    list<int> two(value, value + 10);
//    cout << "original list:" << endl;
//    std::for_each(one.begin(), one.end(), outint);
//    cout << endl;
//    two.remove_if(int100);
//    std::for_each(two.begin(), two.end(), outint);
//    return 0;
//}
void readCameraData(const std::string & filename, std::vector<std::vector<float>> & cam_pose_)
{

    std::vector<float> single_pose;//使用两维动态数组，一个用于存各个pose，一个将他们集合起来，
    std::ifstream myfile;
    std::cout<<"opening data: "<<filename<<"\n";
    myfile.open(filename,std::ios::in);
    if (!myfile.is_open())
        throw std::logic_error("Open file fail!");
    int count = 0;
    std::string temp;
    //判断数据行数
    while (std::getline(myfile,temp))
    {
        if(!temp.empty())
        {
            count++;
        }
    }
    std::cout<<"共有"<<count<<"行数据"<<std::endl;
    myfile.close();
    float num[6];
    myfile.open(filename,std::ios::in);
    for(int i = 0; i < count; i ++)
    {
        for(float & j : num)
        {
            myfile>>j;
        }
        single_pose.push_back(10*num[0]);//转变源数据cm单位为mm单位
        single_pose.push_back(10*num[1]);
        single_pose.push_back(10*num[2]);
        single_pose.push_back(num[3]);
        single_pose.push_back(num[4]);
        single_pose.push_back(num[5]);
        //数据顺序为
        // 0 1 2  3   4   5
        // x y z r_r r_p r_y
        cam_pose_.push_back(single_pose);
        single_pose.clear();
    }
}

double generalModelSin8(const double p_[][3], double x)
{
    double result;
    result =   p_[0][0] * sin(p_[0][1] * x + p_[0][2]) + p_[1][0] * sin(p_[1][1] * x + p_[1][2])
               +  p_[2][0] * sin(p_[2][1] * x + p_[2][2]) + p_[3][0] * sin(p_[3][1] * x + p_[3][2])
               +  p_[4][0] * sin(p_[4][1] * x + p_[4][2]) + p_[5][0] * sin(p_[5][1] * x + p_[5][2])
               +  p_[6][0] * sin(p_[6][1] * x + p_[6][2]) + p_[7][0] * sin(p_[7][1] * x + p_[7][2]);
    return result;
}

double linearModelPoly9(const double *p_, const double x)
{
    double result;
    result = p_[0] * pow(x,9) + p_[1] * pow(x,8) + p_[2] * pow(x,7)
             + p_[3] * pow(x,6) + p_[4] * pow(x,5) + p_[5] * pow(x,4)
             + p_[6] * pow(x,3) + p_[7] * pow(x,2) + p_[8] * x + p_[9];
    return result;
}

//计算拟合与插值后的数据
void calculate(const std::vector<std::vector<float>> & cam_pose_, std::vector<std::vector<float>> & rob_pose_)
{
    double x_poly9_p[10] = {1.611e-18, -2.188e-15, 1.241e-12, -3.799e-10, 6.792e-8, -7.219e-6, 0.0004906, -0.03177, 1.502, -8.661};
    double y_sin8_p[8][3] = {
            {4.103, 0.01957, -0.7143}, {4.271, 0.1045, 4.75}, {3, 0.03997, -0.2004},
            {2.26, 0.0601, 0.7872}, {6.961, 0.09453, 2.871}, {3.335, 0.07773, 1.978},
            {4.255, 0.1341, 0.5672}, {-0.2799, 0.1816, -3.19}
    };

    double z_sin8_p[8][3] = {
            {239, 0.5935, 0.632}, {231.7, 0.6488, -2.602}, {0.2925, 5.336, -1.145},
            {0.8814, 6.169, -2.172}, {0.8623, 8.27, 2.18}, {0.7668, 23.29, 0.675},
            {0.6744, 9.041, -2.026}, {0.546, 19.68, -2.821}
    };
//    double x_smooth[600], y_smooth[600], z_smooth[600];
    std::vector<float> temp;
    temp.reserve(6);
    for (int i = 0; i < 2 * cam_pose_.size() - 1; ++i) //因为方便插值而排除了最后一个数据
    {
        temp.push_back(linearModelPoly9(x_poly9_p, i/2.0));
        temp.push_back(generalModelSin8(y_sin8_p, i/2.0));
        temp.push_back(generalModelSin8(z_sin8_p, i/2.0));
        temp.push_back((cam_pose_[i/2][3] + cam_pose_[(i+1)/2][3])/2.0);//线性插值
        temp.push_back((cam_pose_[i/2][4] + cam_pose_[(i+1)/2][4])/2.0);
        temp.push_back((cam_pose_[i/2][5] + cam_pose_[(i+1)/2][5])/2.0);
        rob_pose_.push_back(temp);
        temp.clear();
    }
    int i = 0;
    for (const auto & f_v : rob_pose_)
    {
        std::cout << "第" << i+1 << "行  :  ";
        for (auto f : f_v) std::cout << f << "  ";
        std::cout << std::endl;
        i++;
    }

//    for (int i = 0; i < 600; ++i)
//    {
//        x_smooth[i] = linearModelPoly9(x_poly9_p, i/2.0);
//        y_smooth[i] = generalModelSin8(y_sin8_p, i/2.0);
//        z_smooth[i] = generalModelSin8(z_sin8_p, i/2.0);
//    }
}

int main()
{
    std::vector<std::vector<float>> cam_pose;
    std::vector<std::vector<float>> rob_pose;
    try {
        readCameraData("/home/tianbot/cam_Data_20210310", cam_pose);
    }
    catch (std::exception & e){
        std::cout << "open file failed!!";
    }
//    for (std::vector<float> & v_f : cam_pose)
//    {
//        for (float &f : v_f) std::cout << f << " ";
//        std::cout << std::endl;
//    }
    calculate(cam_pose, rob_pose);

}
=======
//int main()
//{
//    Tv s42;
//    Remote grey;
//    s42.show_vol();
//    grey.vol_up(s42);
//    s42.show_vol();
//    return 0;
//}
>>>>>>> win10509
