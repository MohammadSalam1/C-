#include <iostream>
#include "WaterTank.h"
#include "WaterTank.cpp"

using namespace std;


int main(){

    WaterTank tank(1500);
    int in = tank.fill(1800);
    int out = tank.use(600);
    int content = tank.getVolume();
    cout << in << " " << out << " " << content << endl;
    // 1500 600 900


    return 0;
}