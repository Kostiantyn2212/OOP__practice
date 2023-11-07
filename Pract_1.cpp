#include <iostream>
#include <Windows.h>
#include "Student.h"
#include "Teacher.h"
#include "Person.h"
#include <random>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <map>
using namespace std;
template <typename T>
void listPrint(const list<T>& ls)
{
    for (auto it = ls.begin(); it != ls.end(); it++) {
        cout << *it << " ";
    }
    cout << endl << endl;
}

void mapInputTeacher(map<int, Person*>& map1, Teacher& person)
{
    cin >> person;
    map1[person.getId()] = &person;
    cout << endl;
}
void mapInputStudent(map<int, Person*>& map1, Student& person)
{
    cin >> person;
    map1[person.getId()] = &person;
    cout << endl;
}

void show(map<int, Person*>& map1)
{
    bool check = false;
    if (!map1.empty())
    {
        int id;
        cout << "Enter ID to see information about person: ";
        cin >> id;
        for (const auto& pair : map1)
        {
            if (id == pair.first)
            {
                int idd = pair.first;
                Person* person = pair.second;

                cout << endl << "Here is person with ID#" << idd << ":" << endl;
                cout << *person;
                check = true;
            }
        }
        if (!check)
        {
            cout << "Неможемо знайти інформацію про людину з ID = " << id << ". Будь ласка, спробуйте ще раз." << endl;
        }

    }
    else cout << "Map пустий!! Заповніть його." << endl;

}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ukr");
    srand(time(NULL));
    list<int> list1(10);
    list<int> list2(10);
    for (auto& it : list1)
    {
        int randomValue = rand() % 100;
        if (randomValue % 2 == 0)
        {
            randomValue++;
        }
        it = randomValue;
    }
    for (auto& it : list2)
    {
        int randomValue = rand() % 100;
        if (randomValue % 2 != 0)
        {
            randomValue++;
        }
        it = randomValue;
    }
    list1.sort();
    cout << "List of odd random numbers:" << endl;
    listPrint(list1);
    list2.sort();
    cout << "List of even random numbers:" << endl;
    listPrint(list2);

    list<int> list3;
    list1.merge(list2);
    list3.merge(list1);
    cout << "Merged list3:" << endl;
    listPrint(list3);

    map<int, Person*> map1;
    Teacher teacher1, teacher2;
    Student student1, student2;

    int choice;
    do {
        cout << "Menu:\n1 - Enter data on Map\n2 - Print Map\n3 - Exit\nMake choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data of teacher1: " << endl;
            mapInputTeacher(map1, teacher1);
            cout << "Enter data of teacher2: " << endl;
            mapInputTeacher(map1, teacher2);
            cout << "Enter data of student1: " << endl;
            mapInputStudent(map1, student1);
            cout << "Enter data of student2: " << endl;
            mapInputStudent(map1, student2);
            break;
        case 2:show(map1); break;
        case 3: break;
        }
    }while (choice != 3);

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