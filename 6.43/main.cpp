#include <iostream>

using namespace std;

int main()
{
    int c=0 ,EoF=1;
    if ((c=cin.get())!=EoF)//EoFδ����
    {
        main ();
        cout<<c;
    }
}
