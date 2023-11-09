/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate_object;
    QAction *actionShow_object;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *PB1;
    QPushButton *PB2;
    QPushButton *PB3;
    QWidget *formWidget;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_1;
    QLabel *lbId;
    QLabel *lbLastName;
    QLabel *lbFirstName;
    QLabel *lbMiddleName;
    QLabel *lbBirthDate;
    QLabel *lbPhone;
    QLabel *lbYearOfZNO;
    QLabel *lbNumberOfCertificate;
    QLabel *lbPinOfCertificate;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *leId;
    QLineEdit *leLastName;
    QLineEdit *leFirstName;
    QLineEdit *leMiddleName;
    QLineEdit *leBirthDate;
    QLineEdit *lePhone;
    QLineEdit *leFaculty;
    QLineEdit *leCourse;
    QLineEdit *leGroup;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB5;
    QPushButton *PB4;
    QMenuBar *menubar;
    QMenu *menuCreate_Obj;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(796, 427);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionCreate_object = new QAction(MainWindow);
        actionCreate_object->setObjectName("actionCreate_object");
        actionShow_object = new QAction(MainWindow);
        actionShow_object->setObjectName("actionShow_object");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 60, 211, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PB1 = new QPushButton(verticalLayoutWidget);
        PB1->setObjectName("PB1");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        PB1->setFont(font);

        verticalLayout->addWidget(PB1);

        PB2 = new QPushButton(verticalLayoutWidget);
        PB2->setObjectName("PB2");
        PB2->setFont(font);

        verticalLayout->addWidget(PB2);

        PB3 = new QPushButton(verticalLayoutWidget);
        PB3->setObjectName("PB3");
        PB3->setFont(font);

        verticalLayout->addWidget(PB3);

        formWidget = new QWidget(centralwidget);
        formWidget->setObjectName("formWidget");
        formWidget->setGeometry(QRect(240, 0, 551, 351));
        horizontalLayout_5 = new QHBoxLayout(formWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget_3 = new QWidget(formWidget);
        widget_3->setObjectName("widget_3");
        verticalLayout_1 = new QVBoxLayout(widget_3);
        verticalLayout_1->setObjectName("verticalLayout_1");
        lbId = new QLabel(widget_3);
        lbId->setObjectName("lbId");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        lbId->setFont(font1);

        verticalLayout_1->addWidget(lbId);

        lbLastName = new QLabel(widget_3);
        lbLastName->setObjectName("lbLastName");
        lbLastName->setFont(font1);

        verticalLayout_1->addWidget(lbLastName);

        lbFirstName = new QLabel(widget_3);
        lbFirstName->setObjectName("lbFirstName");
        lbFirstName->setFont(font1);

        verticalLayout_1->addWidget(lbFirstName);

        lbMiddleName = new QLabel(widget_3);
        lbMiddleName->setObjectName("lbMiddleName");
        lbMiddleName->setFont(font1);

        verticalLayout_1->addWidget(lbMiddleName);

        lbBirthDate = new QLabel(widget_3);
        lbBirthDate->setObjectName("lbBirthDate");
        lbBirthDate->setFont(font1);

        verticalLayout_1->addWidget(lbBirthDate);

        lbPhone = new QLabel(widget_3);
        lbPhone->setObjectName("lbPhone");
        lbPhone->setFont(font1);

        verticalLayout_1->addWidget(lbPhone);

        lbYearOfZNO = new QLabel(widget_3);
        lbYearOfZNO->setObjectName("lbYearOfZNO");
        lbYearOfZNO->setFont(font1);

        verticalLayout_1->addWidget(lbYearOfZNO);

        lbNumberOfCertificate = new QLabel(widget_3);
        lbNumberOfCertificate->setObjectName("lbNumberOfCertificate");
        lbNumberOfCertificate->setFont(font1);

        verticalLayout_1->addWidget(lbNumberOfCertificate);

        lbPinOfCertificate = new QLabel(widget_3);
        lbPinOfCertificate->setObjectName("lbPinOfCertificate");
        lbPinOfCertificate->setFont(font1);

        verticalLayout_1->addWidget(lbPinOfCertificate);


        horizontalLayout_5->addWidget(widget_3);

        widget_2 = new QWidget(formWidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        leId = new QLineEdit(widget_2);
        leId->setObjectName("leId");
        QFont font2;
        font2.setPointSize(14);
        leId->setFont(font2);

        verticalLayout_2->addWidget(leId);

        leLastName = new QLineEdit(widget_2);
        leLastName->setObjectName("leLastName");
        leLastName->setFont(font2);

        verticalLayout_2->addWidget(leLastName);

        leFirstName = new QLineEdit(widget_2);
        leFirstName->setObjectName("leFirstName");
        leFirstName->setFont(font2);

        verticalLayout_2->addWidget(leFirstName);

        leMiddleName = new QLineEdit(widget_2);
        leMiddleName->setObjectName("leMiddleName");
        leMiddleName->setFont(font2);

        verticalLayout_2->addWidget(leMiddleName);

        leBirthDate = new QLineEdit(widget_2);
        leBirthDate->setObjectName("leBirthDate");
        leBirthDate->setFont(font2);

        verticalLayout_2->addWidget(leBirthDate);

        lePhone = new QLineEdit(widget_2);
        lePhone->setObjectName("lePhone");
        lePhone->setFont(font2);

        verticalLayout_2->addWidget(lePhone);

        leFaculty = new QLineEdit(widget_2);
        leFaculty->setObjectName("leFaculty");
        leFaculty->setFont(font2);

        verticalLayout_2->addWidget(leFaculty);

        leCourse = new QLineEdit(widget_2);
        leCourse->setObjectName("leCourse");
        leCourse->setFont(font2);

        verticalLayout_2->addWidget(leCourse);

        leGroup = new QLineEdit(widget_2);
        leGroup->setObjectName("leGroup");
        leGroup->setFont(font2);

        verticalLayout_2->addWidget(leGroup);


        horizontalLayout_5->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(380, 350, 168, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        PB5 = new QPushButton(widget);
        PB5->setObjectName("PB5");
        PB5->setFont(font);

        horizontalLayout->addWidget(PB5);

        PB4 = new QPushButton(widget);
        PB4->setObjectName("PB4");
        PB4->setFont(font);

        horizontalLayout->addWidget(PB4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 796, 21));
        menuCreate_Obj = new QMenu(menubar);
        menuCreate_Obj->setObjectName("menuCreate_Obj");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuCreate_Obj->menuAction());
        menuCreate_Obj->addAction(actionCreate_object);
        menuCreate_Obj->addAction(actionShow_object);
        menuCreate_Obj->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreate_object->setText(QCoreApplication::translate("MainWindow", "Create object", nullptr));
        actionShow_object->setText(QCoreApplication::translate("MainWindow", "Show object", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        PB1->setText(QCoreApplication::translate("MainWindow", "Create object", nullptr));
        PB2->setText(QCoreApplication::translate("MainWindow", "Show object", nullptr));
        PB3->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        lbId->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        lbLastName->setText(QCoreApplication::translate("MainWindow", "Last name", nullptr));
        lbFirstName->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        lbMiddleName->setText(QCoreApplication::translate("MainWindow", "Middle name", nullptr));
        lbBirthDate->setText(QCoreApplication::translate("MainWindow", "Birth date", nullptr));
        lbPhone->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        lbYearOfZNO->setText(QCoreApplication::translate("MainWindow", "Faculty", nullptr));
        lbNumberOfCertificate->setText(QCoreApplication::translate("MainWindow", "Course", nullptr));
        lbPinOfCertificate->setText(QCoreApplication::translate("MainWindow", "Group", nullptr));
        PB5->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        PB4->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        menuCreate_Obj->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
