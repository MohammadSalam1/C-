#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>


class Employee {
public:
    Employee(std::string name, int id);

    virtual void displayInfo() {
        std::cout << "Employee: " << name << "ID: " << id << std::endl;
    }


protected:
    std::string name;
    int id;

};

class Manager : public Employee {
public:
    Manager(std::string name, int id, std::string department);
    void displayInfo() override{
        std::cout << "Name: " << this->name << " , ID num " << this->id << " , Department " << this->department << std::endl;
    }

protected:
    std::string department;

};

class Developer : public Employee {
public:
    Developer(std::string name, int id, std::string language);
    void displayInfo() override{
        std::cout << "Name: " << this->name << " , ID num " << this->id << " , language " << this->language << std::endl;
    }

protected:
    std::string language;

};



#endif //EMPLOYEE_H
