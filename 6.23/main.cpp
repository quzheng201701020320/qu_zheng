#include <iostream>
#include<string>

void  symble();
std::string fillCharacter ();
std::string  num;

int side,h=1,i=0;

  std::string fillCharacter ()
{
    while(h<=side)
    {
    for(i=1;i<=side;i=i+1)
   {
    symble();
   }
     h=h+1;
     std::cout<<std::endl;
     }
     return 0;
}

int  main()
{

   std::cout<<" input side :"<<std::endl;
   std::cin>>side;
   std::cout<<"fillCharacter";
   std::cin >>num;
    std::cout<<fillCharacter();
    return 0;
}
void  symble()
{

    std::cout <<num;
}
