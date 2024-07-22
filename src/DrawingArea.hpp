#pragma once

#include <QWidget>

class MainWindow;
class QMouseEvent;

class DrawingArea : public QWidget {
public:
	DrawingArea(MainWindow* parent);

protected:
	void mousePressEvent(QMouseEvent* e)   override;
	void mouseReleaseEvent(QMouseEvent* e) override;
	void mouseMoveEvent(QMouseEvent* e)    override;
	void paintEvent(QPaintEvent* e)        override;

private:

	bool m_leftMouseButtonPushed{ false };

	QPointF m_mouseLastPressedPosition;
};