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

class QSqlTableModel;
class DBManager;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(DBManager* dbManager, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createTeacherButton_clicked();

    void on_createStudentButton_clicked();

    void on_showTeacherButton_clicked();

    void on_showStudentButton_clicked();

    void on_exitButton_clicked();
private:
    Ui::MainWindow *ui;
    QString id, lastName, firstName, middleName, birthDate, phoneNumber, cycleCommission, subjects, faculty, course, group;
    ShowTeacher *showTeacher;
    ShowStudent *showStudent;
    DBManager *db;
    QSqlTableModel  *model;
};
#endif // MAINWINDOW_H
