#include "mainwindow.h"
#include "db.h"
#include "sqlite.h"
#include <QtSql/QSqlTableModel>
#include <QDateTime>
#include "ui_mainwindow.h"
#include "ShowTeacher.h"
#include "ShowStudent.h"

MainWindow::MainWindow(DBManager* dbManager, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dbManager->connectToDataBase();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_createTeacherButton_clicked()
{
    CreateTeacher createTeacher;
    createTeacher.setModal(true);
    createTeacher.exec();
}


void MainWindow::on_createStudentButton_clicked()
{
    CreateStudent createStudent;
    createStudent.setModal(true);
    createStudent.exec();
}


void MainWindow::on_showTeacherButton_clicked()
{
    showTeacher = new ShowTeacher(this);
    showTeacher->show();
    showTeacher->setList();
}


void MainWindow::on_showStudentButton_clicked()
{
    showStudent = new ShowStudent(this);
    showStudent->show();
    showStudent->setList();
}


void MainWindow::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exiting the program", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QCoreApplication::exit(0);
    }
}

