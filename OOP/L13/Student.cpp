#include "Student.h"
#include "Course.h"

using namespace std;

Student::Student(std::string n, int g) : name(n), grade(g){

    if(g <= 0 || g > 100){

        grade = 0;

    }

}

string Student::getName() const {
    return name;
}

int Student::getGrade() const {

    return grade;

}

bool Student::passed() const{

    return grade >= 60;

}