#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Teacher : public Person {
private:
    string cycleCommission;
    string subjects;
public:
    void printData() override;
    void inputData() override;
    friend std::istream& operator >>(std::istream& in, Teacher& obj);
    friend std::ostream& operator << (std::ostream& stream, Teacher& obj);
    bool operator ==(const Teacher& other) const;
    int getId() override;
    Teacher();
    Teacher(int id, string firstname, string lastname, string middleName, string birthDate, string phoneNumber, string cycleCommision, string subjects);
    Teacher(const Teacher& abiturient);
    ~Teacher();
};