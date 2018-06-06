/********************************************************************************
** Form generated from reading UI file 'danmuServer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANMUSERVER_H
#define UI_DANMUSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_danmuServerClass
{
public:

    void setupUi(QWidget *danmuServerClass)
    {
        if (danmuServerClass->objectName().isEmpty())
            danmuServerClass->setObjectName(QStringLiteral("danmuServerClass"));
        danmuServerClass->resize(1920, 700);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(danmuServerClass->sizePolicy().hasHeightForWidth());
        danmuServerClass->setSizePolicy(sizePolicy);
        danmuServerClass->setFocusPolicy(Qt::ClickFocus);

        retranslateUi(danmuServerClass);

        QMetaObject::connectSlotsByName(danmuServerClass);
    } // setupUi

    void retranslateUi(QWidget *danmuServerClass)
    {
        danmuServerClass->setWindowTitle(QApplication::translate("danmuServerClass", "danmuServer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class danmuServerClass: public Ui_danmuServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANMUSERVER_H
