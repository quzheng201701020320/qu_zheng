#include <iostream>

using namespace std;

int main()
{
    int b=0,total=1;
    for(int i=5;i>=1;--i)
    {
        b=i;
        while(b>=1)
        {
            total=total*b;
            b=b-1;
        }
        cout<<i<<"! is"<<"\t"<<total<<endl;
        total=1;
    }

    return 0;
}
