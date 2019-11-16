/********************************************************************************
** Form generated from reading UI file 'displaylyric.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYLYRIC_H
#define UI_DISPLAYLYRIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayLyric
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *LyricLabel;

    void setupUi(QWidget *DisplayLyric)
    {
        if (DisplayLyric->objectName().isEmpty())
            DisplayLyric->setObjectName(QStringLiteral("DisplayLyric"));
        DisplayLyric->resize(527, 74);
        DisplayLyric->setMinimumSize(QSize(527, 74));
        DisplayLyric->setMaximumSize(QSize(527, 74));
        horizontalLayout = new QHBoxLayout(DisplayLyric);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LyricLabel = new QLabel(DisplayLyric);
        LyricLabel->setObjectName(QStringLiteral("LyricLabel"));

        horizontalLayout->addWidget(LyricLabel);


        retranslateUi(DisplayLyric);

        QMetaObject::connectSlotsByName(DisplayLyric);
    } // setupUi

    void retranslateUi(QWidget *DisplayLyric)
    {
        DisplayLyric->setWindowTitle(QApplication::translate("DisplayLyric", "Form", nullptr));
        LyricLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DisplayLyric: public Ui_DisplayLyric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYLYRIC_H
