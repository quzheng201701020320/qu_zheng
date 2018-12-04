#include <iostream>

using namespace std;

int  oc(int x)
{

   cout<<oct<<x;

}

int he(int m)
{

     cout<<hex<<m;

}


int main()
{
    int num1=0;
    int x=0;
    int y=10;
    int num2=0,b=0;


    for(b=1;b<=256;++b)
 {
 num1=b;
    while (num1!=0)
    {

        x=num1%2;

        num2=num2+x*(y/10);
         num1=(num1-x)/2;
        y=y*10;
    }
        cout<<b<<"bin="<<num2<<"oct="<<oc(b)<<"hex="<<he(b)<<endl;


        num2=0;
        y=10;

 }
    return 0;
}
