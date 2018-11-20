#include <iostream>

using namespace std;

int power (int base,int exponent)
{
   if(exponent>1)
    return base*power(base,exponent-1);
}
int main()
{

    int num1,num2;

    cout<<"base"<<"\t"<<"exponent"<<endl;
    cin>>num1>>num2;

    cout<<"power"<<"("<<num1<<","<<num2<<")="<<power(num1,num2);
    return 0;
}
