#include "Package.h"
#include<iostream>
#include<stdexcept>
using namespace std;
Package::Package(const string&n,const string&a,const string&c,const string&s,const string&p,double w,double o)
{
    name=n;
    address=a;
    city=c;
    state=s;
    postalcode=p;
    weight=w;
    cost=o;
}
       void Package::setName(const string&n)
       {
           name=n;
       }
        string Package:: getName()const
        {
            return name;
        }
        void Package::setAddress(const string&a)
        {
           address=a;
        }
        string Package::getAdddress()const
        {
            return address;
        }
        void Package::setCity(const string&c)
        {
            city=c;
        }
        string Package::getCity()const
        {
            return  city;
        }
        void Package:: setState(const string&s)
        {
            state=s;
        }
        string Package::getState()const
        {
            return state;
        }
        void Package::setPostalcode(const string&p)
        {
            postalcode=p;
        }
        string Package::getPostalcode()const
        {
            return postalcode;
        }
        void Package::setWeight(double w)
        {
          if(w>0.0)
            weight=w;
          else
            throw invalid_argument(" weight must be >0.0");
        }
        double Package::getWeight()const
        {
           return weight;
        }
        void Package::setCost(double o)
        {
           if(o>0.0)
           cost=o;
           else
            throw invalid_argument("cost must be>0.0");
        }
        double Package::getCost()const
        {
          return cost;
        }
        double Package::caculateCost()const
        {
            return weight*cost;
        }
        void Package::display()const
        {
             cout<<"name :"<<name<<endl<<"address :"<<address<<endl<<"city :"<<city<<endl
            <<"state :"<<state<<endl<<"postal code :"<<postalcode<<endl;
        }




