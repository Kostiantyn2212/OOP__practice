#include "Teacher.h"
Teacher::Teacher() {
    this->subjects = "";
    this->cycleCommission = "";
}
Teacher::Teacher(int id, string firstName, string lastName, string middleName, string phoneNumber, string birthDate, string cycleCommission, string subjects)
    :Person(id, firstName, lastName, middleName, phoneNumber, birthDate), cycleCommission(cycleCommission), subjects(subjects) {}
Teacher::Teacher(const Teacher& Teacher):Person(Teacher){
    this->cycleCommission = Teacher.cycleCommission;
    this->subjects = Teacher.subjects;
}

void Teacher::printData() {
    cout << "Циклова комісія = " << cycleCommission << endl;
            cout << "Навчальні предмети = " << subjects << endl;
}

void Teacher::inputData() {
    cout << "Введіть циклову комісію: ";
    cin >> cycleCommission;
    cout << "Введіть навчальні предмети: ";
    cin >> subjects;
}
int Teacher::getId() { return Person::getId(); }
string Teacher::getMiddleName() { return Person::getMiddleName(); }
string Teacher::getFirstName() { return Person:: getFirstName(); }
string Teacher::getLastName() { return Person:: getLastName(); }
string Teacher::getBirthDate() { return Person:: getBirthDate(); }
string Teacher::getPhoneNumber() { return Person:: getPhoneNumber(); }
string Teacher::getCycleCommission(){return cycleCommission; }
string Teacher::getSubjects(){return subjects; }

void Teacher::setId(int id) {
    Person::setId(id);
}

void Teacher::setMiddleName(std::string middleName) {
    Person::setMiddleName(middleName);
}

void Teacher::setLastName(std::string lastName) {
    Person::setLastName(lastName);
}

void Teacher::setBirthDate(std::string birthDate) {
    Person::setBirthDate(birthDate);
}

void Teacher::setPhoneNumber(std::string phoneNumber) {
    Person::setPhoneNumber(phoneNumber);
}

void Teacher::setFirstName(std::string firstName) {
    Person::setFirstName(firstName);
}

void Teacher::setCycleCommission(std::string cycleCommission) {
    this->cycleCommission = cycleCommission;
}

void Teacher::setSubjects(std::string subjects) {
    this->subjects = subjects;
}
istream& operator >> (istream& stream, Teacher& obj)
{
    stream >> static_cast<Person&>(obj);
    cout << "Введіть циклову комісію: ";
    stream >> obj.cycleCommission;
    cout << "Введіть навчальні предмети: ";
    stream >> obj.subjects;

    return stream;
}
ostream& operator <<(ostream& stream, Teacher& obj)
{
    stream << static_cast<Person&>(obj);
    stream << "Циклова комісія = " << obj.cycleCommission << endl;
                                                        stream << "Навчальні предмети = " << obj.subjects << endl;
                                                          return stream;
}
bool Teacher::operator ==(const Teacher& other) const {
    return (Person::operator==(other)) && cycleCommission == other.cycleCommission && subjects == other.subjects;
}
Teacher::~Teacher() {}
