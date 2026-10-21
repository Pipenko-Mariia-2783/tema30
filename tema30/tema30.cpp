#include "Employee.h"
#include "Manager.h"
#include "Teacher.h"
#include <vector>
#include <typeinfo>

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
        new Teacher("Alisa",68000,40,900) };

    for (int i = 0; i < company.size(); i++) {
        /*cout << company[i] << endl; object adress*/
        /*(*company[i]).show();*/
        company[i]->show();
        cout << "Total salary: " << company[i]->calcSalary() << endl;
        cout << endl;
    }
    cout << "--------------------------------------------------------------------------------------" << endl;
    //всім викладачам збільшити суму оплати за пару на 50 грн
    for (int i = 0; i < company.size(); i++) {
        /*cout << typeid(*company[i]).name() << endl;*/
        if (typeid(*company[i]) == typeid(Teacher)) {
            cout << company[i]->getName() << endl;
            int price = ((Teacher*)company[i])->getCost() + 50;
            ((Teacher*)company[i])->setCost(price);
            cout << "New cost: " << ((Teacher*)company[i])->getCost() << endl;
        }
    }
    
    //2 варіант
    for (int i = 0; i < company.size(); i++) {
        Teacher* obj = dynamic_cast<Teacher*>(company[i]);
        if (obj != nullptr) {
            int price = obj->getCost() + 50;
            obj->setCost(price);
            cout << "Teacher: " << obj->getName() << endl;
            cout << "New cost: " << obj->getCost() << endl;
        }
    }
}