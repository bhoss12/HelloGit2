/********************************************************************************
** Form generated from reading UI file 'hellogit2.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOGIT2_H
#define UI_HELLOGIT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloGit2Class
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSlider;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;

    void setupUi(QDialog *HelloGit2Class)
    {
        if (HelloGit2Class->objectName().isEmpty())
            HelloGit2Class->setObjectName(QStringLiteral("HelloGit2Class"));
        HelloGit2Class->resize(268, 195);
        widget = new QWidget(HelloGit2Class);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 231, 171));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSlider = new QSlider(widget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        progressBar_2 = new QProgressBar(widget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setValue(24);

        verticalLayout->addWidget(progressBar_2);

        progressBar_3 = new QProgressBar(widget);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setValue(24);

        verticalLayout->addWidget(progressBar_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(HelloGit2Class);
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), progressBar_3, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), progressBar_2, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(HelloGit2Class);
    } // setupUi

    void retranslateUi(QDialog *HelloGit2Class)
    {
        HelloGit2Class->setWindowTitle(QApplication::translate("HelloGit2Class", "HelloGit2", 0));
    } // retranslateUi

};

namespace Ui {
    class HelloGit2Class: public Ui_HelloGit2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOGIT2_H
