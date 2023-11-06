#include <iostream>
#include <Windows.h>
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ukr");
    Student student1, student2(1, "Ïåòğîâ", "²âàí", "Îëåêñàíäğîâè÷", "01.01.2000", "123-45-67", "²ñòîğè÷íèé", 2, "Ãğóïà 101"), student3;
    cin >> student1;
    student3 = student1;
    cout << endl << student1 << endl << student2 << endl << student3 << endl;
    if (student1 == student2) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;
    if (student2 == student3) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;
    if (student1 == student3) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;

    Teacher teacher1, teacher2(3, "Äìèòğóê", "Âàñèëü", "Ïåòğîâè÷", "09.25.1998", "123-45-67", "ÖÊ-456", "Ìàòåìàòèêà"), teacher3;
    cin >> teacher1;
    teacher3 = teacher1;
    cout << endl << teacher1 << endl << teacher2 << endl << teacher3 << endl;
    if (teacher1 == teacher2) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;
    if (teacher2 == teacher3) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;
    if (teacher1 == teacher3) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;
    return 0;
}