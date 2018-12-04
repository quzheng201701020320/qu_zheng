#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    double num1=0.0;
    array<int ,10>counts;
    for(size_t i=0;i<10;++i)
       counts[i]=0;
   cout<<"(1)  Element"<<setw(13)<<"Value"<<endl;
    for(size_t j=0 ;j<10;++j)
        cout<<setw(8)<<j<<setw(13)<<counts[j]<<endl;
     array<int ,15>bonus;
     for(size_t i=0;i<15;++i)
        bonus[i]=2+2*i;
        for(int &bonusref:bonus)
            bonusref+=1;

         cout<<"(2)  Element"<<setw(13)<<"Value"<<endl;
      for(size_t j=0 ;j<15;++j)
      cout<<setw(8)<<j<<setw(13)<<bonus[j]<<endl;
      array<double ,12>monthiyTemperature;
      for(size_t m=0;m<12;++m)
     {
         cout<<"input number"<<endl;
       cin>>num1;
       monthiyTemperature[m]=num1;}
     cout<<"(3)  Element"<<setw(13)<<"Value"<<endl;

       for(size_t j=0 ;j<12;++j)
        cout<<setw(8)<<j<<setw(13)<<monthiyTemperature[j]<<endl;
        array<int,5>bestScores={8,9,0,7,4};
          cout<<"(4)  Element"<<setw(13)<<"Value"<<endl;
        for(size_t j=0 ;j<5;++j)
        cout<<setw(8)<<j<<setw(13)<<bestScores[j]<<endl;



}
