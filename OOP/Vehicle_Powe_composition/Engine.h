#ifndef ENGINE_H
#define ENGINE_H
#include <string>

class Engine {
public:
    Engine(int horsePower, std::string type);
    void displayInfo() const;

protected:
    int horsePower;
    std::string type;

};

class Car {
public:
    Car(std::string name, int horsePower, std::string type);

    void displayInfo() const;

protected:
    Engine engine;
    std::string name;
};

#endif //ENGINE_H
