#include "aboutlabel.hh"

AboutLabel::AboutLabel(QWidget *parent)
	: ClickableLabel(parent)
{
}

AboutLabel::~AboutLabel()
{
}

auto AboutLabel::mousePressEvent(QMouseEvent *pEvent) -> void
{
    ClickableLabel::mousePressEvent(pEvent);
}

auto AboutLabel::EventEnter(QEvent *pEvent) -> void
{
	setStyleSheet(styleEnter);
}

auto AboutLabel::EventLeave(QEvent *pEvent) -> void
{
	setStyleSheet(styleLeave);
}
