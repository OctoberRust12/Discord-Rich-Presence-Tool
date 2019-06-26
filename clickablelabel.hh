#pragma once

#include <QLabel>

// Qt label widget that generates click events
class ClickableLabel : public QLabel
{
	Q_OBJECT

public:
    ClickableLabel(QWidget *pParent);

	~ClickableLabel();

signals:
    auto Clicked() -> void;

protected:
    auto mousePressEvent(QMouseEvent *pEvent) -> void;

    auto EventEnter(QEvent *pEvent) -> void;

    auto EventLeave(QEvent *pEvent) -> void;
};
