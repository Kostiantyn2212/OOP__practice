#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlTableModel>
#include <QVariantList>

#include <db.h>

#define DATABASE_HOSTNAME "example"
#define DATABASE_NAME "newdb.sqlite"

#define TABLE_STUDENTS "Students"
#define TABLE_TEACHERS "Teachers"
#define TABLE_ID "ID"
#define TABLE_LAST_NAME "lastName"
#define TABLE_FIRST_NAME "firstName"
#define TABLE_MIDDLE_NAME "middleName"
#define TABLE_BIRTH_DATE "birthDate"
#define TABLE_PHONE_NUM "phoneNumber"
#define TABLE_COMMISSION "cycleCommission"
#define TABLE_SUBJETCS "subjects"
#define TABLE_FACULTY "faculty"
#define TABLE_COURSE "course"
#define TABLE_GROUP "group"

class SqliteDBManager : public DBManager {

public:
    static SqliteDBManager* getInstance();
    void connectToDataBase();
    QSqlDatabase getDB();
    bool insertIntoStudents(Student& student);
    bool insertIntoTeachers(Teacher& teacher);
private:
    bool openDataBase();
    bool restoreDataBase();
    QSqlDatabase db;
    static SqliteDBManager* instance;
    SqliteDBManager();
    void closeDataBase();
    bool createTables();
};



#endif // DATABASE_H
