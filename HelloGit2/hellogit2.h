#ifndef HELLOGIT2_H
#define HELLOGIT2_H

#include <QtWidgets/QDialog>
#include "ui_hellogit2.h"

class HelloGit2 : public QDialog
{
	Q_OBJECT

public:
	HelloGit2(QWidget *parent = 0);
	~HelloGit2();

private:
	Ui::HelloGit2Class ui;
};

#endif // HELLOGIT2_H
