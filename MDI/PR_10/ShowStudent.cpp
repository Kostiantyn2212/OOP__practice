#include "ShowStudent.h"
#include "ui_ShowStudent.h"
#include <QLayout>
#include <QListWidget>
#include <QListWidgetItem>
ShowStudent::ShowStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowStudent)
{
    ui->setupUi(this);
}

ShowStudent::~ShowStudent()
{
    delete ui;
}

QListWidget* ShowStudent::getListWidget() {
    return (ui->listWidgetStudent);
}
void ShowStudent::setList(const QVector<Student *> &students){
    for (Student* student : students) {
        QString itemText = "ID: " + QString::number(student->getId()) +
                           ", Last name: " + QString::fromStdString(student->getLastName()) +
                           ", First Name: " + QString::fromStdString(student->getFirstName()) +
                           ", Middle name: " + QString::fromStdString(student->getMiddleName()) +
                           ", Birth date: " + QString::fromStdString(student->getBirthDate()) +
                           ", Phone: " + QString::fromStdString(student->getPhoneNumber()) +
                           ", Faculty: " + QString::fromStdString(student->getFaculty()) +
                           ", Course: " + QString::number(student->getCourse()) +
                           ", Group: " + QString::fromStdString(student->getGroup());
        QListWidgetItem* item = new QListWidgetItem(ui->listWidgetStudent);
        item->setText(QString::number(student->getId()));
        item->setData(Qt::UserRole, QVariant::fromValue(student));
    }
}

void ShowStudent::on_studentCreated(Student* student)
{
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(QString("ID: %1, Last name: %2, First name: %3, Middle name: %4, Birth date: %5, Phone number: %6, Faculty: %7, Course: %8 , Group: %9")
                      .arg(QString::number(student->getId()))
                      .arg(QString::fromStdString(student->getLastName()))
                      .arg(QString::fromStdString(student->getFirstName()))
                      .arg(QString::fromStdString(student->getMiddleName()))
                      .arg(QString::fromStdString(student->getBirthDate()))
                      .arg(QString::fromStdString(student->getPhoneNumber()))
                      .arg(QString::fromStdString(student->getFaculty()))
                      .arg(QString::number(student->getCourse()))
                      .arg(QString::fromStdString(student->getGroup())));
    ui->listWidgetStudent->addItem(item);
}
