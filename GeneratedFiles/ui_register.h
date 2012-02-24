/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created: Tue Jan 17 21:11:05 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *id_code;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *commbox_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *fist_time;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateEdit *expire_time;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *language;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QTextEdit *output;
    QPushButton *generate;

    void setupUi(QDialog *RegisterClass)
    {
        if (RegisterClass->objectName().isEmpty())
            RegisterClass->setObjectName(QString::fromUtf8("RegisterClass"));
        RegisterClass->resize(600, 400);
        verticalLayout = new QVBoxLayout(RegisterClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(RegisterClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        id_code = new QLineEdit(RegisterClass);
        id_code->setObjectName(QString::fromUtf8("id_code"));

        horizontalLayout->addWidget(id_code);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RegisterClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        commbox_id = new QLineEdit(RegisterClass);
        commbox_id->setObjectName(QString::fromUtf8("commbox_id"));

        horizontalLayout_2->addWidget(commbox_id);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(RegisterClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        fist_time = new QDateEdit(RegisterClass);
        fist_time->setObjectName(QString::fromUtf8("fist_time"));

        horizontalLayout_3->addWidget(fist_time);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(RegisterClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        expire_time = new QDateEdit(RegisterClass);
        expire_time->setObjectName(QString::fromUtf8("expire_time"));

        horizontalLayout_4->addWidget(expire_time);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(RegisterClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        language = new QComboBox(RegisterClass);
        language->setObjectName(QString::fromUtf8("language"));

        horizontalLayout_6->addWidget(language);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(RegisterClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        output = new QTextEdit(RegisterClass);
        output->setObjectName(QString::fromUtf8("output"));

        horizontalLayout_5->addWidget(output);


        verticalLayout->addLayout(horizontalLayout_5);

        generate = new QPushButton(RegisterClass);
        generate->setObjectName(QString::fromUtf8("generate"));

        verticalLayout->addWidget(generate);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(id_code);
        label_2->setBuddy(commbox_id);
        label_3->setBuddy(fist_time);
        label_4->setBuddy(expire_time);
        label_6->setBuddy(language);
#endif // QT_NO_SHORTCUT

        retranslateUi(RegisterClass);

        QMetaObject::connectSlotsByName(RegisterClass);
    } // setupUi

    void retranslateUi(QDialog *RegisterClass)
    {
        RegisterClass->setWindowTitle(QApplication::translate("RegisterClass", "Register", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RegisterClass", "ID Code", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RegisterClass", "Commbox ID", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RegisterClass", "First Time", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RegisterClass", "Expire Time", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RegisterClass", "Language", 0, QApplication::UnicodeUTF8));
        language->clear();
        language->insertItems(0, QStringList()
         << QApplication::translate("RegisterClass", "zh-CN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RegisterClass", "en-US", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("RegisterClass", "Output", 0, QApplication::UnicodeUTF8));
        generate->setText(QApplication::translate("RegisterClass", "Generate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RegisterClass: public Ui_RegisterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
