#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned int seed=0;
    cout<<"Enter seed :";
    cin>>seed;
    srand(seed);
    int num2,num1=0;
    srand(seed);
    num2=995+rand()%6;

    cout<<" I have a number between 1and 1000"<<endl<<"Can you guss my number ?"<<endl<<"Please type your first guess."<<endl;
    cin>>num1;
    while(num1!=num2)
    {
        if(num1>num2)
   {

    cout<<" 1.Excellent !You guessed the number !"<<endl<<"Would you like to play again (y or n)?"<<
    endl<<"Too high."<<endl<<endl<<" Try again.";}
     else
        {cout<<" 1.Excellent !You guessed the number !"<<endl<<"Would you like to play again (y or n)?"<<
    endl<<"Too low ."<<endl<<endl<<"Try again."<<endl;
        }
        cout<<endl;

       cin>>num1;
    }
    if (num1==num2)
    {
        cout<<"You are right";
    }
    return 0;
}
