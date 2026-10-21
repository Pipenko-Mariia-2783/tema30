#include "Manager.h"

Manager::Manager()
{
    sales = 0;
    procents = 0;
}

Manager::Manager(string name, float salary, float sales, int procents) :Employee(name,salary)
{
    this->sales = sales;
    this->procents = procents;
}

void Manager::setSales(float sales)
{
    this->sales = sales;
}

void Manager::setProcent(int procents)
{
    this->procents = procents;
}

float Manager::getSales() const
{
    return sales;
}

int Manager::getProcents() const
{
    return procents;
}

void Manager::show() const
{
    Employee::show();
    cout << "Sales: " << sales << endl;
    cout << "Procents: " << procents << endl;
}

float Manager::calcSalary() const
{
    return (salary + sales * procents / 100) * 0.83;
}
