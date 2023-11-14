#ifndef CREATESTUDENT_H
#define CREATESTUDENT_H

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
namespace Ui {
class CreateStudent;
}

class CreateStudent : public QDialog
{
    Q_OBJECT

public:
    explicit CreateStudent(QWidget *parent = nullptr);
    ~CreateStudent();
signals:
    void studentCreated(Student*);

private slots:
    void on_confirmStudentButton_clicked();

private:
    Ui::CreateStudent *ui;
    Student* newStudent;
    QLineEdit *idLe, *lastNameLe, *firstNameLe, *middleNameLe, *birthDateLe, *phoneNumberLe, *facultyLe, *courseLe, *groupLe;
    QString id, lastName, firstName,middleName, birthDate, phoneNumber, faculty, course, group;
    bool checkFields();
};
#endif // CREATESTUDENT_H
