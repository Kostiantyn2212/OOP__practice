#ifndef SHOWTEACHER_H
#define SHOWTEACHER_H

#include <QDialog>
#include <QListWidget>
#include "CreateTeacher.h"
#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "mainwindow.h"
#include "Teacher.h"
#include "Person.h"
#include "Student.h"
#include "CreateTeacher.h"
#include "CreateStudent.h"
#include "ShowTeacher.h"
#include "ShowStudent.h"

namespace Ui {
class ShowTeacher;
}

class ShowTeacher : public QDialog
{
    Q_OBJECT

public:
    explicit ShowTeacher(QWidget *parent = nullptr);
    void setList(const QVector<Teacher*>& teachers);
    QListWidget* getListWidget();
    ~ShowTeacher();
public slots:
    void on_teacherCreated(Teacher*);

private:
    Ui::ShowTeacher *ui;
    bool checkFields();
    QVector<Teacher*> teachers;
};

#endif // SHOWTEACHER_H
