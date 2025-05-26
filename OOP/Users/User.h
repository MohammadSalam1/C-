#ifndef USER_H
#define USER_H
#include <string>


class User {
public:
    std::string getName() const;
    void setName(const std::string& newName);

    int getAge() const;
    void setAge(int newAge);

private:
    std::string name;
    int age = 0;
};





#endif //USER_H
