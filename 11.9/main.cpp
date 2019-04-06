#include <iostream>
#include<iomanip>
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
#include "Package.h"
using namespace std;

int main()
{
    Package  sender("Bob","36 hao","NewYork","NewYork","344" ,2.0,50.1);
    Package   recipient("Tom","36 hao","NewYork","NewYork","344" ,2.0,50.1);
    TwoDayPackage  sender1("Bob","36 hao","NewYork","NewYork","344" ,2.0,50.1,34.0);
    TwoDayPackage   recipient1("Tom","36 hao","NewYork","NewYork","344" ,2.0,50.1,34.0);
    OvernightPackage  sender2("Bob","36 hao","NewYork","NewYork","344" ,2.0,50.1,4.0);
    OvernightPackage   recipient2("Tom","36 hao","NewYork","NewYork","344" ,2.0,50.1,4.0);
    cout<<fixed<<setprecision(2);
    cout<<"The weight is :"<<sender.getWeight()<<endl;
    cout<<"The  Cost based on weight :"<<sender.caculateCost()<<endl;
    cout<<"A charge  adds  a flat charge:"<<sender1.caculateCost()<<endl;
    cout<<"A charge  adds  an  extra charge  :"<<sender2.caculateCost()<<endl;

    cout<<"The sender's information:"<<endl;
    sender.display();
    cout<<"The  recipient's information :"<<endl;
    recipient.display();





}
