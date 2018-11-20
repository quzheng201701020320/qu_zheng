#include <iostream>

using namespace std;
void multiple();
int num1,num2;
int i=1;
int main()
{

    while(i>0)
    {

    cout<<"two number"<<endl;
    cin>>num1>>num2;
    multiple() ;
    }

}
void multiple()
{
  if(num2%num1==0)

    cout<<"Yes"<<endl;
    else

    cout<<"No"<<endl;

}
