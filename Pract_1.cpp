#include <iostream>
#include <Windows.h>
#include "Student.h"
#include "Teacher.h"
#include "Person.h"
#include "Vector.h"
#include "Vector.cpp"
using namespace std;
int Menu(void)
{
    int choice;
    cout << "���� ��'��� ������ ��������" << endl;
    cout << "1 - �������" << endl;
    cout << "2 - �������" << endl;
    cin >> choice;
    return choice;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ukr");

    Vector<int> intVector;
    for (int i = 0; i < 10; i++)
    {
        intVector.push_back(i * 9 + 1);
    }
    cout << "Vector ����� �����: " << endl;
    for (int i = 0; i < intVector.getSize(); i++)
    {
        cout << intVector[i] << " ";
    }
    cout << endl;
    cout << "Vector ����� ����� � ��������� ������� ���������: " << endl;
    intVector.pop_back();
    for (int i = 0; i < intVector.getSize(); i++)
    {
        cout << intVector[i] << " ";
    }
    cout << endl << endl;

    Vector<double> doubleVector;
    for (int i = 0; i < 8; i++)
    {
        doubleVector.push_back(i * 8.72 + 0.01);
    }
    cout << "Vector ������ �����: " << endl;
    for (int i = 0; i < doubleVector.getSize(); i++)
    {
        cout << doubleVector[i] << " ";
    }
    cout << endl;
    cout << "Vector ������ ����� � ��������� ������� ���������: " << endl;
    doubleVector.pop_back();
    for (int i = 0; i < doubleVector.getSize(); i++)
    {
        cout << doubleVector[i] << " ";
    }
    cout << endl << endl;

    Vector<string> stringVector;
    stringVector.push_back("C++");
    stringVector.push_back("is the best ");
    stringVector.push_back("programing language!");
    cout << "Vector �����: " << endl;
    for (int i = 0; i < stringVector.getSize(); i++)
    {
        cout << stringVector[i] << " ";
    }
    cout << endl;

    cout << "Vector ����� � ��������� ������� ���������: " << endl;
    stringVector.pop_back();
    for (int i = 0; i < stringVector.getSize(); i++)
    {
        cout << stringVector[i] << " ";
    }
    cout << endl << endl;

    cout << "Vector ��'���� �����: " << endl;
    Student student1;
    Student student2(1, "�������", "������", "��������", "13.12.2004", "380678541236", "������������", 1, "�-158");
    cout << "������� ���� ��� ��������: " << endl;
    cin >> student1;
    cout << endl << endl;
    Teacher teacher1;
    Teacher teacher2(2, "�������", "������", "�������������", "01.01.2001", "38097851369", "��-123", "������");
    cout << "������� ���� ��� �������: " << endl;
    cin >> teacher1;
    cout << endl << endl;
    Vector<Student*> studentVector;
    studentVector.push_back(&student1);
    studentVector.push_back(&student2);
    for (int i = 0; i < studentVector.getSize(); i++)
    {
        Student* student = studentVector[i];
        cout << "Student " << i + 1 << ": " << endl;
        cout << *student;
        cout << endl;
    }
    cout << endl << endl;

    Vector<Teacher*> teacherVector;
    teacherVector.push_back(&teacher1);
    teacherVector.push_back(&teacher2);
    for (int i = 0; i < teacherVector.getSize(); i++)
    {
        Teacher* teacher = teacherVector[i];
        cout << "Teacher " << i + 1 << ": " << endl;
        cout << *teacher;
        cout << endl;
    }
    cout << endl << endl;

    /*Person* arrayOfPeople[5];
    int rt;
    for (int i = 0; i < 5; i++) {
        rt = Menu();
        switch (rt) {
        case 1:
            arrayOfPeople[i] = new Student();
            cin >> *(Student*)arrayOfPeople[i];
            break;
        case 2:
            arrayOfPeople[i] = new Teacher();
            cin >> *(Teacher*)arrayOfPeople[i];
            break;
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << *arrayOfPeople[i];
        arrayOfPeople[i]->printData();
    }*/

    /*Student student1, student2(1, "������", "����", "�������������", "01.01.2000", "123-45-67", "����������", 2, "����� 101"), student3;
    cin >> student1;
    student3 = student1;
    cout << endl << student1 << endl << student2 << endl << student3 << endl;
    if (student1 == student2) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;
    if (student2 == student3) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;
    if (student1 == student3) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;

    Teacher teacher1, teacher2(3, "�������", "������", "��������", "09.25.1998", "123-45-67", "��-456", "����������"), teacher3;
    cin >> teacher1;
    teacher3 = teacher1;
    cout << endl << teacher1 << endl << teacher2 << endl << teacher3 << endl;
    if (teacher1 == teacher2) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;
    if (teacher2 == teacher3) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;
    if (teacher1 == teacher3) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;*/
    return 0;
}