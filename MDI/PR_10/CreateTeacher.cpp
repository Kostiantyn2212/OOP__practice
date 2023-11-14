#include "CreateTeacher.h"
#include "ui_CreateTeacher.h"

CreateTeacher::CreateTeacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateTeacher)
{
    ui->setupUi(this);
    idLe = findChild<QLineEdit*>("idLe");
    lastNameLe = findChild<QLineEdit*>("lastNameLe");
    firstNameLe = findChild<QLineEdit*>("firstNameLe");
    middleNameLe = findChild<QLineEdit*>("middleNameLe");
    birthDateLe = findChild<QLineEdit*>("addressLe");
    phoneNumberLe = findChild<QLineEdit*>("phoneLe");
    cycleCommissionLe = findChild<QLineEdit*>("cycleCommissionLe");
    subjectsLe = findChild<QLineEdit*>("subjectsLe");
}

CreateTeacher::~CreateTeacher()
{
    delete ui;
}
bool CreateTeacher::checkFields(){
    bool check = false;
    if(ui->idLe->text().isEmpty() || ui->middleNameLe->text().isEmpty() || ui->firstNameLe->text().isEmpty() || ui->lastNameLe->text().isEmpty() || ui->birthDateLe->text().isEmpty() ||ui->phoneNumberLe->text().isEmpty() || ui->cycleCommissionLe->text().isEmpty() || ui->subjectsLe->text().isEmpty()){
        check = false;
    }
    else check = true;
    return check;
}

void CreateTeacher::on_confirmTeacherButton_clicked()
{
    id = ui->idLe->text();
    middleName = ui->middleNameLe->text();
    firstName = ui->firstNameLe->text();
    lastName = ui->lastNameLe->text();
    birthDate = ui->birthDateLe->text();
    phoneNumber = ui->phoneNumberLe->text();
    cycleCommission = ui->cycleCommissionLe->text();
    subjects = ui->subjectsLe->text();

    if (checkFields()) {
        newTeacher = new Teacher(id.toInt(), lastName.toStdString(), firstName.toStdString(), middleName.toStdString(), birthDate.toStdString(), phoneNumber.toStdString(), cycleCommission.toStdString(),subjects.toStdString());
        emit teacherCreated(newTeacher);
        QMessageBox::StandardButton reply;
        reply = QMessageBox::information(this, "Created successful!", "Now object is created! Close this window to look out the printed data.", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            accept();
        }
    } else {
        QMessageBox::warning(this, "Error due to input data :(", "Some fields are empty, please fill them all!!!");
    }
}
