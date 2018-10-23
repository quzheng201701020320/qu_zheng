#include <iostream>

using namespace std;

int main()
{
float num1=0;
float num2=0;
float num3=0;
 cout<<"Enter sales in dollars(-1 to  end)";
 cin >>num1;
 while (num1!=-1)
 {
     cout<<"Enter sals in dollars(-1 to end)";
     cin >>num1;

     num3=200;
     num2=num3+num1*0.09;
     cout<<"Salary is "<<num2;
 }



    return 0;
}
