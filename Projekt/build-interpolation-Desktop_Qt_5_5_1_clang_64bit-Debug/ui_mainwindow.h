/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qStcePlot/qstceplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStcePlot *plotWidget;
    QPushButton *exit_button;
    QPushButton *reset_button;
    QSpacerItem *verticalSpacer;
    QGroupBox *Interpolatiosart;
    QGridLayout *gridLayout_3;
    QComboBox *interpolation_select;
    QGroupBox *Definitionsbereich;
    QGridLayout *gridLayout_2;
    QLineEdit *xmax_edit;
    QLabel *xmax_label;
    QLabel *ymax_label;
    QLabel *ymin_label;
    QLineEdit *ymax_edit;
    QLineEdit *ymin_edit;
    QLineEdit *xmin_edit;
    QLabel *xmin_label;
    QPushButton *defbereich_button;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(684, 496);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setBaseSize(QSize(10, 10));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plotWidget = new QStcePlot(centralWidget);
        plotWidget->setObjectName(QStringLiteral("plotWidget"));

        gridLayout->addWidget(plotWidget, 0, 2, 7, 1);

        exit_button = new QPushButton(centralWidget);
        exit_button->setObjectName(QStringLiteral("exit_button"));

        gridLayout->addWidget(exit_button, 6, 0, 1, 2);

        reset_button = new QPushButton(centralWidget);
        reset_button->setObjectName(QStringLiteral("reset_button"));

        gridLayout->addWidget(reset_button, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        Interpolatiosart = new QGroupBox(centralWidget);
        Interpolatiosart->setObjectName(QStringLiteral("Interpolatiosart"));
        gridLayout_3 = new QGridLayout(Interpolatiosart);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        interpolation_select = new QComboBox(Interpolatiosart);
        interpolation_select->setObjectName(QStringLiteral("interpolation_select"));

        gridLayout_3->addWidget(interpolation_select, 0, 0, 1, 1);


        gridLayout->addWidget(Interpolatiosart, 1, 0, 1, 2);

        Definitionsbereich = new QGroupBox(centralWidget);
        Definitionsbereich->setObjectName(QStringLiteral("Definitionsbereich"));
        gridLayout_2 = new QGridLayout(Definitionsbereich);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        xmax_edit = new QLineEdit(Definitionsbereich);
        xmax_edit->setObjectName(QStringLiteral("xmax_edit"));

        gridLayout_2->addWidget(xmax_edit, 0, 3, 1, 1);

        xmax_label = new QLabel(Definitionsbereich);
        xmax_label->setObjectName(QStringLiteral("xmax_label"));

        gridLayout_2->addWidget(xmax_label, 0, 2, 1, 1);

        ymax_label = new QLabel(Definitionsbereich);
        ymax_label->setObjectName(QStringLiteral("ymax_label"));

        gridLayout_2->addWidget(ymax_label, 1, 2, 1, 1);

        ymin_label = new QLabel(Definitionsbereich);
        ymin_label->setObjectName(QStringLiteral("ymin_label"));

        gridLayout_2->addWidget(ymin_label, 1, 0, 1, 1);

        ymax_edit = new QLineEdit(Definitionsbereich);
        ymax_edit->setObjectName(QStringLiteral("ymax_edit"));

        gridLayout_2->addWidget(ymax_edit, 1, 3, 1, 1);

        ymin_edit = new QLineEdit(Definitionsbereich);
        ymin_edit->setObjectName(QStringLiteral("ymin_edit"));

        gridLayout_2->addWidget(ymin_edit, 1, 1, 1, 1);

        xmin_edit = new QLineEdit(Definitionsbereich);
        xmin_edit->setObjectName(QStringLiteral("xmin_edit"));

        gridLayout_2->addWidget(xmin_edit, 0, 1, 1, 1);

        xmin_label = new QLabel(Definitionsbereich);
        xmin_label->setObjectName(QStringLiteral("xmin_label"));

        gridLayout_2->addWidget(xmin_label, 0, 0, 1, 1);

        defbereich_button = new QPushButton(Definitionsbereich);
        defbereich_button->setObjectName(QStringLiteral("defbereich_button"));

        gridLayout_2->addWidget(defbereich_button, 2, 0, 1, 4);

        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(3, 1);

        gridLayout->addWidget(Definitionsbereich, 2, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 7);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Interpolation", 0));
        exit_button->setText(QApplication::translate("MainWindow", "Beenden", 0));
        reset_button->setText(QApplication::translate("MainWindow", "Reset", 0));
        Interpolatiosart->setTitle(QApplication::translate("MainWindow", "Interpolationsart", 0));
        interpolation_select->clear();
        interpolation_select->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Linear", 0)
         << QApplication::translate("MainWindow", "Polynom", 0)
         << QApplication::translate("MainWindow", "Kubischer Spline", 0)
        );
        Definitionsbereich->setTitle(QApplication::translate("MainWindow", "Definitionsbereich:", 0));
        xmax_edit->setText(QApplication::translate("MainWindow", "100", 0));
        xmax_label->setText(QApplication::translate("MainWindow", "xmax:", 0));
        ymax_label->setText(QApplication::translate("MainWindow", "ymax:", 0));
        ymin_label->setText(QApplication::translate("MainWindow", "ymin:", 0));
        ymax_edit->setText(QApplication::translate("MainWindow", "50", 0));
        ymin_edit->setText(QApplication::translate("MainWindow", "0", 0));
        xmin_edit->setText(QApplication::translate("MainWindow", "0", 0));
        xmin_label->setText(QApplication::translate("MainWindow", "xmin:", 0));
        defbereich_button->setText(QApplication::translate("MainWindow", "Defnitionsbereich setzen", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
