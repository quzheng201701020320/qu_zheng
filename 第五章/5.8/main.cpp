#include <iostream>

using namespace std;

int main()
{
    int b=0,i=0,a,num1=0;
    cout<<"input amount"<<endl;
    cin >>b;
    for(i=b;i>=1;--i)
    {
        cout<<"input number"<<endl;
        cin>>num1;
        if(a<num1)
        a=a;
        else
        a=num1;
    }
    cout<<"min is "<<a<<endl;
    return 0;
}
