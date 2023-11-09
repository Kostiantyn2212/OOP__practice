#include "Student.h"
Student::Student() {
    this->id = 0;
    this->firstName = "";
    this->lastName = "";
    this->middleName = "";
    this->phoneNumber = "";
    this->group = "";
    this->faculty = "";
    this->birthDate = "";
    this->course = 0;
};
Student::Student(int id, string firstName, string lastName, string middleName,  string birthDate, string phoneNumber, string group, int course, string faculty)
    :id(id), firstName(firstName), lastName(lastName), middleName(middleName),  birthDate(birthDate),phoneNumber(phoneNumber), faculty(faculty), course(course), group(group) {};
Student::Student(const Student& Student) {
    this->id = Student.id;
    this->firstName = Student.firstName;
    this->lastName = Student.lastName;
    this->middleName = Student.middleName;
    this->birthDate = Student.birthDate;
    this->phoneNumber = Student.phoneNumber;
    this->faculty = Student.faculty;
    this->group = Student.group;
    this->course = Student.course;
}
istream& operator >> (istream& stream, Student& obj)
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
    cout << "Введіть факультет: ";
    stream >> obj.faculty;
    cout << "Введіть курс: ";
    stream >> obj.course;
    cout << "Введіть групу: ";
    stream >> obj.group;

    return stream;
}
ostream& operator <<(ostream& stream, Student obj)
{
    stream << "ID = " << obj.id << endl;
    stream << "Прізвище = " << obj.lastName << endl;
    stream << "Ім'я = " << obj.firstName << endl;
    stream << "Побатькові = " << obj.middleName << endl;
    stream << "Дата народження = " << obj.birthDate << endl;
    stream << "Номер телефону = " << obj.phoneNumber << endl;
    stream << "Факультет = " << obj.faculty << endl;
    stream << "Курс = " << obj.course << endl;
    stream << "Група = " << obj.group << endl;
    return stream;
}
bool Student::operator ==(const Student& other) const {
    return id == other.id && lastName == other.lastName && firstName == other.firstName && middleName == other.middleName && birthDate == other.birthDate &&
           phoneNumber == other.phoneNumber && faculty == other.faculty &&
           course == other.course && group == other.group;
}
Student::~Student() {};
string Student::toString()
{
    return string("\n ID: ") + to_string(id) + string("\n Last name: ") + lastName + string("\n First name: ") + firstName + string("\n Middle name: ") + middleName + string("\n Birth date: ") + birthDate + string("\n Phone number: ") + phoneNumber + string("\n Faculty: ") + faculty + string("\n Course: ") + to_string(course) + string("\n Group: ") + group ;
}
