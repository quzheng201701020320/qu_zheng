#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    double b,a=-1.0;
    double c;

    for(int i=0;i<=999;++i)
    {

        b=2*i+1;
        c=c+pow(a,i)*(4/b);
        cout<<"¦Ð="<<c;
        cout<<endl;

        }


    return 0;
}
