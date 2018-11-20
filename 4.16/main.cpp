#include <iostream>
#include<iomanip>


using namespace std;

int main()
{
    float num1=0,num2=0,num3=0;
    cout<<"Enter hour worked(-1 to end ):"<<endl;
    cin>>num1;
    while(num1!=-1)
    {

    cout<<"Enter hourly rate of the employee ($00.00):"<<endl;
    cin>>num2;

    if(num1<=40)
    {
    cout <<setprecision(2)<<fixed;num3=num2*num1;
    }
    else
    {

    num3=num2*40+(num1-40)*15;
    }

    cout<<"Salary is "<<num3;
    cout<<endl;

    cout<<"Enter hour worked(-1 to end ):"<<endl;
    cin>>num1;

    }


    return 0;
}
