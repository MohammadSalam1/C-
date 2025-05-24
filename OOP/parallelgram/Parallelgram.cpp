#include "Parallelgram.h"
#include <iostream>

using namespace std;

Parallelgram::Parallelgram(double s1, double s2) : side1(s1), side2(s2) {

cout << "creating a Parallelgram with sides: " << s1 << " and " << s2 << endl;

}

double Parallelgram::perimeter() const {

    return 2 * (side1 + side2);

}