#ifndef SHOWSTUDENT_H
#define SHOWSTUDENT_H

#include <QDialog>
#include <QListWidget>
#include "CreateStudent.h"
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
class ShowStudent;
}

class ShowStudent : public QDialog
{
    Q_OBJECT

public:
    explicit ShowStudent(QWidget *parent = nullptr);
    void setList(const QVector<Student*>& students);
    QListWidget* getListWidget();
    ~ShowStudent();
public slots:
    void on_studentCreated(Student*);
private:
    Ui::ShowStudent *ui;
    bool checkFields();
    QVector<Student*> students;
};

#endif // SHOWSTUDENT_H
