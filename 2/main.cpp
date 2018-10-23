#include <iostream>

using namespace std;

int main()
{
    int num1=0;
    int x=0;
    int y=10;
    int num2=0;

    cout <<"input digit";
    cin>>num1;
    if (num1==0)
    {
        cout<<"二进制为0";
    }
     else
{


        while (num1!=0)
    {
        x=num1%2;

        num2=num2+x*(y/10);
         num1=(num1-x)/2;
        y=y*10;
    }
        cout <<"二进制为"<<num2<<endl;

    }

    return 0;
}
