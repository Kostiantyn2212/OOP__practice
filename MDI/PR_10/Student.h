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
    int getId()override;
    string getMiddleName() override;
    string getFirstName() override;
    string getLastName() override;
    string getBirthDate() override;
    string getPhoneNumber() override;
    string getFaculty();
    int getCourse();
    string getGroup();
    void setId(int id) override;
    void setMiddleName(std::string middleName) override;
    void setLastName(std::string lastName) override;
    void setBirthDate(std::string birthDate) override;
    void setPhoneNumber(std::string phoneNumber) override;
    void setFirstName(std::string firstName) override;
    void setFaculty(std::string faculty);
    void setCourse(int course);
    void setGroup(std::string group);
    Student();
    Student(int id, string firstname, string lastname, string middleName, string birthDate, string phoneNumber, string faculty, int course, string group);
    Student(const Student& student);
    ~Student();
};
