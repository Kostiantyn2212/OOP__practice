#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->student = nullptr;
    ui->formWidget->hide();
    ui->widget->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_PB1_clicked()
{
    ui->formWidget->show();
    ui->widget_2->show();
    ui->widget->show();
    ui->widget_2->show();
    ui->widget->show();
}


void MainWindow::on_PB2_clicked()
{
    if (this->student){
        ui->formWidget->show();
        ui->widget_3->show();
        ui->widget->show();
        QMessageBox::information(this, "Об'єкт класу Student", QString("Student:").append(student->toString()), QMessageBox::Ok);
    }
    else{
        QMessageBox::critical(this, "Не всі поля заповнені!", "Заповніть усі поля!");
    }

}


void MainWindow::on_PB5_clicked()
{
    ui->widget_2->show();
    ui->widget->show();
    if (ui->leId->text() != "" &&
        ui->leLastName->text() != "" &&
        ui->leFirstName->text() != "" &&
        ui->leGroup->text() != "" &&
        ui->leBirthDate->text() != "" &&
        ui->lePhone->text() != "" &&
        ui->leFaculty->text() != "" &&
        ui->leCourse->text() != "" &&
        ui->leGroup->text() != "") {
        QString id = ui->leId->text();
        QString lastName = ui->leLastName->text();
        QString firstName = ui->leFirstName->text();
        QString middleName = ui->leGroup->text();
        QString address = ui->leBirthDate->text();
        QString phoneNumber = ui->lePhone->text();
        QString faculty = ui->leFaculty->text();
        QString course = ui->leCourse->text();
        QString group = ui->leGroup->text();
        this->student = new Student(id.toInt(), lastName.toStdString(), firstName.toStdString(), middleName.toStdString(),address.toStdString(),phoneNumber.toStdString(), faculty.toStdString(),course.toInt(),group.toStdString());
    }
    else {
        QMessageBox::critical(this, "Не всі поля заповнені!", "Заповніть усі поля!");
    }
}


void MainWindow::on_PB4_clicked()
{
    ui->formWidget->hide();
    ui->widget->hide();
}


void MainWindow::on_PB3_clicked()
{
    QCoreApplication::quit();
}


void MainWindow::on_actionCreate_object_triggered()
{
    ui->formWidget->show();
    ui->widget_2->show();
    ui->widget->show();
    ui->widget_2->show();
    ui->widget->show();
}


void MainWindow::on_actionExit_triggered()
{
    QCoreApplication::quit();
}


void MainWindow::on_actionShow_object_triggered()
{
    if (this->student){
        ui->formWidget->show();
        ui->widget->show();
        ui->widget_3->show();
        QMessageBox::information(this, "Об'єкт класу student", QString("Student:").append(student->toString()), QMessageBox::Ok);
    }
    else{
        QMessageBox::critical(this, "Не всі поля заповнені!", "Заповніть усі поля!");
    }
}

