#include <iostream>

using namespace std;
inline double circleArea (double radius)
{
    return 3.14*radius*radius;
}

int main()
{
    double num1;
    cout<<"input  the radius of the circle";
    cin>>num1;
    cout<<"The area of the circle is "<<endl<<circleArea(num1);

    return 0;
}
