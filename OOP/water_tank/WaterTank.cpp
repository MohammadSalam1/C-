#include "WaterTank.h"

WaterTank::WaterTank(int tankCap) : volume(0) {

    capacity = tankCap;
}

int WaterTank::fill(int liter) {

    if (volume + liter <= capacity) {

        volume += liter;

        return liter;
    } else {

        int filledVolume = capacity - volume;

        volume = capacity;

        return filledVolume;
    }
}

int WaterTank::use(int liter) {

    if (liter <= volume) {

        volume -= liter;

        return liter;
    } else {

        int used = volume;

        volume = 0;

        return used;
    }
}

int WaterTank::getVolume() const {

    return volume;
}