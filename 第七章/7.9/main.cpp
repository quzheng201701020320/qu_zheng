#include <iostream>
#include <array>
using namespace std;
 const size_t rows=2;
const size_t columns =3;

int n=0;
void printArray (const array<array<int ,columns>,rows>&);


int main()
{

    array<array<int ,columns>,rows> t={1,2,3,4,5,6};

   cout<<"元素个数  "<<rows*columns<<endl;
   cout <<"一行所有元素"<<endl;
   for(size_t column=0;column<t[1].size();++column)

    {

    cout<< t[1][column]<<" ";

    }
    cout<<endl;
    cout<<"第二列"<<endl;
     for(size_t tow=0;tow<2;++tow)
{

    cout<<t[tow][1]<<" ";
    cout<<endl;
}

cout<<"1行2列设为0"<<endl;

   t[0][1]=0;
    printArray(t);
cout<<"每个元素初始化为0(不循环)"<<endl;
t[0][0]=0,t[0][1]=0,t[0][2]=0,t[1][0]=0,t[1][1]=0,t[1][2]=0;

 printArray(t);

    cout<<endl;
    cout<<"每个元素初始化为0(循环)计数器"<<endl;
    for(size_t tow=0;tow<t.size();++tow)
    {
    for(size_t column=0;column<t[tow].size();++column)
    {
        t[tow][column]=0;
    }
    }
    printArray(t);
     cout<<"每个元素初始化为0(循环)基于范围"<<endl;
      for (auto &row:t)
        {
            for (auto  &element :row)
            {
                element=0;
            }
        }
       printArray(t);
       cout<<endl;
       cout<<"用键盘输入值"<<endl;
       for (auto &row:t)
        {
            for (auto  &element :row)
            {
                cout<<"input number "<<endl;
                cin>>element;
            }
        }
        printArray(t);
        cout<<"最小值"<<endl;

     for(size_t tow=0;tow<2;++tow)
    {
    for(size_t column=0;column<3;++column)
    {
        if(t[0][0]<=t[tow][column])
        {
            t[0][0]=t[0][0];
        }
        else if(t[0][0]>t[tow][column])
        {
            t[0][0]=t[tow][column];
        }
    }

    }
         cout<<t[0][0];
        cout<<endl;
cout<<"第二列所有原素之和"<<endl;
         for(size_t m=0;m<2;++m)
    {

        n=n+t[m][1];

  }
     cout<<n;
      cout<<endl;
      cout<<"  "<<"[0],[1],[3]"<<endl;
      cout<<endl;
      for (size_t tow=0;tow<2;++tow)
        {
            cout<<"["<<tow<<"]";
            for (size_t column=0;column<3;++column)
                cout<<t[tow][column]<<"  "<<" ";
            cout <<endl;
        }

    return 0;
}
 void printArray (const array<array<int ,columns>,rows>&a)
    {
        for (auto &row:a)
        {
            for (auto const &element :row)
                cout<<element<<" ";
            cout <<endl;
        }

}
