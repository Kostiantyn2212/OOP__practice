#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    int id;
    string firstName;
    string lastName;
    string middleName;
    string birthDate;
    string phoneNumber;
public:
    virtual void printData() = 0;
    virtual void inputData() = 0;
    friend std::istream& operator >>(std::istream& in, Person& obj);
    friend std::ostream& operator << (std::ostream& stream, Person& obj);
    bool operator ==(const Person& other) const;
    Person();
    Person(int id, string firstname, string lastname, string middleName, string birthDate, string phoneNumber);
    Person(const Person& abiturient);
    ~Person();
};