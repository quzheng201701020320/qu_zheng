#include <iostream>

using namespace std;

int main()
{
    int n ,num2=1;
    cout<<"input n"<<endl;
    cin>>n;
    while(n>=1)
    {
        num2=num2*n;
        n=n-1;

    }
    cout <<num2<< "!="<<num2 << endl;
    return 0;
}
