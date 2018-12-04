#include <iostream>
#include <iomanip>
#include <array>
#include  <random>
#include <ctime>
using namespace std;
int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int>randomInt(1,6);
    const size_t arraySize=13;
    array<unsigned int,arraySize>frequency={};


     for(unsigned int roll=1;roll<=36000;++roll)
     {
        ++frequency[randomInt(engine)+randomInt(engine)];

     }



    cout<<"Face"<<setw(13)<<"Frequency"<<endl;
    for(size_t face=2;face<13;++face)
    cout<<setw(4)<<face<<setw(13)<<frequency[face]<<endl;

    return 0;
}
