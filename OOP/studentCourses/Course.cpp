#include "Student.h"
#include "Course.h"

using namespace std;

Course::Course(string courseName, const Student& s): course(courseName), student(s) {}




bool Course::isPassing() const{

    return student.getGrade();
    cout << student.getName();

;

}

void Course::printInfo() const {
    cout << student.getName() << " has " << student.getGrade() << ": ";
    cout << (student.passed() ? "Passed" : "Failed") << endl;
}