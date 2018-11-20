#include <iostream>
#include <iomanip>
using namespace std;

double num1,num2,num3,num4,num5;
double minnum ()
{
    cout<<setprecision(2)<<fixed;
    if (num1<num2)
    num3=num1;
    else
    num3=num2;
    if(num3<num4)
    num5=num3;
    else
    num5=num4;

     return num5;

}
int main()
{
    cout<<setprecision(2)<<fixed;
    cout<<" input three  number"<<endl;
    cin >>num1>>num2>>num4;
     cout<<endl;
    cout << "min number:"<<minnum() << endl;
    return 0;
}
