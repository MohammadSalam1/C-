#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

Employee::Employee(string n, int num) : name(n), id(num) {}

Manager::Manager(string n, int num, string d) : Employee(n, num), department(d) {}

Developer::Developer(string n, int num, string l) : Employee(n, num), language(l) {}

int main(){

    Employee e("Mo", 231);
    Manager* m = new Manager("Ho", 231, "bossLevel");
    Developer* d = new Developer("Ho", 231, "c++");

    e.displayInfo();
    d->displayInfo();
    m->displayInfo();

    delete m;
    delete d;


    return 0;

}