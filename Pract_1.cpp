#include <iostream>
#include <Windows.h>
#include "Student.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ukr");
    Student student1, student2(1, "Ïåòğîâ", "²âàí", "Îëåêñàíäğîâè÷", "01.01.2000", "123-45-67", "Ôàêóëüòåò", 2, "Ãğóïà 101"), student3;
    cin >> student1;
    student3 = student1;
    if (student1 == student2) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;
    if (student2 == student3) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;
    if (student1 == student3) { cout << "Îá'ºêòè ğ³âí³." << endl; }
    else cout << "Îá'ºêòè ğ³çíÿòüñÿ." << endl;
    return 0;
}