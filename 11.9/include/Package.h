#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
using namespace std;

class Package
{
    public:
        Package(const string&,const string&,const string&,
                const string&,const string&,double=0.0,double=0.0);
        void setName(const string&);
        string getName()const;
        void setAddress(const string&);
        string getAdddress()const;
        void setCity(const string&);
        string getCity()const;
        void setState(const string&);
        string getState()const;
        void setPostalcode(const string&);
        string getPostalcode()const;
        void setWeight(double);
        double getWeight()const;
        void setCost(double);
        double getCost()const;
        double caculateCost()const;
        void display()const;

protected:
    string name;
    string address;
    string city;
    string state;
    string postalcode;
    double weight;
    double cost;
};
#endif // PACKAGE_H
