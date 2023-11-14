#ifndef SHOWSTUDENT_H
#define SHOWSTUDENT_H

#include <QDialog>
#include "sqlite.h"

namespace Ui {
class ShowStudent;
}

class ShowStudent : public QDialog
{
    Q_OBJECT

public:
    explicit ShowStudent(QWidget *parent = nullptr);
    void setList();
    ~ShowStudent();

private:
    Ui::ShowStudent *ui;
    DBManager *db;
    QSqlTableModel  *model;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
};

#endif // SHOWSTUDENT_H
