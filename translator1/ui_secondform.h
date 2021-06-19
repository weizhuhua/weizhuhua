/********************************************************************************
** Form generated from reading UI file 'secondform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDFORM_H
#define UI_SECONDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondForm
{
public:
    QLabel *label;

    void setupUi(QWidget *secondForm)
    {
        if (secondForm->objectName().isEmpty())
            secondForm->setObjectName(QStringLiteral("secondForm"));
        secondForm->resize(400, 300);
        label = new QLabel(secondForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 130, 171, 31));
        label->setStyleSheet(QStringLiteral("background-color: rgb(233, 187, 255);"));

        retranslateUi(secondForm);

        QMetaObject::connectSlotsByName(secondForm);
    } // setupUi

    void retranslateUi(QWidget *secondForm)
    {
        secondForm->setWindowTitle(QApplication::translate("secondForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("secondForm", "\345\223\210\345\223\210\345\223\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class secondForm: public Ui_secondForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDFORM_H
