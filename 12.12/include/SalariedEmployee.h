#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include <string>
using namespace std;
class SalariedEmployee :public Employee
{
    public:
        SalariedEmployee(const string&,const string&,const string&,double=0.0);
        virtual ~SalariedEmployee(){};
  void setWeeeklySalary(double)
  double get weeklySalary()const;
  virtual double earnings()const override;
  virtual void print()const override;
    private:
        double weeklySalary;
};

#endif // SALARIEDEMPLOYEE_H
