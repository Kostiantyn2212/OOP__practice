#include "sqlite.h"
#include "Logger.h"
#include <QObject>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager(){

}

SqliteDBManager* SqliteDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new SqliteDBManager();
    }
    return instance;
}

void SqliteDBManager::connectToDataBase()
{
        if (QFile(DATABASE_NAME).exists()) {
            if (!this->openDataBase()) {
            }
        } else {
            if (!this->restoreDataBase()) {
            }
        }
}

QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

bool SqliteDBManager::restoreDataBase()
{
        if (this->openDataBase()) {
            if (!this->createTables()) {
                return false;
            } else {
                return true;
            }
        }
}

bool SqliteDBManager::openDataBase()
{
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setHostName(DATABASE_HOSTNAME);
        db.setDatabaseName(DATABASE_NAME);

        if (db.open()) {
            return true;
        }
}

void SqliteDBManager::closeDataBase()
{
    db.close();
}

bool SqliteDBManager::createTables()
{
    QSqlQuery query;
    bool b = true;
    if(!query.exec( "CREATE TABLE " TABLE_STUDENTS"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_MIDDLE_NAME " TEXT NOT NULL,"
                    TABLE_FIRST_NAME " TEXT NOT NULL,"
                    TABLE_LAST_NAME " TEXT NOT NULL,"
                    TABLE_BIRTH_DATE " TEXT NOT NULL,"
                    TABLE_PHONE_NUM " TEXT NOT NULL,"
                    TABLE_FACULTY " TEXT NOT NULL,"
                    TABLE_COURSE " INT NOT NULL,"
                    TABLE_GROUP " TEXT NOT NULL"
                    " )"
                    )){
        b = false;
    }
    if(!query.exec( "CREATE TABLE " TABLE_TEACHERS"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_MIDDLE_NAME " TEXT NOT NULL,"
                    TABLE_FIRST_NAME " TEXT NOT NULL,"
                    TABLE_LAST_NAME " TEXT NOT NULL,"
                    TABLE_BIRTH_DATE " TEXT NOT NULL,"
                    TABLE_PHONE_NUM " TEXT NOT NULL,"
                    TABLE_COMMISSION " TEXT NOT NULL,"
                    TABLE_SUBJETCS " TEXT NOT NULL"
                    " )"
                    )){
        b = false;
    }
        return b;
}

bool SqliteDBManager::insertIntoStudents(Student& student)
{
        try{
        QSqlQuery query;
        query.prepare("INSERT INTO " TABLE_STUDENTS " ("
                      TABLE_ID ", "
                      TABLE_MIDDLE_NAME ", "
                      TABLE_FIRST_NAME ", "
                      TABLE_LAST_NAME ", "
                      TABLE_BIRTH_DATE ", "
                      TABLE_PHONE_NUM ", "
                      TABLE_FACULTY ", "
                      TABLE_COURSE ", "
                      TABLE_GROUP ") "
                      "VALUES(:ID, :middleName, :firstName, :lastName, :birthDate, :phoneNumber, :faculty, :course, :group)");
        query.bindValue(":ID", student.getId());
        query.bindValue(":middleName", QString::fromStdString(student.getMiddleName()));
        query.bindValue(":firstName",QString::fromStdString(student.getFirstName()));
        query.bindValue(":lastName", QString::fromStdString(student.getLastName()));
        query.bindValue(":birthDate", QString::fromStdString(student.getBirthDate()));
        query.bindValue(":phoneNumber", QString::fromStdString(student.getPhoneNumber()));
        query.bindValue(":faculty", QString::fromStdString(student.getFaculty()));
        query.bindValue(":course", student.getCourse());
        query.bindValue(":group", QString::fromStdString(student.getGroup()));

        if (!query.exec()) {
        qDebug() << "Error in insert to Students table: ";
        throw std::runtime_error("Error in insert to Students table");
        } else return true;
        }catch(const std::exception &e){
        qWarning()<<"Exception in inserting: "<<e.what();
        return false;
        }
}

bool SqliteDBManager::insertIntoTeachers(Teacher& teacher)
{
        try{
    QSqlQuery query;
        query.prepare("INSERT INTO " TABLE_TEACHERS " ("
                      TABLE_ID ", "
                      TABLE_MIDDLE_NAME ", "
                      TABLE_FIRST_NAME ", "
                      TABLE_LAST_NAME ", "
                      TABLE_BIRTH_DATE ", "
                      TABLE_PHONE_NUM ", "
                      TABLE_COMMISSION ", "
                      TABLE_SUBJETCS ") "
                      "VALUES(:ID, :middleName, :firstName, :lastName, :birthDate, :phoneNumber, :cycleCommission, :subjects)");
        query.bindValue(":ID", teacher.getId());
        query.bindValue(":middleName", QString::fromStdString(teacher.getMiddleName()));
        query.bindValue(":firstName",QString::fromStdString(teacher.getFirstName()));
        query.bindValue(":lastName", QString::fromStdString(teacher.getLastName()));
        query.bindValue(":birthDate", QString::fromStdString(teacher.getBirthDate()));
        query.bindValue(":phoneNumber", QString::fromStdString(teacher.getPhoneNumber()));
        query.bindValue(":cycleCommission", QString::fromStdString(teacher.getCycleCommission()));
        query.bindValue(":subjects", QString::fromStdString(teacher.getSubjects()));


        if (!query.exec()) {
        qDebug() << "Error in insert to Teachers table: ";
        throw std::runtime_error("Error in insert to Teachers table");
        } else return true;
        }catch(const std::exception &e){
        qWarning()<<"Exception in inserting: "<<e.what();
        return false;
        }

}

