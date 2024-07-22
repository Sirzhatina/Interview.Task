#include "Rectangle.hpp"

#include <QPainter>

AbstractShape::DrawResult Rectangle::draw(QPainter* p) {
	auto res = AbstractShape::draw(p);
	if (res.has_value()) {
		
	}
	return res;
}