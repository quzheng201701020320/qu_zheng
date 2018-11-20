#include <iostream>
void fall ();

using namespace std;

int num1,y,x;


int main()
{
    cout<<"input number";
    cin>>num1;
    fall();
    return 0;
}
void fall ()
{


 while (num1!=0)
      {

           if(num1>=10)
           {

            x=num1%10;

            num1=(num1-x)/10;
            y=y*10;

           }
           else
           {
            x=num1;
            num1=(num1-x)/10;
           }
           cout<<x;

      }
}
