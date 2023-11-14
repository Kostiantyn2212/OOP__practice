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
    virtual int getId();
    virtual string getMiddleName();
    virtual string getFirstName();
    virtual string getLastName();
    virtual string getBirthDate();
    virtual string getPhoneNumber();
    virtual void setId(int id);
    virtual void setMiddleName(std::string middleName);
    virtual void setLastName(std::string lastName);
    virtual void setBirthDate(std::string birthDate);
    virtual void setPhoneNumber(std::string phoneNumber);
    virtual void setFirstName(std::string firstName);
    Person();
    Person(int id, string firstname, string lastname, string middleName, string birthDate, string phoneNumber);
    Person(const Person& abiturient);
    ~Person();
};
