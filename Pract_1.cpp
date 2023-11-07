#include <iostream>
#include <Windows.h>
#include "Student.h"
#include "Teacher.h"
#include "Person.h"
#include "Vector.h"
#include "Vector.cpp"
#include <random>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;
int Menu(void)
{
    int choice;
    cout << "Який об'єкт хочете створити" << endl;
    cout << "1 - Студент" << endl;
    cout << "2 - Вчитель" << endl;
    cin >> choice;
    return choice;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ukr");

    vector<int> vector1(10);
    vector<int> vector2(10);

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int random = rand() % 100;
        if (random % 2 == 0)
        {
            random++;
        }
        vector1[i] = random;
    }

    for (auto it = vector2.begin(); it != vector2.end(); ++it) {
        int randomValue = rand() % 100;
        if (randomValue % 2 != 0) {
            randomValue++;
        }
        *it = randomValue;
    }
    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());
    vector<int> vector3(20);
    merge(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), vector3.begin());

    cout << "Vector1: ";
    for (int n : vector1) {
        cout << n << " ";
    }
    cout << endl;

    cout << "Vector2: ";
    for (int n : vector2) {
        cout << n << " ";
    }
    cout << endl;

    cout << "Vector3: ";
    for (int n : vector3) {
        cout << n << " ";
    }
    cout << endl;

    vector<Person*> fpeople;
    int choice;
    do {
        cout << "Choose object to create (1 - Student, 2 - Teacher, 3 - Exit): ";
        cin >> choice;

        Person* person = nullptr;

        switch (choice) {
        case 1:
            person = new Student();
            cin >> *(Student*)person;
            break;
        case 2:
            person = new Teacher();
            cin >> *(Teacher*)person;
            break;
        case 3:
            break;
        default:
            cout << "Wrong choise." << endl;
        }

        if (person) {
            fpeople.push_back(person);
        }
    } while (choice != 3);
    vector<Person*>speople(fpeople);


    ////
    for (int x = 0; x < fpeople.size(); x++) {
        if (dynamic_cast<Teacher*>(fpeople[x])) {
            fpeople.erase(fpeople.begin() + x);
        }
    }

    for (int x = 0; x < speople.size(); x++) {
        if (dynamic_cast<Student*>(speople[x])) {
            speople.erase(speople.begin() + x);
        }
    }


    ////

    cout << endl << "Objects of vector1: " << endl;
    for (Person* person : fpeople) {
        cout << *person;
        cout << endl;
    }
    cout << endl << "Objects of vector2:" << endl;
    for (Person* person : speople) {
        cout << *person;
    }
    cout << endl << endl;

    /*Vector<int> intVector;
    for (int i = 0; i < 10; i++)
    {
        intVector.push_back(i * 9 + 1);
    }
    cout << "Vector цілих чисел: " << endl;
    for (int i = 0; i < intVector.getSize(); i++)
    {
        cout << intVector[i] << " ";
    }
    cout << endl;
    cout << "Vector цілих чисел з видаленим останнім елементом: " << endl;
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
    cout << "Vector дійсних чисел: " << endl;
    for (int i = 0; i < doubleVector.getSize(); i++)
    {
        cout << doubleVector[i] << " ";
    }
    cout << endl;
    cout << "Vector дійсних чисел з видаленим останнім елементом: " << endl;
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
    cout << "Vector рядків: " << endl;
    for (int i = 0; i < stringVector.getSize(); i++)
    {
        cout << stringVector[i] << " ";
    }
    cout << endl;

    cout << "Vector рядків з видаленим останнім елементом: " << endl;
    stringVector.pop_back();
    for (int i = 0; i < stringVector.getSize(); i++)
    {
        cout << stringVector[i] << " ";
    }
    cout << endl << endl;

    cout << "Vector об'єктів класів: " << endl;
    Student student1;
    Student student2(1, "Чернець", "Василь", "Ігорович", "13.12.2004", "380678541236", "Математичний", 1, "М-158");
    cout << "Вводимо данні про студента: " << endl;
    cin >> student1;
    cout << endl << endl;
    Teacher teacher1;
    Teacher teacher2(2, "Зорянов", "Олексій", "Олександрович", "01.01.2001", "38097851369", "ЦК-123", "Історія");
    cout << "Вводимо данні про вчителя: " << endl;
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
    cout << endl << endl;*/

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

    /*Student student1, student2(1, "Петров", "Іван", "Олександрович", "01.01.2000", "123-45-67", "Історичний", 2, "Група 101"), student3;
    cin >> student1;
    student3 = student1;
    cout << endl << student1 << endl << student2 << endl << student3 << endl;
    if (student1 == student2) { cout << "Об'єкти рівні." << endl; }
    else cout << "Об'єкти різняться." << endl;
    if (student2 == student3) { cout << "Об'єкти рівні." << endl; }
    else cout << "Об'єкти різняться." << endl;
    if (student1 == student3) { cout << "Об'єкти рівні." << endl; }
    else cout << "Об'єкти різняться." << endl;

    Teacher teacher1, teacher2(3, "Дмитрук", "Василь", "Петрович", "09.25.1998", "123-45-67", "ЦК-456", "Математика"), teacher3;
    cin >> teacher1;
    teacher3 = teacher1;
    cout << endl << teacher1 << endl << teacher2 << endl << teacher3 << endl;
    if (teacher1 == teacher2) { cout << "Об'єкти рівні." << endl; }
    else cout << "Об'єкти різняться." << endl;
    if (teacher2 == teacher3) { cout << "Об'єкти рівні." << endl; }
    else cout << "Об'єкти різняться." << endl;
    if (teacher1 == teacher3) { cout << "Об'єкти рівні." << endl; }
    else cout << "Об'єкти різняться." << endl;*/
    return 0;
}