#pragma once

#include <QPainter>
#include <expected>


class AbstractShape {
public:

	enum class PainterError {
		NULL_PASSED,
		NO_DEVICE_BOUND
	};

	using DrawResult = std::expected<void, PainterError>;

public:
	virtual DrawResult draw(QPainter* p) = 0;
};