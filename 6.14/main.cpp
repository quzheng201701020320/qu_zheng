#include <iostream>
#include<cmath>


using namespace std;
double  roundToInteger( double number)
{
    double x;
    double y;
    x=number;
    y=floor(x+0.5);
    return y;
}
double  roundToTenths ( double number)
{
     double x;
      double y;
      x=number;
      y=floor(x*10+0.5)/10;
      return y;
}
double   roundToHunderedths(double number)
{
     double x;
       double y;
       x=number;
       y=floor(x*100+0.5)/100;
       return y;
}
double   roundToThousandths(double number)
{
     double x;
       double y;
      x=number;
       y=floor(x*1000+0.5)/1000;
       return y;
}
int main()
{
   int i=1;
    while (i>0)
    {
        double num1;
        cin >>num1;

        cout<<"original"<<num1<<endl;
        cout<<"roundToInteger"<<roundToInteger(num1)<<endl;
       cout<< "roundToTenths"<<roundToTenths(num1)<<endl;
       cout<<"roundToHunderedths"<<roundToHunderedths(num1)<<endl;
       cout<<"roundToThousandths"<<roundToThousandths(num1)<<endl;
    }

    return 0;
}
