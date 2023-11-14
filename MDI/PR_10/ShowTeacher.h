#ifndef SHOWTEACHER_H
#define SHOWTEACHER_H

#include <QDialog>
#include <QListWidget>
#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "sqlite.h"

namespace Ui {
class ShowTeacher;
}

class ShowTeacher : public QDialog
{
    Q_OBJECT

public:
    explicit ShowTeacher(QWidget *parent = nullptr);
    void setList();
    ~ShowTeacher();

private:
    Ui::ShowTeacher *ui;
    DBManager *db;
    QSqlTableModel  *model;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
};

#endif // SHOWTEACHER_H
