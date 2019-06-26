#include "clickablelabel.hh"

ClickableLabel::ClickableLabel(QWidget *parent)
	: QLabel(parent)
{
}

ClickableLabel::~ClickableLabel()
{
}

auto ClickableLabel::mousePressEvent(QMouseEvent *pEvent) -> void
{
	emit Clicked();
}

auto ClickableLabel::EventEnter(QEvent *pEvent) -> void
{
}

auto ClickableLabel::EventLeave(QEvent *pEvent) -> void
{
}
