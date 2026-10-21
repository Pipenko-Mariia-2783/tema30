#pragma once
#include "Employee.h"
class Manager :
    public Employee
{
protected:
    float sales;
    int procent;
public:
    Manager();
    Manager(string name, float salary,float sales,int procent);
    void setSales(float sales);
    void setProcent(int procent);
    float getSales()const;
    int getProcents()const;

    void show()const;
    float calcsalary()const;
};

