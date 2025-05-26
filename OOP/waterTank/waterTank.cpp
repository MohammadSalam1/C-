#include <iostream>

using namespace std;

class waterTank{
public:
    waterTank(int cap);
    int getCapacity() const;
    int getVolume() const;
    int fill(int l);
    int use(int l);

private:
    int capacity;
    int currentVolume;

};

waterTank::waterTank(int cap){

    capacity = cap;
    currentVolume = 0;

}

int waterTank::fill(int l) {
    int space = capacity - currentVolume;
    int filled = 0;

    if (l <= space) {
        filled = l;
    } else {
        filled = space;
    }

    currentVolume += filled;
    return filled;
}

int waterTank::use(int l) {
    int used;
    if(l <= currentVolume){

        used = l;

    } else {

        used = currentVolume;
    }

    currentVolume -= used;
    return used;
}

int waterTank::getVolume() const {

    return currentVolume;

}


int waterTank::getCapacity() const {

    return capacity;

}


int main() {

    waterTank tank(1500);
    int in = tank.fill(1800);
    int out = tank.use(600);
    int content = tank.getVolume();
    cout << in << " " << out << " " << content << endl;
    // expected output: 1500 600 900

    return 0;
}