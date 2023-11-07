#include "Teacher.h"
Teacher::Teacher() {
    this->subjects = "";
    this->cycleCommission = "";
};
Teacher::Teacher(int id, string firstName, string lastName, string middleName, string phoneNumber, string birthDate, string cycleCommission, string subjects) 
    :Person(id, firstName, lastName, middleName, phoneNumber, birthDate), cycleCommission(cycleCommission), subjects(subjects) {};
Teacher::Teacher(const Teacher& Teacher):Person(Teacher){
    this->cycleCommission = Teacher.cycleCommission;
    this->subjects = Teacher.subjects;
}

void Teacher::printData() {
    cout << "������� ����� = " << cycleCommission << endl;
    cout << "�������� �������� = " << subjects << endl;
}

void Teacher::inputData() {
    cout << "������ ������� �����: ";
    cin >> cycleCommission;
    cout << "������ �������� ��������: ";
    cin >> subjects;
}
int Teacher::getId() { return Person::getId(); }

istream& operator >> (istream& stream, Teacher& obj)
{
    stream >> static_cast<Person&>(obj);
    cout << "������ ������� �����: ";
    stream >> obj.cycleCommission;
    cout << "������ �������� ��������: ";
    stream >> obj.subjects;

    return stream;
}
ostream& operator <<(ostream& stream, Teacher& obj)
{
    stream << static_cast<Person&>(obj);
    stream << "������� ����� = " << obj.cycleCommission << endl;
    stream << "�������� �������� = " << obj.subjects << endl;
    return stream;
}
bool Teacher::operator ==(const Teacher& other) const {
    return (Person::operator==(other)) && cycleCommission == other.cycleCommission && subjects == other.subjects;
}
Teacher::~Teacher() {};