#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int ,1000>t;
    for(int i=0;i<1000;++i)
    {
        t[i]=1;
    }

   for(int j=2;j<1000;j=j+1)
   {
       if(t[j]==1)
       {
           for(int m=j+j;m<1000;m=m+j)
           {
               t[m]=0;
           }
       }
   }
   for(int h=2;h<1000;++h)
    if(t[h]==1)
    cout <<h<<endl;

    return 0;
}
