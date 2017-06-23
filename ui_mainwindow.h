/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *pwrLineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *bwLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *totScLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *drLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *snrsLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *maxCallScLineEdit;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *pbRadioButton;
    QRadioButton *scRadioButton;
    QPushButton *pushButton;
    QGroupBox *groupBox_6;
    QTableView *scTableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QComboBox *scDistComboBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_18;
    QLineEdit *avCallScLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QRadioButton *lRadioButton;
    QRadioButton *aRadioButton;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_6;
    QLineEdit *lLineEdit;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_27;
    QComboBox *callDurDistComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_19;
    QLineEdit *hMaxScLineEdit;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lngstCallDurLabel;
    QLineEdit *hMaxLineEdit;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_14;
    QComboBox *traffLoadDistComboBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_10;
    QLineEdit *aLineEdit;
    QGroupBox *groupBox_5;
    QTableView *gainTableView;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QComboBox *gainDistComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_23;
    QComboBox *gainComboBox;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_17;
    QLineEdit *avSnrLineEdit;
    QHBoxLayout *horizontalLayout_55;
    QLabel *label_22;
    QLineEdit *pGainLineEdit;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_21;
    QComboBox *scCallTypeComboBox;
    QGroupBox *groupBox_3;
    QTableView *inputTableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1211, 906);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 741, 841));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 70, 341, 241));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 31, 321, 194));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        pwrLineEdit = new QLineEdit(layoutWidget);
        pwrLineEdit->setObjectName(QStringLiteral("pwrLineEdit"));
        pwrLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(pwrLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_11->addWidget(label_12);

        bwLineEdit = new QLineEdit(layoutWidget);
        bwLineEdit->setObjectName(QStringLiteral("bwLineEdit"));
        bwLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_11->addWidget(bwLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        totScLineEdit = new QLineEdit(layoutWidget);
        totScLineEdit->setObjectName(QStringLiteral("totScLineEdit"));
        totScLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(totScLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        drLineEdit = new QLineEdit(layoutWidget);
        drLineEdit->setObjectName(QStringLiteral("drLineEdit"));
        drLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(drLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        snrsLineEdit = new QLineEdit(layoutWidget);
        snrsLineEdit->setObjectName(QStringLiteral("snrsLineEdit"));
        snrsLineEdit->setMaximumSize(QSize(50, 16777215));
        snrsLineEdit->setMaxLength(2);

        horizontalLayout_9->addWidget(snrsLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_10->addWidget(label_5);

        maxCallScLineEdit = new QLineEdit(layoutWidget);
        maxCallScLineEdit->setObjectName(QStringLiteral("maxCallScLineEdit"));
        maxCallScLineEdit->setMaximumSize(QSize(50, 16777215));
        maxCallScLineEdit->setMaxLength(3);

        horizontalLayout_10->addWidget(maxCallScLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_10);

        layoutWidget_9 = new QWidget(groupBox);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 30, 398, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget_9);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_9);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(75, 16777215));

        horizontalLayout->addWidget(label);

        pbRadioButton = new QRadioButton(layoutWidget_9);
        pbRadioButton->setObjectName(QStringLiteral("pbRadioButton"));

        horizontalLayout->addWidget(pbRadioButton);

        scRadioButton = new QRadioButton(layoutWidget_9);
        scRadioButton->setObjectName(QStringLiteral("scRadioButton"));

        horizontalLayout->addWidget(scRadioButton);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 760, 75, 23));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 320, 341, 501));
        scTableView = new QTableView(groupBox_6);
        scTableView->setObjectName(QStringLiteral("scTableView"));
        scTableView->setGeometry(QRect(10, 340, 311, 151));
        scTableView->setMinimumSize(QSize(0, 0));
        scTableView->setMaximumSize(QSize(16777215, 16777215));
        widget = new QWidget(groupBox_6);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 311, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_13->addWidget(label_7);

        scDistComboBox = new QComboBox(widget);
        scDistComboBox->setObjectName(QStringLiteral("scDistComboBox"));
        scDistComboBox->setMinimumSize(QSize(0, 0));
        scDistComboBox->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_13->addWidget(scDistComboBox);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_18 = new QLabel(widget);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_17->addWidget(label_18);

        avCallScLineEdit = new QLineEdit(widget);
        avCallScLineEdit->setObjectName(QStringLiteral("avCallScLineEdit"));
        avCallScLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_17->addWidget(avCallScLineEdit);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 0));
        label_9->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(label_9);

        lRadioButton = new QRadioButton(widget);
        lRadioButton->setObjectName(QStringLiteral("lRadioButton"));
        lRadioButton->setMinimumSize(QSize(100, 0));
        lRadioButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(lRadioButton);

        aRadioButton = new QRadioButton(widget);
        aRadioButton->setObjectName(QStringLiteral("aRadioButton"));
        aRadioButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(aRadioButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_14->addWidget(label_6);

        lLineEdit = new QLineEdit(widget);
        lLineEdit->setObjectName(QStringLiteral("lLineEdit"));
        lLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_14->addWidget(lLineEdit);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_27 = new QLabel(widget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(0, 0));
        label_27->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_18->addWidget(label_27);

        callDurDistComboBox = new QComboBox(widget);
        callDurDistComboBox->setObjectName(QStringLiteral("callDurDistComboBox"));
        callDurDistComboBox->setMinimumSize(QSize(0, 0));
        callDurDistComboBox->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_18->addWidget(callDurDistComboBox);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_19 = new QLabel(widget);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_3->addWidget(label_19);

        hMaxScLineEdit = new QLineEdit(widget);
        hMaxScLineEdit->setObjectName(QStringLiteral("hMaxScLineEdit"));
        hMaxScLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(hMaxScLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        lngstCallDurLabel = new QLabel(widget);
        lngstCallDurLabel->setObjectName(QStringLiteral("lngstCallDurLabel"));

        horizontalLayout_19->addWidget(lngstCallDurLabel);

        hMaxLineEdit = new QLineEdit(widget);
        hMaxLineEdit->setObjectName(QStringLiteral("hMaxLineEdit"));
        hMaxLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_19->addWidget(hMaxLineEdit);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(0, 0));
        label_14->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_20->addWidget(label_14);

        traffLoadDistComboBox = new QComboBox(widget);
        traffLoadDistComboBox->setObjectName(QStringLiteral("traffLoadDistComboBox"));
        traffLoadDistComboBox->setMinimumSize(QSize(0, 0));
        traffLoadDistComboBox->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_20->addWidget(traffLoadDistComboBox);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 0));
        label_10->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_16->addWidget(label_10);

        aLineEdit = new QLineEdit(widget);
        aLineEdit->setObjectName(QStringLiteral("aLineEdit"));
        aLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_16->addWidget(aLineEdit);


        verticalLayout->addLayout(horizontalLayout_16);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(360, 70, 371, 211));
        gainTableView = new QTableView(groupBox_5);
        gainTableView->setObjectName(QStringLiteral("gainTableView"));
        gainTableView->setGeometry(QRect(10, 140, 281, 60));
        gainTableView->setMinimumSize(QSize(0, 60));
        gainTableView->setMaximumSize(QSize(16777215, 60));
        widget1 = new QWidget(groupBox_5);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 20, 281, 108));
        verticalLayout_6 = new QVBoxLayout(widget1);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_13 = new QLabel(widget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_12->addWidget(label_13);

        gainDistComboBox = new QComboBox(widget1);
        gainDistComboBox->setObjectName(QStringLiteral("gainDistComboBox"));
        gainDistComboBox->setMinimumSize(QSize(0, 0));
        gainDistComboBox->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_12->addWidget(gainDistComboBox);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_23 = new QLabel(widget1);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_5->addWidget(label_23);

        gainComboBox = new QComboBox(widget1);
        gainComboBox->setObjectName(QStringLiteral("gainComboBox"));
        gainComboBox->setMinimumSize(QSize(50, 0));
        gainComboBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(gainComboBox);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setSpacing(6);
        horizontalLayout_54->setObjectName(QStringLiteral("horizontalLayout_54"));
        label_17 = new QLabel(widget1);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(0, 0));
        label_17->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_54->addWidget(label_17);

        avSnrLineEdit = new QLineEdit(widget1);
        avSnrLineEdit->setObjectName(QStringLiteral("avSnrLineEdit"));
        avSnrLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_54->addWidget(avSnrLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_54);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setSpacing(6);
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        label_22 = new QLabel(widget1);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(0, 0));
        label_22->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_55->addWidget(label_22);

        pGainLineEdit = new QLineEdit(widget1);
        pGainLineEdit->setObjectName(QStringLiteral("pGainLineEdit"));
        pGainLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_55->addWidget(pGainLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_55);

        layoutWidget_6 = new QWidget(groupBox);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(410, 760, 201, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_6);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_4->addWidget(label_21);

        scCallTypeComboBox = new QComboBox(layoutWidget_6);
        scCallTypeComboBox->setObjectName(QStringLiteral("scCallTypeComboBox"));
        scCallTypeComboBox->setMinimumSize(QSize(50, 0));
        scCallTypeComboBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(scCallTypeComboBox);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(360, 290, 371, 461));
        inputTableView = new QTableView(groupBox_3);
        inputTableView->setObjectName(QStringLiteral("inputTableView"));
        inputTableView->setGeometry(QRect(10, 20, 351, 431));
        layoutWidget_9->raise();
        groupBox_2->raise();
        pushButton->raise();
        groupBox_6->raise();
        groupBox_5->raise();
        layoutWidget_6->raise();
        groupBox_3->raise();
        MainWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1211, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(pbRadioButton, scRadioButton);
        QWidget::setTabOrder(scRadioButton, pwrLineEdit);
        QWidget::setTabOrder(pwrLineEdit, bwLineEdit);
        QWidget::setTabOrder(bwLineEdit, totScLineEdit);
        QWidget::setTabOrder(totScLineEdit, drLineEdit);
        QWidget::setTabOrder(drLineEdit, snrsLineEdit);
        QWidget::setTabOrder(snrsLineEdit, maxCallScLineEdit);
        QWidget::setTabOrder(maxCallScLineEdit, lRadioButton);
        QWidget::setTabOrder(lRadioButton, aRadioButton);
        QWidget::setTabOrder(aRadioButton, lLineEdit);
        QWidget::setTabOrder(lLineEdit, aLineEdit);
        QWidget::setTabOrder(aLineEdit, scDistComboBox);
        QWidget::setTabOrder(scDistComboBox, gainDistComboBox);
        QWidget::setTabOrder(gainDistComboBox, avSnrLineEdit);
        QWidget::setTabOrder(avSnrLineEdit, pushButton);
        QWidget::setTabOrder(pushButton, inputTableView);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Input Parameters", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "General parameters", 0));
        label_2->setText(QApplication::translate("MainWindow", "Power in the cell, P:", 0));
        label_12->setText(QApplication::translate("MainWindow", "System bandwidth, B:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Total subcarriers, Cs:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Average data rate of each subcarrier, R:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Number of channel gain intervals, M:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Max. subcarriers in each call, K:", 0));
        label->setText(QApplication::translate("MainWindow", "Calculate:", 0));
        pbRadioButton->setText(QApplication::translate("MainWindow", "Blocking Probability, Pb", 0));
        scRadioButton->setText(QApplication::translate("MainWindow", "Number of subcarriers, M", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Traffic", 0));
        label_7->setText(QApplication::translate("MainWindow", "Subcarriers/call distribution:", 0));
        scDistComboBox->clear();
        scDistComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Uniform", 0)
         << QApplication::translate("MainWindow", "Binomial", 0)
         << QApplication::translate("MainWindow", "Poisson", 0)
         << QApplication::translate("MainWindow", "Gamma", 0)
         << QApplication::translate("MainWindow", "Add values manually", 0)
        );
        label_18->setText(QApplication::translate("MainWindow", "Mean value of subcarriers/call:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Set:", 0));
        lRadioButton->setText(QApplication::translate("MainWindow", "arrival rate, \316\273", 0));
        aRadioButton->setText(QApplication::translate("MainWindow", "Traffic load, \316\261", 0));
        label_6->setText(QApplication::translate("MainWindow", "arrival rate, \316\273:", 0));
        label_27->setText(QApplication::translate("MainWindow", "Call duration distribution:", 0));
        callDurDistComboBox->clear();
        callDurDistComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Uniform", 0)
         << QApplication::translate("MainWindow", "Binomial", 0)
         << QApplication::translate("MainWindow", "Poisson", 0)
         << QApplication::translate("MainWindow", "Gamma", 0)
         << QApplication::translate("MainWindow", "Add values manually", 0)
        );
        label_19->setText(QApplication::translate("MainWindow", "Subcarriers of longest call:", 0));
        lngstCallDurLabel->setText(QApplication::translate("MainWindow", "Mean duration of longest call:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Traffic load distribution:", 0));
        traffLoadDistComboBox->clear();
        traffLoadDistComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Uniform", 0)
         << QApplication::translate("MainWindow", "Binomial", 0)
         << QApplication::translate("MainWindow", "Poisson", 0)
         << QApplication::translate("MainWindow", "Gamma", 0)
         << QApplication::translate("MainWindow", "Add values manually", 0)
        );
        label_10->setText(QApplication::translate("MainWindow", "Offered traffic load per subcarrier, \316\261:", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Channel gain", 0));
        label_13->setText(QApplication::translate("MainWindow", "Distribution for channel gains:", 0));
        gainDistComboBox->clear();
        gainDistComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Uniform", 0)
         << QApplication::translate("MainWindow", "Binomial", 0)
         << QApplication::translate("MainWindow", "Poison", 0)
         << QApplication::translate("MainWindow", "Gamma", 0)
         << QApplication::translate("MainWindow", "Add values manually", 0)
        );
        label_23->setText(QApplication::translate("MainWindow", "call type (channel gain):", 0));
        label_17->setText(QApplication::translate("MainWindow", "channel gain, g:", 0));
        label_22->setText(QApplication::translate("MainWindow", "probability, pg:", 0));
        label_21->setText(QApplication::translate("MainWindow", "call type (subcarriers):", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Input table", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
