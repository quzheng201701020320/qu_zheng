#include <iostream>
#include <cmath>
using namespace std;
int mystery(int, int);
int main()
{
    int x=0;
    int y=0;

    cout<<"Enter two integer :";
    cin>>x>>y;
    if(y>=0)
    cout<<"The result is "<<mystery(x,y)<<endl;
    if(y<0)
    cout<<"The result is "<<-mystery(x,y)<<endl;
}

    int mystery (int a,int b)
    {  b=fabs(b);


        if (1==b)

            return a;

        else

         return a+mystery(a,b-1);

 }
