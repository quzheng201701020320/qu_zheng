#include "TwoDayPackage.h"
#include<iostream>
#include<stdexcept>
using namespace std;
TwoDayPackage::TwoDayPackage(const string&n,const string&a,const string&c,
    const string&s,const string&p,double w,double o,double f)
 :Package(n,a ,c,s,p,w,o)
{
    setFlatCharge(f);
    //ctor
}
void  TwoDayPackage::setFlatCharge(double f)
{
   if(f>0.0)
    flatCharge=f;
   else
    throw invalid_argument("FlatCharge must be >0.0");
}
double  TwoDayPackage::getFlatCharge()const
{
    return flatCharge;
}

double   TwoDayPackage::caculateCost()const
{
    return  flatCharge+(weight*cost);
}
void  TwoDayPackage::display()const
{
     cout<<"name :"<<name<<endl<<"address :"<<address<<endl<<"city :"<<city<<endl
            <<"state :"<<state<<endl<<"postal code :"<<postalcode<<endl;
}












































































