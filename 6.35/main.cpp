#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num2,num1=0, i=0;
    unsigned int seed=0;

    cout<<"Enter seed :";
    cin>>seed;
    srand(seed);
    num2=995+rand()%6;
    cout<<" I have a number between 1and 1000"<<endl<<"Can you guss my number ?"<<endl<<"Please type your first guess."<<endl;
    cin>>num1;
    while(num1!=num2)
    {
        if(num1>num2)
   {

    cout<<" 1.Excellent !You guessed the number !"<<endl<<"Would you like to play again (y or n)?"<<
    endl<<"Too high."<<endl<<endl<<" Try again."<<endl;
    i=i+1;
    }
     else
        {cout<<" 1.Excellent !You guessed the number !"<<endl<<"Would you like to play again (y or n)?"<<
    endl<<"Too low ."<<endl<<endl<<"Try again."<<endl;
    i=i+1;
        }
        cout<<endl;

       cin>>num1;
    }

    if(i<=10)
    {
        cout<<"Ahah!You know the secret!"<<endl;
    }
    else
    {
        cout<<"You should be able to do better !"<<endl;
    }
    return 0;

}
