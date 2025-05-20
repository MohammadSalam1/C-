#include <iostream>
#include "Parallelgram.h"
#include "Rectangle.h"
#include "Parallelgram.cpp"
#include "Rectangle.cpp"

using namespace std;

int main(){


    Rectangle r(2, 3);

    cout << r.area() << endl;
    cout << r.perimeter() << endl;



    return 0;

}