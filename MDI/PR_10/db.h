#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql/QSqlTableModel>
#include "Student.h"
#include "Teacher.h"
#include "Logger.h"

class DBManager
{
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool insertIntoStudents(Student& student) = 0;
    virtual bool insertIntoTeachers(Teacher& teacher) = 0;
};

#endif // DBMANAGER_H
