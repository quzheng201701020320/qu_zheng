#include <iostream>

using namespace std;
int num2;
int celsius ()
{

   for (int i=32;i<=212;++i)
   {
   num2=(i-32)/1.8;
   cout <<i<<"\t"<<"\t"<<num2<<endl;
   }
   return 0;
}
 int fahrenheit()
 {

     for (int i=0;i<=100;++i)
   {
   num2=i*1.8+32;
   cout <<i<<"\t"<<num2<<endl;
   }
   return 0;
 }
int main()
{
   cout<<"fahrenheit"<<"\t"<<"celsius"<<endl;
    cout <<celsius()<<endl;
    cout<<"celsius"<<"\t"<<"fahrenheit"<<endl;
    cout <<fahrenheit()<<endl;
    return 0;
}
