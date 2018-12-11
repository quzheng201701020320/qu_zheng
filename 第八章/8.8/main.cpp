#include <iostream>

using namespace std;

int main()
{
    int size=5;
    unsigned  int values[5]={2,4,6,8,10};

    unsigned  int *vPtr;
    for(size_t i=0;i<size;++i)
    {
        cout<<values[i]<<" ";
    }
    cout<<endl;
    vPtr=values;
    vPtr=&values[0];

    for(size_t j=0;j<size;++j)
    {
    cout<<*(vPtr+j)<<" ";//e
    }
    cout<<endl;
    for(size_t k=0;k<size;++k)
    {
    cout<<*(values+k)<<" ";
    }//f
    cout<<endl;
    for(size_t m=0;m<size;++m)
    {
        cout<<vPtr[m]<<"  ";
    }
    cout<<endl;//g
    values[4];
    *(values+4);
    vPtr[4];
    *(vPtr+4);//h
    cout<<"引用的地址是1002500+3*2=1002506,这个地址存放的值是8"<<endl;
    cout<<"引用的地址是1002500这个地址存放的值是2"<<endl;

    return 0;
}
