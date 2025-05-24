#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Student.h"


class Course {
public:

    Course(std::string courseName, const Student& s);

    bool isPassing() const;

    void printInfo() const;

protected:

    std::string course;
    Student student;

};



#endif //COURSE_H
