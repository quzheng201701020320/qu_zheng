#include <iostream>

using namespace std;

int main()
{
    long int value1=2000;
  long  int value2;
    long *longPtr;
    longPtr=&value1;
    cout<<"The value of *longPtr is"<<*longPtr;
    value2=*longPtr;
    cout<<endl;
    cout<<"The value of value2 is "<<value2;
    cout<<endl;
    cout<<"The address of value1 is"<<&value1;
    cout<<endl;
    cout<<"The address stored in longPtr is "<<longPtr;



    return 0;
}
