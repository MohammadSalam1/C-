#include "User.h"
#include <iostream>

using namespace std;

std::string User::getName() const {
    return name;
}

int User::getAge() const {
    return age;
}

void User::setName(const std::string& newName) {
    name = newName;
}

void User::setAge (int newAge) {
    if(newAge >= 0){

        age = newAge;
    }
}

int main() {
    User u1;
    User u2;
    u1.setName("Iron");
    u1.setAge(2);
    u2.setName("Anna");
    u2.setAge(3);
    cout << u1.getName() << " " << u1.getAge() << endl;
    cout << u2.getName() << " " << u2.getAge() << endl;
    return 0;
}