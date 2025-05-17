#include "Point.h"
#include "Point.cpp"
#include <iostream>

using namespace std;

int main(){

    Point p1 (0, 0);
    Point p2 (3, 4);

    cout << "Distance: " << p1.distance(p2) << endl;


return 0;
}
