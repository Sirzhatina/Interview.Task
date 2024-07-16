#include "DrawingArea.hpp"
#include "MainWindow.hpp"


DrawingArea::DrawingArea(MainWindow* parent) : QWidget{ parent } { }

void DrawingArea::mousePressEvent(QMouseEvent* e) {
	if (e->button() == Qt::MouseButton::LeftButton) {
		m_mouseLastPressedPosition = e->position();
	}
}

void DrawingArea::mouseReleaseEvent(QMouseEvent* e) {
	m_mouseLastPressedPosition = { -1, -1 };
}

void DrawingArea::mouseMoveEvent(QMouseEvent * e)  {

}

void DrawingArea::paintEvent(QPaintEvent* e) {

}