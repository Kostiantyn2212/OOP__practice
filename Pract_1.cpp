#include <iostream>
#include <Windows.h>
#include "Student.h"
#include "Teacher.h"
#include "Person.h"
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
    Person* arrayOfPeople[5];
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
    }

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