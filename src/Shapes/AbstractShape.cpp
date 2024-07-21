#include "AbstractShape.hpp"
#include <QPainter>

AbstractShape::DrawResult AbstractShape::draw(QPainter* p) {
	if (p == nullptr) {
		return std::unexpected{ PainterError::NULL_PASSED };
	}
	if (p->device() == nullptr) {
		return std::unexpected{ PainterError::NO_DEVICE_BOUND };
	}

	return DrawResult{};
}