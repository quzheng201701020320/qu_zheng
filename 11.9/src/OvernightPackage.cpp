#include "OvernightPackage.h"
#include<stdexcept>
#include<iostream>
using namespace std;
OvernightPackage::OvernightPackage(const string&n,const string&a,const string&c,
    const string&s,const string&p,double w,double o,double e)
 :Package(n,a ,c,s,p,w,o)
{
    setExtraCharge(e);
    //ctor
}
void  OvernightPackage::setExtraCharge(double e)
{
   if(e>0.0)
    extraCharge=e;
   else
    throw invalid_argument("extraCharge must be >0.0");
}
double  OvernightPackage::getExtraCharge()const
{
    return extraCharge;
}

double   OvernightPackage::caculateCost()const
{
    return  weight*(cost+extraCharge);
}
void  OvernightPackage::display()const
{
    cout<<"name :"<<name<<endl<<"address :"<<address<<endl<<"city :"<<city<<endl
            <<"state :"<<state<<endl<<"postal code :"<<postalcode<<endl;

}










