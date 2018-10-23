#include <iostream>

using namespace std;

int main()
{
    float num1=0;
    float num2=0;
    float num3=0;
    float num4=0;
    float num5=0;
    float nb=0;
     cout<<"Enter account number or -1 to quit :" ;
    cin>>num1;
    while(num1!=-1)
    {

    cout<<"Enter account number or -1 to quit :" ;
    cin>>num1;

    cout<<"Enter beginning balance:";
    cin>>num2;
    cout<<"Enter  total charges:";
    cin>>num3;
    cout<<"Enter total credits:";
    cin>>num4;
    cout<<"Enter total limit:";
    cin>>num5;
    nb=num2+num3-num4;


    if(nb>num5)
    {


        cout<<"Account"<<num1<<endl;
        cout<<"Credit limit"<<num5<<endl;
        cout<<"balance"<<nb<<endl;
        cout<<"Cerdit Limit Exceeded."<<endl;
    }
    else
    {

        cout<<"Newbalance  is"<<nb<<endl;
    }
    }


    return 0;

}

