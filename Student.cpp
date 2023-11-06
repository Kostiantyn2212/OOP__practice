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
    cout << "‘акультет = " << faculty << endl;
    cout << " урс = " << course << endl;
    cout << "√рупа = " << group << endl;
}

void Student::inputData() {
    cout << "¬вед≥ть факультет: ";
    cin >> faculty;
    cout << "¬вед≥ть курс: ";
    cin >> course;
    cout << "¬вед≥ть групу: ";
    cin >> group;
}

istream& operator >> (istream& stream, Student& obj)
{
    stream >> static_cast<Person&>(obj);
    cout << "¬вед≥ть факультет: ";
    stream >> obj.faculty;
    cout << "¬вед≥ть курс: ";
    stream >> obj.course;
    cout << "¬вед≥ть групу: ";
    stream >> obj.group;

    return stream;
}
ostream& operator <<(ostream& stream, Student obj)
{
    stream << static_cast<Person&>(obj);
    stream << "‘акультет = " << obj.faculty << endl;
    stream << " урс = " << obj.course << endl;
    stream << "√рупа = " << obj.group << endl;
    return stream;
}
bool Student::operator ==(const Student& other) const {
    return(Person::operator==(other))&& faculty == other.faculty && course == other.course && group == other.group;
}
Student::~Student() {};