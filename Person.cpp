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
    cout << "������ ID: ";
    stream >> obj.id;
    cout << "������ �������: ";
    stream >> obj.lastName;
    cout << "������ ��'�: ";
    stream >> obj.firstName;
    cout << "������ ���������: ";
    stream >> obj.middleName;
    cout << "������ ���� ���������: ";
    stream >> obj.birthDate;
    cout << "������ ����� ��������: ";
    stream >> obj.phoneNumber;
    return stream;
}
ostream& operator <<(ostream& stream, Person& obj)
{
    stream << "ID = " << obj.id << endl;
    stream << "������� = " << obj.lastName << endl;
    stream << "��'� = " << obj.firstName << endl;
    stream << "��������� = " << obj.middleName << endl;
    stream << "���� ���������� = " << obj.birthDate << endl;
    stream << "����� �������� = " << obj.phoneNumber << endl;
    return stream;
}
bool Person::operator ==(const Person& other) const {
    return id == other.id && lastName == other.lastName && firstName == other.firstName && middleName == other.middleName &&
        birthDate == other.birthDate && phoneNumber == other.phoneNumber;
}
Person::~Person() {};