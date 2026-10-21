#pragma once
#include "Employee.h"
class Manager :
    public Employee
{
protected:
    float sales;
    int procents;
public:
    Manager();
    Manager(string name, float salary,float sales,int procents);
    void setSales(float sales);
    void setProcent(int procents);
    float getSales()const;
    int getProcents()const;

    void show()const /*override перевіряє чи є такий елемент у батька*/;
    float calcSalary()const;
};

