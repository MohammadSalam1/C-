#include <iostream>
#include <string>
#include "Course.cpp"
#include "Course.h"
#include "Student.h"
#include "Student.cpp"


using namespace std;

int main() {

    Student s("Mo", 66);
    Course cour("Math", s);
    cour.printInfo();



    return 0;
}