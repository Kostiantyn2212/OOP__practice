#include "CreateStudent.h"
#include "ui_CreateStudent.h"

CreateStudent::CreateStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateStudent)
{
    ui->setupUi(this);
}

CreateStudent::~CreateStudent()
{
    delete ui;
}

void CreateStudent::on_confirmStudentButton_clicked()
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    id = ui->idLe->text();
    lastName = ui->lastNameLe->text();
    firstName = ui->firstNameLe->text();
    middleName = ui->middleNameLe->text();
    birthDate = ui->birthDateLe->text();
    phoneNumber = ui->phoneNumberLe->text();
    faculty = ui->facultyLe->text();
    course = ui->courseLe->text();
    group = ui->groupLe->text();

    if(ui->idLe->text().isEmpty() || ui->lastNameLe->text().isEmpty() || ui->firstNameLe->text().isEmpty() || ui->middleNameLe->text().isEmpty() || ui->birthDateLe->text().isEmpty() || ui->phoneNumberLe->text().isEmpty() || ui->facultyLe->text().isEmpty() || ui->courseLe->text().isEmpty() || ui->groupLe->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
    }
    else {
        Student student;
        student.setId(id.toInt());
        student.setLastName(lastName.toStdString());
        student.setFirstName(firstName.toStdString());
        student.setMiddleName(middleName.toStdString());
        student.setBirthDate(birthDate.toStdString());
        student.setPhoneNumber(phoneNumber.toStdString());
        student.setFaculty(faculty.toStdString());
        student.setCourse(course.toInt());
        student.setGroup(group.toStdString());
        if (db->insertIntoStudents(student)) {
            QMessageBox::information(this, "Success", "Created object");

        } else {
            QMessageBox::warning(this, "Error", "Error with the database!");
        }
    }
}
