#ifndef CREATETEACHER_H
#define CREATETEACHER_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "mainwindow.h"
#include "Teacher.h"
#include "Person.h"
#include "Student.h"
#include "CreateTeacher.h"
#include "CreateStudent.h"
#include "ShowTeacher.h"
#include "ShowStudent.h"
#include "sqlite.h"
namespace Ui {
class CreateTeacher;
}

class CreateTeacher : public QDialog
{
    Q_OBJECT

public:
    explicit CreateTeacher(QWidget *parent = nullptr);
    ~CreateTeacher();

private slots:
    void on_confirmTeacherButton_clicked();

private:
    Ui::CreateTeacher *ui;
    QString id, lastName, firstName,middleName, birthDate, phoneNumber, cycleCommission, subjects;
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // CREATETEACHER_H
