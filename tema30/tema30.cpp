#include "Employee.h"
#include "Manager.h"
#include "Teacher.h"
#include <vector>

int main()
{
    Employee Mariia("Mariia", 100000);
    /*Mariia.show();
    cout << "Total salary: " << Mariia.calcSalary() << endl;*/

    Manager Kamilla("Kamilla", 180000, 9999, 50);
    /*Kamilla.show();
    cout << "Total salary: " << Kamilla.calcSalary() << endl;*/

    Teacher Sofia("Sofia", 3500, 72, 700);
    /*Sofia.show();
    cout << "Total salary: " << Sofia.calcSalary() << endl;*/

    vector<Employee*>company = { 
        &Mariia,
        &Kamilla,
        &Sofia,
        new Manager("Vasya",25000,350,40),
        new Teacher("Alisa",68000,40,700) };

    for (int i = 0; i < company.size(); i++) {
        /*cout << company[i] << endl; object adress*/
        /*(*company[i]).show();*/
        company[i]->show();
        cout << "Total salary: " << company[i]->calcSalary() << endl;
        cout << endl;
    }
    
}