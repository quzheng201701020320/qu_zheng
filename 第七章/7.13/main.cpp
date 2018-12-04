#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int ,20>a;
    array<int ,20>c;
    int num1=10,num=0;


   for(int i=0;i<20;++i)
   {


   if(num1>=10&&num1<=100)
      {

      cout<<"input number (10-100)"<<endl;

       cin>>num1;

       c[i]=num1;


      }
      else
        break;

   }
   num1=0;
  for(int j=0;j<20;++j)
  {
     for(int i=20;j<i;i--)
     {
         if( c[i]> c[i-1])
        {
        num1=c[i];
        c[i] =c[i-1];
            c[i-1]=num1;
        }
     }
  }
  num1=0;

   a[0]= c[0];
  for (int i=1;i<20;++i)
  {
    if( a[num]!= c[i])
      {
    a[num+1]= c[i];
    num++;
    }
  }
  for(int i=0;i<num+1;i++)
  {
      cout<< a[i]<<endl;
  }
    return 0;
}


