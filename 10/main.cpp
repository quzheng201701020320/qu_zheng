#include <iostream>

using namespace std;

int main()
{
    int num1=0;
    int num2=0;
    int  y=2;
    int  x=0;
    cout<<"二进制";
    cin>>num1;
    if (num1==0)
    {
        cout<<"十进制为0";
    }
      else
      {


        while (num1!=0)
      {


            x=num1%10;
            num2=num2+x*(y/2);
            num1=(num1-x)/10;
            y=y*2;
      }

    cout<<"十进制为"<<num2<<endl;
      }
    return 0;
}

