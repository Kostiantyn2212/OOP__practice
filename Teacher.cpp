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
    cout << "Введіть циклову комісію: ";
    stream >> obj.cycleCommission;
    cout << "Введіть навчальні предмети: ";
    stream >> obj.subjects;

    return stream;
}
ostream& operator <<(ostream& stream, Teacher obj)
{
    stream << "ID = " << obj.id << endl;
    stream << "Прізвище = " << obj.lastName << endl;
    stream << "Ім'я = " << obj.firstName << endl;
    stream << "Побатькові = " << obj.middleName << endl;
    stream << "Дата народження = " << obj.birthDate << endl;
    stream << "Номер телефону = " << obj.phoneNumber << endl;
    stream << "Циклова комісія = " << obj.cycleCommission << endl;
    stream << "Навчальні предмети = " << obj.subjects << endl;
    return stream;
}
bool Teacher::operator ==(const Teacher& other) const {
    return id == other.id && lastName == other.lastName && firstName == other.firstName && middleName == other.middleName && birthDate == other.birthDate &&
        phoneNumber == other.phoneNumber && cycleCommission == other.cycleCommission &&
        subjects == other.subjects;
}
Teacher::~Teacher() {};