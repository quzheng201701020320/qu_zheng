#include <iostream>
#include<cmath>
using namespace std;
double x1=0,x2=0,y1=0,y2=0,y3=0,x3=0;
double distance()
{

    double z1;
    x3=x2-x1;
    y3=y2-y1;
    z1=sqrt(x3*x3+y3*y3);
    return z1;
}

int main()
{

    cout<<"coordinate:"<<endl;
    cin>>x1>>y1>>x2>>y2;
    cout<<distance();
    return 0;
}
