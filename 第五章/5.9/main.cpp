#include <iostream>

using namespace std;

int main()
{
    int total=1;
    for(int i=15;i>=1;i--)
    {
       if(i%2!=0)
        total=total*i;
    }
    cout<<"1��15�����ĳ˻���"<<total;
    return 0;
}
