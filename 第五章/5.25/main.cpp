#include <iostream>

using namespace std;

int main()
{
unsigned int count;




    for (count=1;count<=10;++count)
{
if(count>=5)
        count=count+6;
    else
    cout<< count <<" ";

}
if(count>=5)
    count=count-7;

    cout<<"\nBroke out of loop at count ="<<count<<endl;

}
