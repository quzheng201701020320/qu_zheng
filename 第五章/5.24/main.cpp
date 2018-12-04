#include <iostream>

using namespace std;

int main()

{
    int q,o;
    cout<< "input number between 1 to 19 ( ÆæÊý£©"<<endl;
    cin>>o;
    q=(o+1)/2;
    int m=1,s=2*q-3;
    for(int b=1;b<=q;++b)
    {

        for(int e=1;e<=q+1-b;++e)
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
for(int l=q-1;l>=1;--l)
    {
     for(int c=0;c<=q-l;++c)
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
