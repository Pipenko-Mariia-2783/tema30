#include "Teacher.h"

Teacher::Teacher()
{
    hours = 0;
    cost = 0;
}

Teacher::Teacher(string name, float salary, int hours, int cost):Employee(name,salary)
{
    this->hours = hours;
    this->cost = cost;
}

void Teacher::setHours(int hours)
{
    this->hours = hours;
}

void Teacher::setCost(int cost)
{
    this->cost = cost;
}

int Teacher::getHours() const
{
    return hours;
}

int Teacher::getCost() const
{
    return cost;
}

void Teacher::show() const
{
    Employee::show();
    cout << "Hours: " << hours << endl;
    cout << "Cost: " << cost << endl;
}

float Teacher::calcSalary() const
{
    return (salary + hours * cost) * 0.83;
}
