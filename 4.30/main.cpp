#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double num1=0,num2=0,num3=0,num4=3.14159,num5=0;
    cout<<"input radius of a circle:"<<endl;
    cin>>num1;
    num2=2*num1;
    cout<<setprecision(5)<<fixed;num3=num4*num2;
    cout<<setprecision(5)<<fixed;num5=num4*num1*num1;

    cout << "diameter"<<num2<< endl;
    cout<<"perimeter"<<num3<<endl;
    cout<<"acreage"<<num5<<endl;
    return 0;
}
