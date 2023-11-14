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

void ShowStudent::setupModel(const QString &tableName, const QStringList &headers)
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0,Qt::AscendingOrder);
}


void ShowStudent::createUI()
{
    ui->studentTableView->setModel(model);
    ui->studentTableView->setColumnHidden(0, true);
    ui->studentTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->studentTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->studentTableView->resizeColumnsToContents();
    ui->studentTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->studentTableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}

void ShowStudent::setList(){
    this->setupModel(TABLE_STUDENTS,
                     QStringList() << tr("ID")
                                   << tr("Middle name")
                                   << tr("First name")
                                   << tr("Last name")
                                   << tr("Birth date")
                                   << tr("Phone number")
                                   << tr("Faculty")
                                   << tr("Course")
                                   << tr("Group")
                     );

    this->createUI();
}
