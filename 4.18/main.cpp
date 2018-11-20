#include <iostream>

using namespace std;

int main()
{
    double num1=0,num2=0,num3=0,num4=0,i=1;
    cout<<"N"<<"\t"<<"10*N"<<"\t"<<"100*N"<<"\t"<<"1000*N"<<endl;
    while(i<=5)
    {
    i=i+1;
    num1=num1+1;
    num2=num1*10;
    num3=num2*10;
    num4=num3*10;

   cout<<num1<<"\t"<<num2<<"\t"<<num3<<"\t"<<num4<<endl;



    }

    cout<<endl;




    return 0;
}
