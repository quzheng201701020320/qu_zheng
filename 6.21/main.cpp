#include <iostream>
#include<string>

using namespace std;

int num1;
  string  iseven(int num1)
{
   string str1="truth";
   string  str2="false";
    if(num1%2==0)
     return str1;
     else
    return str2;
}
int main()
{
    int i=1;
    while(i>0)
    {
        cout<<"input number"<<endl;
        cin>>num1;
        cout<<iseven(num1)<<endl;
    }

}


