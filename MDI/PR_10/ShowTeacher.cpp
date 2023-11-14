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

void ShowTeacher::setupModel(const QString &tableName, const QStringList &headers)
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0,Qt::AscendingOrder);
}


void ShowTeacher::createUI()
{
    ui->teacherTableView->setModel(model);
    ui->teacherTableView->setColumnHidden(0, true);
    ui->teacherTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->teacherTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->teacherTableView->resizeColumnsToContents();
    ui->teacherTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->teacherTableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}

void ShowTeacher::setList(){
    this->setupModel(TABLE_TEACHERS,
                     QStringList() << tr("ID")
                                   << tr("Middle name")
                                   << tr("First name")
                                   << tr("Last name")
                                   << tr("Birth date")
                                   << tr("Phone number")
                                   << tr("Cycle commission")
                                   << tr("Subjects")
                     );

    this->createUI();
}
