#include <iostream>

using namespace std;

int main()
{
    int num1=0,num2=0,num3=0,num4=0,num5=0,num6=0;
    cout<<"input number";
    cin>>num1;
    while(num1>0)
    {


    num2=num1%10;
    num3=(num1-num2)/10%10;
    num4=(num1-num2-10*num3)/100%10;
    num5=(num1-num2-10*num3-num4*100)/1000%10;
    num6=(num1-num2-10*num3-num4*100-num5*1000)/10000;
    if(num2==num6)


     {
        if(num3==num5)
        {
            cout<<"yes"<<endl;
        }
        else
        {
           cout<<"No"<<endl;
        }
    }
   else
    {
        cout<<"No"<<endl;
    }


    cout<<"input number";
    cin>>num1;

}
    return 0;
}
