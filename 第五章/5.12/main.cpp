#include <iostream>


using namespace std;

int main()
{

    for(int b=1;b<=10;++b)
    {
    for(int i=1;i<=b;++i)
    {
        cout<<"*";

    }

    cout<<endl;

    }
    cout<<endl;
    for(int m=10;m>=1;--m)
    {
    for(int n=m;n>=1;--n)
    {
        cout<<"*";

    }

    cout<<endl;

    }
    cout<<endl;
  for(int m=10;m>=1;--m)
    {
     for(int c=0;c<=9-m;++c)
     {
         cout<<" ";
     }
    for(int n=m;n>=1;--n)
    {
        cout<<"*";

    }

    cout<<endl;

    }
    cout<<endl;
     for(int b=1;b<=10;++b)
    {
        for(int e=1;e<=10-b;++e)
        {
            cout<<" ";
        }
    for(int i=1;i<=b;++i)
    {
        cout<<"*";

    }

    cout<<endl;

    }

    return 0;
}
