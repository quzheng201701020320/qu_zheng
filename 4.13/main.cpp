#include <iostream>
#include <iomanip>

using namespace std;
float num1=0,num2=0, num3=0,num4=0,num5=0,num6=0;

int main()
{

    cout<<"Enter miles driven(-1 to quit ):"<< endl;
    cin>>num1;
   while (num1!=-1)
    {

    cout<<"Enter gallons used:"<<endl;
    cin>>num2;
    num3=num1/num2;
    cout<<"MPg this trip :"<<num3<<endl;
     num4=num4+num1;
    cout<<setprecision(6)<<fixed; num5=num5+num2;
    cout<<setprecision(6)<<fixed; num6=num4/num5;
    cout <<"Total Mpc£º"<<num6<<endl;
    cout<<"Enter miles driven(-1 to quit ):"<< endl;
    cin>>num1;

    }



    return 0;
}

