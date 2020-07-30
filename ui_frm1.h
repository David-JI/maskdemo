/********************************************************************************
** Form generated from reading UI file 'frm1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM1_H
#define UI_FRM1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm1
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *frm1)
    {
        if (frm1->objectName().isEmpty())
            frm1->setObjectName(QStringLiteral("frm1"));
        frm1->resize(400, 300);
        gridLayout = new QGridLayout(frm1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 250, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(frm1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(frm1);

        QMetaObject::connectSlotsByName(frm1);
    } // setupUi

    void retranslateUi(QWidget *frm1)
    {
        frm1->setWindowTitle(QApplication::translate("frm1", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("frm1", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm1: public Ui_frm1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM1_H
