#include <iostream>
#include <random>
#include<iomanip>
#include <ctime>
using namespace std;


int main()
{
    int head=0,tail=0;
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int>flip(0,1);
    for (unsigned int counter =1;counter<=100;++counter)
    {
        if(flip(engine)==1)
        {
            cout<<"Head:"<<flip(engine)<<endl;
            head=head+1;
        }
        else
        {
            cout<<"Tail:"<<flip(engine)<<endl;
            tail=tail+1;
        }

    }
    cout<<endl;
    cout<<"Head"<<"\t"<<head<<endl<<"Tail"<<"\t"<<tail<<endl;
    return 0;
}
