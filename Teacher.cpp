#include "Teacher.h"
Teacher::Teacher() {
    this->id = 0;
    this->firstName = "";
    this->lastName = "";
    this->middleName = "";
    this->phoneNumber = "";
    this->subjects = "";
    this->cycleCommission = "";
    this->birthDate = "";
};
Teacher::Teacher(int id, string firstName, string lastName, string middleName, string phoneNumber, string birthDate, string cycleCommission, string subjects)
    :id(id), firstName(firstName), lastName(lastName), middleName(middleName), phoneNumber(phoneNumber), birthDate(birthDate), cycleCommission(cycleCommission),
    subjects(subjects) {};
Teacher::Teacher(const Teacher& Teacher) {
    this->id = Teacher.id;
    this->firstName = Teacher.firstName;
    this->lastName = Teacher.lastName;
    this->middleName = Teacher.middleName;
    this->birthDate = Teacher.birthDate;
    this->phoneNumber = Teacher.phoneNumber;
    this->cycleCommission = Teacher.cycleCommission;
    this->subjects = Teacher.subjects;
}
istream& operator >> (istream& stream, Teacher& obj)
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
    cout << "������ ������� �����: ";
    stream >> obj.cycleCommission;
    cout << "������ �������� ��������: ";
    stream >> obj.subjects;

    return stream;
}
ostream& operator <<(ostream& stream, Teacher obj)
{
    stream << "ID = " << obj.id << endl;
    stream << "������� = " << obj.lastName << endl;
    stream << "��'� = " << obj.firstName << endl;
    stream << "��������� = " << obj.middleName << endl;
    stream << "���� ���������� = " << obj.birthDate << endl;
    stream << "����� �������� = " << obj.phoneNumber << endl;
    stream << "������� ����� = " << obj.cycleCommission << endl;
    stream << "�������� �������� = " << obj.subjects << endl;
    return stream;
}
bool Teacher::operator ==(const Teacher& other) const {
    return id == other.id && lastName == other.lastName && firstName == other.firstName && middleName == other.middleName && birthDate == other.birthDate &&
        phoneNumber == other.phoneNumber && cycleCommission == other.cycleCommission &&
        subjects == other.subjects;
}
Teacher::~Teacher() {};