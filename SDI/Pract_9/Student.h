#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int id;
    string firstName;
    string lastName;
    string middleName;
    string birthDate;
    string phoneNumber;
    string faculty;
    int course;
    string group;
public:
    friend std::istream& operator >>(std::istream& in, Student& obj);
    friend std::ostream& operator << (std::ostream& stream, Student obj);
    bool operator ==(const Student& other) const;
    Student();
    Student(int id, string firstname, string lastname, string middleName, string birthDate, string phoneNumber, string faculty, int course, string group);
    Student(const Student& abiturient);
    ~Student();
    string toString();
};
