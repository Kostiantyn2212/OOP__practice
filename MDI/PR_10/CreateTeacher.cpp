#include "CreateTeacher.h"
#include "ui_CreateTeacher.h"

CreateTeacher::CreateTeacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateTeacher)
{
    ui->setupUi(this);
}

CreateTeacher::~CreateTeacher()
{
    delete ui;
}

void CreateTeacher::on_confirmTeacherButton_clicked()
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    id = ui->idLe->text();
    middleName = ui->middleNameLe->text();
    firstName = ui->firstNameLe->text();
    lastName = ui->lastNameLe->text();
    birthDate = ui->birthDateLe->text();
    phoneNumber = ui->phoneNumberLe->text();
    cycleCommission = ui->cycleCommissionLe->text();
    subjects = ui->subjectsLe->text();
    try{
    if(ui->idLe->text().isEmpty() || ui->lastNameLe->text().isEmpty() || ui->firstNameLe->text().isEmpty() || ui->middleNameLe->text().isEmpty() || ui->birthDateLe->text().isEmpty() || ui->phoneNumberLe->text().isEmpty() || ui->cycleCommissionLe->text().isEmpty() || ui->subjectsLe->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
        throw std::runtime_error("Some fields are empty");
    }
    else {
        Teacher teacher;
        teacher.setId(id.toInt());
        teacher.setLastName(lastName.toStdString());
        teacher.setFirstName(firstName.toStdString());
        teacher.setMiddleName(middleName.toStdString());
        teacher.setBirthDate(birthDate.toStdString());
        teacher.setPhoneNumber(phoneNumber.toStdString());
        teacher.setCycleCommission(cycleCommission.toStdString());
        teacher.setSubjects(subjects.toStdString());
        if (db->insertIntoTeachers(teacher)) {
            QMessageBox::information(this, "Success", "Created object");

        } else {
            QMessageBox::warning(this, "Error", "Error with the database!");
        }
    }
    }catch(const std::runtime_error &e){
    qWarning()<<"Exception in creating: "<<e.what();
    }
}
