#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;
double hypotenuse (double num1,double num2)
{
    cout<<setprecision(1)<<fixed<<endl;
    double num3;
    num3=sqrt(num1*num1+num2*num2);
    return num3;
}
int main()
{
    double num1,num2,num3,num4,num5,num6;
   cout<<setprecision(1)<<fixed<<endl;

    cout<<"������ֱ�Ǳ߳�"<<endl;
    cin>>num1>>num2>>num3>>num4>>num5>>num6;
    cout<<"������"<<"\t"<<"��1 "<<"\t"<<"��2"<<"\t"<<"б��"<<endl;
    cout<<"1"<<"\t"<<num1<<"\t"<<num2<<"\t"<<hypotenuse(num1,num2)<<endl;
    cout<<"2"<<"\t"<<num3<<"\t"<<num4<<"\t"<<hypotenuse(num3,num4)<<endl;
    cout<<"3"<<"\t"<<num5<<"\t"<<num6<<"\t"<<hypotenuse(num5,num6)<<endl;

    return 0;
}
