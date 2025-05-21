#ifndef STUDENT_H
#define STUDENT_H
#include <string>


class Student {
public:
    Student(std::string name, int grade);

    std::string getName() const;

    std::string getName();
    int getGrade() const;
    bool passed() const;


protected:
    std::string name;
    int grade;

};



#endif //STUDENT_H