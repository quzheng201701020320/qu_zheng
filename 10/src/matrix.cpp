#include "matrix.h"
using namespace std;

matrix::matrix()
{
   for(int i=0;i<2;i++)
   {
       for(int j=0;j<3;j++)
       {
           a[i][j]=0;
       }
   }
}

istream&operator>>(istream&cc,matrix&c)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cc>>c.a[i][j];
        }
    }
    return cc;
}
matrix matrix::operator+(matrix&c)

    matrix c1;
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<3:j++)

    }
    c1.a[i][j]=a[i][j]+c.a[i][j];
    }
    }
    reyurn c1;
    }
    ostream&operator<<(ostream&out,matrix&c)
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3:j++)
            {
                cout<<c.a[i][j]<<" ";
            }
        }
        return out;
    }




