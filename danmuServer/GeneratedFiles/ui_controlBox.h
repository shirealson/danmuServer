/********************************************************************************
** Form generated from reading UI file 'controlBox.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLBOX_H
#define UI_CONTROLBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_controlBox
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QPushButton *changePlayTime;
    QPushButton *changeFrame;
    QPushButton *exit;

    void setupUi(QDialog *controlBox)
    {
        if (controlBox->objectName().isEmpty())
            controlBox->setObjectName(QStringLiteral("controlBox"));
        controlBox->resize(259, 304);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(controlBox->sizePolicy().hasHeightForWidth());
        controlBox->setSizePolicy(sizePolicy);
        controlBox->setContextMenuPolicy(Qt::NoContextMenu);
        label = new QLabel(controlBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 121, 21));
        spinBox = new QSpinBox(controlBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(100, 50, 61, 31));
        spinBox->setValue(8);
        label_2 = new QLabel(controlBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 140, 171, 16));
        spinBox_2 = new QSpinBox(controlBox);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(100, 170, 61, 31));
        spinBox_2->setMinimum(24);
        spinBox_2->setMaximum(60);
        changePlayTime = new QPushButton(controlBox);
        changePlayTime->setObjectName(QStringLiteral("changePlayTime"));
        changePlayTime->setGeometry(QRect(100, 100, 61, 23));
        sizePolicy.setHeightForWidth(changePlayTime->sizePolicy().hasHeightForWidth());
        changePlayTime->setSizePolicy(sizePolicy);
        changePlayTime->setMinimumSize(QSize(61, 23));
        changePlayTime->setMaximumSize(QSize(61, 23));
        changePlayTime->setContextMenuPolicy(Qt::CustomContextMenu);
        changeFrame = new QPushButton(controlBox);
        changeFrame->setObjectName(QStringLiteral("changeFrame"));
        changeFrame->setGeometry(QRect(100, 220, 61, 23));
        exit = new QPushButton(controlBox);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(80, 260, 101, 31));

        retranslateUi(controlBox);

        QMetaObject::connectSlotsByName(controlBox);
    } // setupUi

    void retranslateUi(QDialog *controlBox)
    {
        controlBox->setWindowTitle(QApplication::translate("controlBox", "\346\216\247\345\210\266\345\217\260", Q_NULLPTR));
        label->setText(QApplication::translate("controlBox", "\345\274\271\345\271\225\346\222\255\346\224\276\346\227\266\351\227\264\357\274\210\347\247\222\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("controlBox", "\345\270\247\346\225\260\357\274\210\350\277\207\351\253\230\345\217\257\350\203\275\345\274\225\350\265\267\346\200\247\350\203\275\351\227\256\351\242\230\357\274\211", Q_NULLPTR));
        changePlayTime->setText(QApplication::translate("controlBox", "\346\233\264\346\224\271", Q_NULLPTR));
        changeFrame->setText(QApplication::translate("controlBox", "\346\233\264\346\224\271", Q_NULLPTR));
        exit->setText(QApplication::translate("controlBox", "\351\200\200\345\207\272\345\274\271\345\271\225\347\263\273\347\273\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class controlBox: public Ui_controlBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLBOX_H
