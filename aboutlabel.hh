#pragma once

#include "clickablelabel.hh"

// Clickable "About" label used in the main window.
class AboutLabel : public ClickableLabel
{
	Q_OBJECT

public:
	AboutLabel(QWidget *pParent);

	~AboutLabel();

	QString styleEnter;

	QString styleLeave;

protected:
	auto mousePressEvent(QMouseEvent *pEvent) -> void;

	auto EventEnter(QEvent *pEvent) -> void;

	auto EventLeave(QEvent *pEvent) -> void;
};
