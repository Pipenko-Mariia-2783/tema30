#include "Employee.h"
#include "Manager.h"

int main()
{
    Employee Mariia("Mariia", 100000);
    Mariia.show();
    cout << "Total salary: " << Mariia.calcSalary() << endl;

    Manager Kamilla("Kamilla", 180000, 9999, 50);
    Kamilla.show();
    cout << "Total salary: " << Kamilla.calcSalary() << endl;
}