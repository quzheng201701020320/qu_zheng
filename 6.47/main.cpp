#include <iostream>

using namespace std;

int main()
{
    float cube (float);
    float cube (float number)//û�ж��庯������
    {
        return number*number*number;
    }

    int randomNumber=srand();//û������

    float y =123.45678
    float x;//�Ķ�
    x=y;
    cout<<static_cast<float>(x)<<endl;

    double square(double number)
    {
        //�Ķ�
        return number*number;
    }
    int sum (int n)
    {
        if(0==n)
            return 0;
        else
            return n+sum(n-1);//�Ķ�
    }
    return 0;
}
