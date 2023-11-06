#include "Person.h"
Person::Person() {
    this->id = 0;
    this->firstName = "";
    this->lastName = "";
    this->middleName = "";
    this->phoneNumber = "";
    this->birthDate = "";
};
Person::Person(int id, string firstName, string lastName, string middleName, string phoneNumber, string birthDate)
    :id(id), firstName(firstName), lastName(lastName), middleName(middleName), phoneNumber(phoneNumber), birthDate(birthDate){};
Person::Person(const Person& Person) {
    this->id = Person.id;
    this->firstName = Person.firstName;
    this->lastName = Person.lastName;
    this->middleName = Person.middleName;
    this->birthDate = Person.birthDate;
    this->phoneNumber = Person.phoneNumber;
}
istream& operator >> (istream& stream, Person& obj)
{
    cout << "Введіть ID: ";
    stream >> obj.id;
    cout << "Введіть прізвище: ";
    stream >> obj.lastName;
    cout << "Введіть ім'я: ";
    stream >> obj.firstName;
    cout << "Введіть побатькові: ";
    stream >> obj.middleName;
    cout << "Введіть дату народжння: ";
    stream >> obj.birthDate;
    cout << "Введіть номер телефону: ";
    stream >> obj.phoneNumber;
    return stream;
}
ostream& operator <<(ostream& stream, Person& obj)
{
    stream << "ID = " << obj.id << endl;
    stream << "Прізвище = " << obj.lastName << endl;
    stream << "Ім'я = " << obj.firstName << endl;
    stream << "Побатькові = " << obj.middleName << endl;
    stream << "Дата народження = " << obj.birthDate << endl;
    stream << "Номер телефону = " << obj.phoneNumber << endl;
    return stream;
}
bool Person::operator ==(const Person& other) const {
    return id == other.id && lastName == other.lastName && firstName == other.firstName && middleName == other.middleName &&
        birthDate == other.birthDate && phoneNumber == other.phoneNumber;
}
Person::~Person() {};