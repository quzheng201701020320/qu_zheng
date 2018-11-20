#include <iostream>

using namespace std;

int main()
{
    float cube (float);
    float cube (float number)//没有定义函数类型
    {
        return number*number*number;
    }

    int randomNumber=srand();//没有声明

    float y =123.45678
    float x;//改动
    x=y;
    cout<<static_cast<float>(x)<<endl;

    double square(double number)
    {
        //改动
        return number*number;
    }
    int sum (int n)
    {
        if(0==n)
            return 0;
        else
            return n+sum(n-1);//改动
    }
    return 0;
}
