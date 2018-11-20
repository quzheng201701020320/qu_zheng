#include <iostream>

using namespace std;

int main()
{
    int num1=0,num2=0,num3=0,i=0;

    while(i<=10)
    {
    cout<<"inpt  quantity of sale :"<<endl;
    cin>>num1;


       if(num1<=num2)
       {
        num3=num2;
       }
       else
       {
        num3=num1;
       }

        num2=num3;
        i= i+1;
    }
    cout<<"largrst:"<<num3<<endl;

    return 0;
}
