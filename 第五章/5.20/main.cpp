#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int side1=0,side2=0,hypotenuse=0;

    for( side1=1;side1<=500;++side1)
    {
        for( side2=1;side2<=500;++side2)
        {

            for( hypotenuse=1;hypotenuse<=500;++hypotenuse)
            {

            if(hypotenuse==sqrt(side1*side1+side2*side2))
            cout<<"side1 is"<<"\t"<<side1<<"\t"<<"side2 is"<<"\t"<<side2<<"\t"<<"hypotenuse is"<<"\t"<<hypotenuse<<endl;
            }
        }

    }

    return 0;
}
