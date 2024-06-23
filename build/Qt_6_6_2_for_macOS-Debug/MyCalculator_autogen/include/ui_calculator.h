/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button8;
    QPushButton *Button6;
    QPushButton *Button0;
    QPushButton *Button1;
    QPushButton *ButtonDivide;
    QPushButton *ButtonPercent;
    QPushButton *ButtonMinus;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *ButtonChangeSign;
    QPushButton *Button2;
    QPushButton *Button9;
    QPushButton *ButtonMul;
    QPushButton *Button7;
    QPushButton *Button5;
    QPushButton *ButtonPlus;
    QPushButton *ButtonEquals;
    QPushButton *ButtonReset;
    QPushButton *ButtonComma;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(450, 351);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setStyleSheet(QString::fromUtf8("QLindeEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color #ffffff\n"
"}\n"
""));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button6, 4, 2, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button0, 7, 0, 1, 2);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button1, 5, 0, 1, 1);

        ButtonDivide = new QPushButton(centralwidget);
        ButtonDivide->setObjectName("ButtonDivide");
        sizePolicy1.setHeightForWidth(ButtonDivide->sizePolicy().hasHeightForWidth());
        ButtonDivide->setSizePolicy(sizePolicy1);
        ButtonDivide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #fa0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonDivide, 1, 3, 1, 1);

        ButtonPercent = new QPushButton(centralwidget);
        ButtonPercent->setObjectName("ButtonPercent");
        sizePolicy1.setHeightForWidth(ButtonPercent->sizePolicy().hasHeightForWidth());
        ButtonPercent->setSizePolicy(sizePolicy1);
        ButtonPercent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #949494;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ebeae8;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonPercent, 1, 2, 1, 1);

        ButtonMinus = new QPushButton(centralwidget);
        ButtonMinus->setObjectName("ButtonMinus");
        sizePolicy1.setHeightForWidth(ButtonMinus->sizePolicy().hasHeightForWidth());
        ButtonMinus->setSizePolicy(sizePolicy1);
        ButtonMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #fa0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonMinus, 5, 3, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button3, 5, 2, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button4, 4, 0, 1, 1);

        ButtonChangeSign = new QPushButton(centralwidget);
        ButtonChangeSign->setObjectName("ButtonChangeSign");
        sizePolicy1.setHeightForWidth(ButtonChangeSign->sizePolicy().hasHeightForWidth());
        ButtonChangeSign->setSizePolicy(sizePolicy1);
        ButtonChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #949494;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ebeae8;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonChangeSign, 1, 1, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button2, 5, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        ButtonMul = new QPushButton(centralwidget);
        ButtonMul->setObjectName("ButtonMul");
        sizePolicy1.setHeightForWidth(ButtonMul->sizePolicy().hasHeightForWidth());
        ButtonMul->setSizePolicy(sizePolicy1);
        ButtonMul->setAutoFillBackground(false);
        ButtonMul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #fa0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonMul, 2, 3, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button5, 4, 1, 1, 1);

        ButtonPlus = new QPushButton(centralwidget);
        ButtonPlus->setObjectName("ButtonPlus");
        sizePolicy1.setHeightForWidth(ButtonPlus->sizePolicy().hasHeightForWidth());
        ButtonPlus->setSizePolicy(sizePolicy1);
        ButtonPlus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #fa0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonPlus, 4, 3, 1, 1);

        ButtonEquals = new QPushButton(centralwidget);
        ButtonEquals->setObjectName("ButtonEquals");
        sizePolicy1.setHeightForWidth(ButtonEquals->sizePolicy().hasHeightForWidth());
        ButtonEquals->setSizePolicy(sizePolicy1);
        ButtonEquals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #fa0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonEquals, 7, 3, 1, 1);

        ButtonReset = new QPushButton(centralwidget);
        ButtonReset->setObjectName("ButtonReset");
        sizePolicy1.setHeightForWidth(ButtonReset->sizePolicy().hasHeightForWidth());
        ButtonReset->setSizePolicy(sizePolicy1);
        ButtonReset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #949494;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ebeae8;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonReset, 1, 0, 1, 1);

        ButtonComma = new QPushButton(centralwidget);
        ButtonComma->setObjectName("ButtonComma");
        sizePolicy1.setHeightForWidth(ButtonComma->sizePolicy().hasHeightForWidth());
        ButtonComma->setSizePolicy(sizePolicy1);
        ButtonComma->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #333;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #858585;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonComma, 7, 2, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica")});
        font.setPointSize(14);
        font.setBold(true);
        Display->setFont(font);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 4);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 37));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        ButtonDivide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        ButtonPercent->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        ButtonMinus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        ButtonChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        ButtonMul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        ButtonPlus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        ButtonEquals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        ButtonReset->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        ButtonComma->setText(QCoreApplication::translate("Calculator", ",", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
