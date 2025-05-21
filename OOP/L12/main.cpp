#include <iostream>
#include "Student.h"
#include "Student.cpp"
#include <string>

using namespace std;

int main(){


    Student s("Mo", 68);

    cout << s.getName() << endl;
    cout << s.getGrade() << endl;
    cout << s.passed() << endl;


    return 0;

}