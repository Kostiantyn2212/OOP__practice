#include "ShowTeacher.h"
#include "ui_ShowTeacher.h"
#include <QLayout>
#include <QListWidget>
#include <QListWidgetItem>
ShowTeacher::ShowTeacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowTeacher)
{
    ui->setupUi(this);
}

ShowTeacher::~ShowTeacher()
{
    delete ui;
}

QListWidget* ShowTeacher::getListWidget() {
    return (ui->listWidgetTeacher);
}

void ShowTeacher::setList(const QVector<Teacher *> &teachers){
    for (Teacher* teacher : teachers) {
        QString itemText = "ID: " + QString::number(teacher->getId()) +
                           ", Last name: " + QString::fromStdString(teacher->getLastName()) +
                           ", First Name: " + QString::fromStdString(teacher->getFirstName()) +
                           ", Middle name: " + QString::fromStdString(teacher->getMiddleName()) +
                           ", Birth date: " + QString::fromStdString(teacher->getBirthDate()) +
                           ", Phone number: " + QString::fromStdString(teacher->getPhoneNumber()) +
                           ", Cycle commission: " + QString::fromStdString(teacher->getCycleCommission()) +
                           ", Subjects: " + QString::fromStdString(teacher->getSubjects());
        QListWidgetItem* item = new QListWidgetItem(ui->listWidgetTeacher);
        item->setText(QString::number(teacher->getId()));
        item->setData(Qt::UserRole, QVariant::fromValue(teacher));
    }
}


void ShowTeacher::on_teacherCreated(Teacher* teacher)
{
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(QString("ID: %1, Last name: %2, First name: %3, Middle name: %4, Birth date: %5, Phone number: %6, Cycle commission: %7, Subjects: %8")
                      .arg(QString::number(teacher->getId()))
                      .arg(QString::fromStdString(teacher->getLastName()))
                      .arg(QString::fromStdString(teacher->getFirstName()))
                      .arg(QString::fromStdString(teacher->getMiddleName()))
                      .arg(QString::fromStdString(teacher->getBirthDate()))
                      .arg(QString::fromStdString(teacher->getPhoneNumber()))
                      .arg(QString::fromStdString(teacher->getCycleCommission()))
                      .arg(QString::fromStdString(teacher->getSubjects())));
    ui->listWidgetTeacher->addItem(item);
}
