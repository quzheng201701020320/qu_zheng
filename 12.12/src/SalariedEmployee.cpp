#include "SalariedEmployee.h"
#include<stdexcept>
#include<iostream>
using namespace std;


SalariedEmployee::SalariedEmployee(const string&first,const string&last,const string&ssn,double salary)
:Employ(first,last,ssn)
{
    setWeekly(salary);//ctor
}
void SalarieEmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("Weekly salary must be>=0.0");
}
double SalariedEmployee::getWeeklySalary()const
{
    return weeklySalary;
}



























