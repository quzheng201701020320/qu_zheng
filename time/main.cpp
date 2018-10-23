#include <iostream>

using namespace std;

int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    int num5=0;
    int num6=0;
    int num7=0;
    int num8=0;
    int num9=0;
    int num10=0;
    int num11=0;
    int num12=0;
    cout<<"input time";
    cin>>num1>>num2>>num3>>num4>>num5>>num6;
    cout <<num1<<"year"<<num2<<"month"<<num3<<"day"<<num4<<"hour"<<num5<<"minute"<<num6<<"second";

    cout <<"input change time";
    cin >>num7>>num8>>num9>>num10>>num11>>num12;
    num6=num6+num12;
    num5=num5+num11;
    num4=num4+num10;
    num3=num3+num9;
    num2=num2+num8;
    num1=num1+num7;
    if (num6<=60)
    {
        num6=num6;
    }
    else
       {

        num6=num6-60;
        num5=num5+1;
       }
    if (num5<=60)
    {
        num5=num5;
    }
    else
    {
        num5=num5-60;
        num4=num4+1;
    }
    if (num4<=24)
    {

     num4=num4;
    }
    else
    {

        num4=num4-24;
       num3=num3+1;
    }
    if (num2=1,3,5,7,8,10,12,num3<=31)
    {

        num3=num3;
       num2=num2;
    }
    if (num2=1,3,5,7,9,10,12,num3>31)
    {num2=num2+1;
    num3=num3-31;}
    if(num2=4,6,9,num3<=30)
        {
            num2=num2+1;
            num3=num3-30;
        }

        if(num2=2,num1%4!=0,num3<=29)
           {

           num2=num2;}
        if (num2=2,num1%4!=0,num3>29)
            {
                num2=num2+1;
                num3=num3-29;
             }

        if(num2<=12)
           {

            num1=num1;}
        else
            {
                num1=num1+1;
            }

      if(num2=2,num1%4==0,num3<=28)
        {
            num2=num2;
        }
        if (num2=2,num1%4==0,num3>28)
        {
            num2=num2+1;
            num3=num3-28;
        }

     cout<<num1<<"year"<<num2<<"month"<<num3<<"day"<<num4<<"hour"<<num5<<"minute"<<num6<<"second";







    return 0;
}
