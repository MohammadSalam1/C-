#ifndef WATER_TANK_WATERTANK_H
#define WATER_TANK_WATERTANK_H


class WaterTank {
public:

    // tankCap is short of tank capacity
    WaterTank(int tankCap);

    // how much of the tank is to be filled
    // using liters as unit
    // returns how much water was filled in the tank
    int fill(int liter);

    // how much has been used
    // subtract the whole amount from the used amount
    // returns how much water has been used NOT how much left
    int use(int liter);

    // returns how much is currently in the tank
    int getVolume() const;


private:

    // how much water can the tank hold
    int capacity;

    // how much water is currently is in the tank
    int volume;

};


#endif //WATER_TANK_WATERTANK_H