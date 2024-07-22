#pragma once

#include <expected>
#include <QPoint>

class QPainter;

struct TangentialRectangle {
	QPoint m_topLeft;
	QPoint m_bottomRight;
};

class AbstractShape {
public:

	enum class PainterError {
		NULL_PASSED,
		NO_DEVICE_BOUND
	};

	using DrawResult = std::expected<void, PainterError>;

public:
	virtual DrawResult draw(QPainter* p) = 0;

protected:
	TangentialRectangle m_rect;
};