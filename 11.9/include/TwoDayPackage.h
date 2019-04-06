#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
using namespace std;
#include<string>
#include"Package.h"
class TwoDayPackage:public Package
{
    public:
        TwoDayPackage(const string&,const string&,const string&,
                const string&,const string&,double=0.0,double=0.0,double=0.0);
        void setFlatCharge(double);
        double getFlatCharge()const;
        double caculateCost()const;
        void display()const;
 private:
     double flatCharge;


};

#endif // TWODAYPACKAGE_H
