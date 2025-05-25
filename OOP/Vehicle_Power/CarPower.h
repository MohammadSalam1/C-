#ifndef CARPOWER_H
#define CARPOWER_H
#include <string>


class CarPower {
public:
    CarPower(int horsePower, std::string type);
    void displaySpecs() const;


protected:
    int horsePower;
    std::string type;
};



#endif //CARPOWER_H
