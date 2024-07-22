#pragma once

#include "AbstractShape.hpp"

class Rectangle : public AbstractShape {
public:
	DrawResult draw(QPainter*) override;
};