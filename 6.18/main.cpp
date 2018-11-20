#include <iostream>

using namespace std;
int integerPower(int base ,int exponent)
{
    int i,num1=1;

    for(i=1;i<=exponent;++i)
    {
    num1=num1*base;

    }
    return num1;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout << "integerPower("<<a<<","<<b<<")="<<integerPower(a,b)<<endl;
    return 0;
}
