#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include<string>
#include"Package.h"

class OvernightPackage:public Package
{
     public:
        OvernightPackage(const string&,const string&,const string&,
                const string&,const string&,double=0.0,double=0.0,double=0.0);
        void setExtraCharge(double);
        double getExtraCharge()const;
        double caculateCost()const;
        void display()const;
 private:
     double  extraCharge;


};

#endif // OVERNIGHTPACKAGE_H
