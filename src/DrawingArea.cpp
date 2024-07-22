#include "DrawingArea.hpp"
#include "MainWindow.hpp"
#include <QMouseEvent>

DrawingArea::DrawingArea(MainWindow* parent) : QWidget{ parent } { }

void DrawingArea::mousePressEvent(QMouseEvent* e) {
	if (e->button() == Qt::MouseButton::LeftButton) {
		m_leftMouseButtonPushed = true;
		m_mouseLastPressedPosition = e->position();
	}
}

void DrawingArea::mouseReleaseEvent(QMouseEvent* e) {
	m_leftMouseButtonPushed = false;
	m_mouseLastPressedPosition = { -1, -1 };
}

void DrawingArea::mouseMoveEvent(QMouseEvent * e)  {
	if (m_leftMouseButtonPushed) {

	}
}

void DrawingArea::paintEvent(QPaintEvent* e) {

}