#include <iostream>

using namespace std;

int main()
{
    int num1=0,num2=0,num3=0,num4=0,i=1,num5=0;
    while(i<=10)
    {

    i=i+1;
    cout<<"input number"<<endl;
    cin>>num1;

    if(num1>num2)
    {

    num3=num1;
    }
    else
    {
    num3=num2;
     }
     num2=num1;


        if(num1<num3)
        {
            if(num1>num4)
            {
                num5=num1;

            }
            else
            {
                num5=num1;
            }
        }
    }

    cout<<"second"<<num5<<endl;

    cout <<" largest"<<num3<< endl;

    return 0;
}
