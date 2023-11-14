#include "Student.h"
Student::Student() {
    this->faculty = "";
    this->group = "";
    this->course = 0;
};
Student::Student(int id, string firstName, string lastName, string middleName,string birthDate, string phoneNumber,  string faculty, int course, string group):Person(id, firstName, lastName, middleName, phoneNumber, birthDate), faculty(faculty), course(course), group(group) {};
Student::Student(const Student& student):Person(student){
    this->faculty = student.faculty;
    this->group = student.group;
    this->course = student.course;
}

void Student::printData() {
    cout << "Факультет = " << faculty << endl;
            cout << "Курс = " << course << endl;
                cout << "Група = " << group << endl;
}

void Student::inputData() {
    cout << "Введіть факультет: ";
    cin >> faculty;
    cout << "Введіть курс: ";
    cin >> course;
    cout << "Введіть групу: ";
    cin >> group;
}
int Student::getId() { return Person::getId(); }
string Student::getMiddleName() { return Person::getMiddleName(); }
string Student::getFirstName() { return Person:: getFirstName(); }
string Student::getLastName() { return Person:: getLastName(); }
string Student::getBirthDate() { return Person:: getBirthDate(); }
string Student::getPhoneNumber() { return Person:: getPhoneNumber(); }
string Student::getFaculty(){return faculty; }
int Student::getCourse(){return course; }
string Student::getGroup(){return group; }
istream& operator >> (istream& stream, Student& obj)
{
    stream >> static_cast<Person&>(obj);
    cout << "Введіть факультет: ";
    stream >> obj.faculty;
    cout << "Введіть курс: ";
    stream >> obj.course;
    cout << "Введіть групу: ";
    stream >> obj.group;

    return stream;
}
ostream& operator <<(ostream& stream, Student& obj)
{
    stream << static_cast<Person&>(obj);
    stream << "Факультет = " << obj.faculty << endl;
                                             stream << "Курс = " << obj.course << endl;
                  stream << "Група = " << obj.group << endl;
        return stream;
}
bool Student::operator ==(const Student& other) const {
    return(Person::operator==(other))&& faculty == other.faculty && course == other.course && group == other.group;
}
Student::~Student() {};
