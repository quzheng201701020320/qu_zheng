#include <iostream>
#include<string>

using namespace std;
int side,h=1,i=0;
string square ()
{
    while(h<=side)
    {

   string str1="*";
   for(i=1;i<=side;i=i+1)
   {
      cout<<str1;
   }
   h=h+1;
   cout<<endl;
     }
     return 0;
}

int main()
{

   cout<<" input side :"<<endl;
   cin>>side;
    cout<<square();
    return 0;
}

