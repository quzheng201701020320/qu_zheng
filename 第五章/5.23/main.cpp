#include <iostream>

using namespace std;

int main()
{
    int m=1,s=7;
    for(int b=1;b<=5;++b)
    {

        for(int e=1;e<=6-b;++e)
        {
            cout<<" ";
        }

    for(int i=1;i<=m;++i)
    {
        cout<<"*";

    }

    cout<<endl;
m=m+2;
    }
for(int l=4;l>=1;--l)
    {
     for(int c=0;c<=5-l;++c)
     {
         cout<<" ";
     }
    for(int n=s;n>=1;--n)
    {
        cout<<"*";


    }
s=s-2;
    cout<<endl;

    }

    return 0;
}
