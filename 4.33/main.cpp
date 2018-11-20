#include <iostream>

using namespace std;

int main()
{
    double num1=0,num2=0,num3=0,num4=0,num5=0,num6=0;
    cout<<"input number(number>0)"<<endl;
    cin>>num1>>num2>>num3;

    while(num1>0&&num2>0&&num3>0)
    {
     num4=num1*num1+num2*num2;
    num5=num1*num1+num3*num3;
    num6=num2*num2+num3*num3;
    if(num3>num1&&num3>num2)
    {

        if(num4==num3*num3)
        {cout<<"yes"<<endl;}
        else
    {
        cout<<"No"<<endl;
    }
    }

         if(num2>num1&&num2>num3)
        {   if(num5==num2*num2)
            {cout<<"Yes"<<endl;}
            else
            {
                cout<<"No"<<endl;
            }
        }

            if(num1==num2+num3)
            {
                if(num6==num1*num1)
                {cout<<"Yes"<<endl;}
                 else
            {
                cout<<"No"<<endl;
            }
            }


     cout<<"input number"<<endl;
    cin>>num1>>num2>>num3;
    }

    return 0;
}
