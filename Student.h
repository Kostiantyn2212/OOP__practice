#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Student : public Person{
private:
    string faculty;
    int course;
    string group;
public:
    void printData() override;
    void inputData() override;
    friend std::istream& operator >>(std::istream& in, Student& obj);
    friend std::ostream& operator << (std::ostream& stream, Student& obj);
    bool operator ==(const Student& other) const;
    int getId() override;
    Student();
    Student(int id, string firstname, string lastname, string middleName, string birthDate, string phoneNumber, string faculty, int course, string group);
    Student(const Student& student);
    ~Student();
};