#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int b;
    double m=0;

    cout<<"input b"<<endl;
    cin>>b;
    while(b>=1)
    {
   //cout<<setprecision(6)<<fixed;

     int num2=1;
     int n;
    for(n=b;n>=1;n--)

    {
        num2=num2*n;
    }

        b=b-1;
       m=m+(1/num2);

    }

    cout <<"e="<<m<< endl;

}
