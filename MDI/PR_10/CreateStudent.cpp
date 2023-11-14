#include "CreateStudent.h"
#include "ui_CreateStudent.h"

CreateStudent::CreateStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateStudent)
{
    ui->setupUi(this);
    idLe = findChild<QLineEdit*>("idLe");
    lastNameLe = findChild<QLineEdit*>("lastNameLe");
    firstNameLe = findChild<QLineEdit*>("firstNameLe");
    middleNameLe = findChild<QLineEdit*>("middleNameLe");
    birthDateLe = findChild<QLineEdit*>("birthDateLe");
    phoneNumberLe = findChild<QLineEdit*>("phoneNumberLe");
    facultyLe = findChild<QLineEdit*>("facultyLe");
    courseLe = findChild<QLineEdit*>("courseLe");
    groupLe = findChild<QLineEdit*>("groupLe");
}

CreateStudent::~CreateStudent()
{
    delete ui;
}
bool CreateStudent::checkFields(){
    bool check = false;
    if(ui->idLe->text().isEmpty() || ui->middleNameLe->text().isEmpty() || ui->firstNameLe->text().isEmpty() || ui->lastNameLe->text().isEmpty() || ui->birthDateLe->text().isEmpty() ||ui->phoneNumberLe->text().isEmpty() || ui->facultyLe->text().isEmpty() || ui->courseLe->text().isEmpty() || ui->groupLe->text().isEmpty()){
        check = false;
    }
    else check = true;
    return check;
}

void CreateStudent::on_confirmStudentButton_clicked()
{
    //    ui->idLn->setText("");
    //    ui->firstNameLn->setText("");
    //    ui->surnameLn->setText("");
    //    ui->lastNameLn->setText("");
    //    ui->addressLn->setText("");
    //    ui->phoneNumLn->setText("");
    //    ui->specializationLn->setText("");


    id = ui->idLe->text();
    lastName = ui->lastNameLe->text();
    firstName = ui->firstNameLe->text();
    middleName = ui->middleNameLe->text();
    birthDate = ui->birthDateLe->text();
    phoneNumber = ui->phoneNumberLe->text();
    faculty = ui->facultyLe->text();
    course = ui->courseLe->text();
    group = ui->groupLe->text();

    if (checkFields()) {
        newStudent = new Student(id.toInt(), lastName.toStdString(), firstName.toStdString(), middleName.toStdString(), birthDate.toStdString(), phoneNumber.toStdString(), faculty.toStdString(),course.toInt(),group.toStdString());
        emit studentCreated(newStudent);
        QMessageBox::StandardButton reply;
        reply = QMessageBox::information(this, "Created successful!", "Now object is created! Close this window to look out the printed data.", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            accept();
        }
    } else {
        QMessageBox::warning(this, "Error due to input data :(", "Some fields are empty, please fill them all!!!");
    }
}
