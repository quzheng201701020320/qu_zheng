#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;
 double calculateCharges(double x)
    {
      cout<<setprecision(2)<<fixed;
        double result;
         x=ceil(x);
        if(x<=3)
        result=2;
        else
        result=(x-3)*0.5+2;
        if(x>=10)
        result=10;
        return result;

    }
double number(double i,double num1,double num2,double num3)
   {
      cout<<setprecision(2)<<fixed;
       double a;

       if(i==1)
       a=num1;
       if(i==2)
        a=num2;

       if(i==3)
        a=num3;
      return a;
   }
int main()
{
cout<<setprecision(2)<<fixed;
    double num1=0,num2=0,num3=0,total=0,total2=0;
    cin>>num1>>num2>>num3;


    cout<<"car"<<"\t"  <<"Hours"<<"\t"<<"Charge"<<endl;


     for(unsigned int i=1;i<=3;++i)
     {

    cout<< i<<"\t"<<number( i, num1, num2, num3)<<"\t"<<calculateCharges(  number(i, num1, num2,num3))<<endl;
    total2=total2+calculateCharges(  number(i, num1, num2,num3));
}
     total=num1+num2+num3;


     cout<<"total"<<"\t"<<total<<"\t"<<total2<<endl;


    return 0;
}
