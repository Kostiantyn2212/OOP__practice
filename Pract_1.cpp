#include <iostream>
#include <Windows.h>
#include "Student.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ukr");
    Student student1, student2(1, "������", "����", "�������������", "01.01.2000", "123-45-67", "���������", 2, "����� 101"), student3;
    cin >> student1;
    student3 = student1;
    if (student1 == student2) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;
    if (student2 == student3) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;
    if (student1 == student3) { cout << "��'���� ���." << endl; }
    else cout << "��'���� ��������." << endl;
    return 0;
}