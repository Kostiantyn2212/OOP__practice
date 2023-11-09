#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Student.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PB1_clicked();

    void on_PB2_clicked();

    void on_PB5_clicked();

    void on_PB4_clicked();

    void on_PB3_clicked();

    void on_actionCreate_object_triggered();

    void on_actionExit_triggered();

    void on_actionShow_object_triggered();

private:
    Ui::MainWindow *ui;
    Student* student;
};
#endif // MAINWINDOW_H
