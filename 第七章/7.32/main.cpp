#include <iostream>
#include <array>
using namespace std;
array<int,5>c={4,4,6,0,8};

   int recursiveMinimum(int i,int m)
{


    if (i==m)

         return c[i];

        else if (i!=m)
      {
          if(c[i]<=c[m])
        {
        c[m]=c[i];

        }
        else if(c[i]>c[m])
        {
            c[m]=c[m];
      }
       return  recursiveMinimum( i+1, m);
        }

}

int main()
{


   cout<<recursiveMinimum(0,4);

}
