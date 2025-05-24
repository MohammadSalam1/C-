#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine(int h, string t) : horsePower(h), type(t) {}

Car::Car(string n, int h, string t) : name(n), engine(h, t) {}

void Engine::displayInfo() const {
    std::cout << "Horse Power: " << horsePower << " and uses " << type << std::endl;

}

void Car::displayInfo() const {
    cout << "Model: " << name << endl;
    engine.displayInfo();

}


int main() {

    Car c1("Supra", 333, "Bensin");
    c1.displayInfo();


    return 0;

}