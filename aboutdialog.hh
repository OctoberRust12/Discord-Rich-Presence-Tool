#pragma once

#include <QDialog>
#include "ui_aboutdialog.h"

class AboutDialog : public QDialog
{
	Q_OBJECT

public:
	AboutDialog(QWidget *parent = Q_NULLPTR);

	~AboutDialog();

protected:
	Ui::AboutDialog ui;
};
