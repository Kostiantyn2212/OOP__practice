#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "Teacher.h"
#include "Person.h"
#include "Student.h"
#include "CreateTeacher.h"
#include "CreateStudent.h"
#include "ShowTeacher.h"
#include "ShowStudent.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_teacherCreated(Teacher*);
    void on_studentCreated(Student*);

    void on_createTeacherButton_clicked();

    void on_createStudentButton_clicked();

    void on_showTeacherButton_clicked();

    void on_showStudentButton_clicked();

    void on_exitButton_clicked();

    void on_itemTecDoubleClicked(QListWidgetItem *item);

    void on_itemStuDoubleClicked(QListWidgetItem *item);
private:
    Ui::MainWindow *ui;
    QVector<Teacher*> teachers;
    QVector<Student*> students;
    QString id, lastName, firstName, middleName, birthDate, phoneNumber, cycleCommission, subjects, faculty, course, group;
};
#endif // MAINWINDOW_H
