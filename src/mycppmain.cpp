#include  "mycpp.h"
const int LIMIT = 5;
int main()
{
    std::ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        std::cout<<"can`t open file!!"<<std::endl;
        exit(EXIT_FAILURE);
    }
    double objective;
    std::cout<<"enter the focal length of your""telescope objective in mm:";
    std::cin>>objective;
    double eps[LIMIT];
    std::cout<<"enter focal lengths in mm "<<LIMIT<<"eyepieces:"<<std::endl;
    for (size_t i = 0; i < LIMIT; i++)
    {
        std::cout<<"eyepieces #"<<i +1<<":";
        std::cin>>eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(std::cout, objective, eps, LIMIT);
    std::cout<<"done!"<<std::endl;
    return 0;
}