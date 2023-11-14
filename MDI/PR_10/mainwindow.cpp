#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ShowTeacher.h"
#include "ShowStudent.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
ShowTeacher *showTeacher;
ShowStudent *showStudent;
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_teacherCreated(Teacher* teacher)
{
    teachers.push_back(teacher);
}

void MainWindow::on_studentCreated(Student* student)
{
    students.push_back(student);
}


void MainWindow::on_createTeacherButton_clicked()
{
    CreateTeacher createTeacher;
    createTeacher.setModal(true);
    QObject::connect(&createTeacher, &CreateTeacher::teacherCreated, this, &MainWindow::on_teacherCreated);
    createTeacher.exec();
}


void MainWindow::on_createStudentButton_clicked()
{
    CreateStudent createStudent;
    createStudent.setModal(true);
    QObject::connect(&createStudent, &CreateStudent::studentCreated, this, &MainWindow::on_studentCreated);
    createStudent.exec();
}


void MainWindow::on_showTeacherButton_clicked()
{
    showTeacher = new ShowTeacher(this);
    showTeacher->show();
    showTeacher->setList(teachers);
    connect(showTeacher->getListWidget(), &QListWidget::itemDoubleClicked, this, &MainWindow::on_itemTecDoubleClicked);
}


void MainWindow::on_showStudentButton_clicked()
{
    showStudent = new ShowStudent(this);
    showStudent->show();
    showStudent->setList(students);
    connect(showStudent->getListWidget(), &QListWidget::itemDoubleClicked, this, &MainWindow::on_itemStuDoubleClicked);
}


void MainWindow::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exiting the program", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QCoreApplication::exit(0);
    }
}

void MainWindow::on_itemTecDoubleClicked(QListWidgetItem* item)
{
    if (item) {
        Teacher *teacher = item->data(Qt::UserRole).value<Teacher *>();
        if (teacher) {
            QString itemText = "ID: " + QString::number(teacher->getId()) +
                               "\nLast name: " + QString::fromStdString(teacher->getLastName()) +
                               "\nFirst name: " + QString::fromStdString(teacher->getFirstName()) +
                               "\nMiddle name: " + QString::fromStdString(teacher->getMiddleName()) +
                               "\nBirth date: " + QString::fromStdString(teacher->getBirthDate()) +
                               "\nPhone number: " + QString::fromStdString(teacher->getPhoneNumber()) +
                               "\nCycle commission: " + QString::fromStdString(teacher->getCycleCommission()) +
                               "\nSubjects: " + QString::fromStdString(teacher->getSubjects());
            QMessageBox::information(this, "Teacher", itemText, QMessageBox::Ok);

        }
    }
}
void MainWindow::on_itemStuDoubleClicked(QListWidgetItem* item)
{
    if (item) {
        Student *student = item->data(Qt::UserRole).value<Student *>();
        if (student) {
            QString itemText = "ID: " + QString::number(student->getId()) +
                               "\nLast name: " + QString::fromStdString(student->getLastName()) +
                               "\nFirst name: " + QString::fromStdString(student->getFirstName()) +
                               "\nMiddle name: " + QString::fromStdString(student->getMiddleName()) +
                               "\nBirth date: " + QString::fromStdString(student->getBirthDate()) +
                               "\nPhone number: " + QString::fromStdString(student->getPhoneNumber()) +
                               "\nFaculty: " + QString::fromStdString(student->getFaculty()) +
                               "\nCourse: " + QString::number(student->getCourse()) +
                               "\nGroup: " + QString::fromStdString(student->getGroup());
            QMessageBox::information(this, "Student", itemText, QMessageBox::Ok);

        }
    }
}

