#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int num1=0, num2=0, num3=0, num4=0, num5=0,num6=0,num,roll=1;
   int main()
{
    while (roll<=6000000)
    {
        num=1+rand()%6;
        if (num==1)
         num1=num1+1;
        if (num==2)
          num2=num2+1;
        if (num==3)
        num3=num3+1;
        if (num==4)
         num4=num4+1;
        if (num==5)
         num5=num5+1;
        if (num==6)
         num6=num6+1;
         roll=roll+1;

}



    cout << "Face"<<"\t "<<"frequency"<< endl;
    cout << "1"<<"\t "<<num1<< endl;
    cout << "2"<<"\t "<<num2<< endl;
    cout << "3"<<"\t "<<num3<< endl;
    cout << "4"<<"\t "<<num4<< endl;
    cout << "5"<<"\t "<<num5<< endl;
    cout << "6"<<"\t "<<num6<< endl;

    return 0;
}
