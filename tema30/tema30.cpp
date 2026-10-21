#include "Employee.h"

int main()
{
    Employee Mariia("Mariia", 100000);
    Mariia.show();
    cout << "Total salary: " << Mariia.calcSalary() << endl;
}