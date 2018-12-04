#include <iostream>

using namespace std;

int main()
{
    int i=0,b=0,num1=0,total=0;
    cout<<"input amount"<<endl;
    cin>>b;
    for(i=b;i>=1;--i)
    {
        cout <<"input number"<<endl;
        cin>>num1;
        total=total+num1;
    }
    cout<<"total is"<<total;
    return 0;
}
