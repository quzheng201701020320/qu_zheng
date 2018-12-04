#include <iostream>
#include<cstddef>
#include <array>
#include<iomanip>

using namespace std;

int main()
{
    array<int ,7>alphabet;
    cout<<alphabet[6]<<endl;
    array<float,5>grades;
    grades[4]=4;
    array<int,5>values;
    for(size_t i=0;i<values.size();++i)
    {
        values[i]=8;
     }
       cout<<"values"<<setw(13)<<"value"<<endl;
       for(size_t j=0;j<values.size();++j)
       {
           cout<<setw(7)<<j<<setw(13)<<values[j]<<endl;
       }

       array<float,100>temperatures ;
       float sum=0.0;
  for(size_t a=0;a<temperatures.size();++a)
  {

   sum=sum+temperatures[a];

  }
  cout<<"sum ="<<sum<<endl;
array<double,11>a={1,2.2,3,4,5,6,7,8,9,10,11};
array<double,34>b={34,33,32,31,30,29,28.8,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
for(size_t i=0;i<a.size();++i)
{
    b[i]=a[i];
}
  for(size_t j=0;j<b.size();++j)
 {

cout<<b[j]<<endl;
 }
 for( h=1;h<=99;++h)
 {
     float f=f+h+0.5;
 }
    return 0;
}
