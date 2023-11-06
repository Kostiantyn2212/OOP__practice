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
Student::Student(int id, string firstName, string lastName, string middleName, string phoneNumber, string birthDate, string group, int course, string faculty) 
    :id(id), firstName(firstName), lastName(lastName), middleName(middleName), phoneNumber(phoneNumber), birthDate(birthDate), faculty(faculty), course(course), group(group) {};
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
    cout << "������ ���������: ";
    stream >> obj.faculty;
    cout << "������ ����: ";
    stream >> obj.course;
    cout << "������ �����: ";
    stream >> obj.group;

    return stream;
}
ostream& operator <<(ostream& stream, Student obj)
{
    stream << "ID = " << obj.id << endl;
    stream << "������� = " << obj.lastName << endl;
    stream << "��'� = " << obj.firstName << endl;
    stream << "��������� = " << obj.middleName << endl;
    stream << "���� ���������� = " << obj.birthDate << endl;
    stream << "����� �������� = " << obj.phoneNumber << endl;
    stream << "��������� = " << obj.faculty << endl;
    stream << "���� = " << obj.course << endl;
    stream << "����� = " << obj.group << endl;
    return stream;
}
bool Student::operator ==(const Student& other) const {
    return id == other.id && lastName == other.lastName && firstName == other.firstName && middleName == other.middleName && birthDate == other.birthDate &&
        phoneNumber == other.phoneNumber && faculty == other.faculty &&
        course == other.course && group == other.group;
}
Student::~Student() {};