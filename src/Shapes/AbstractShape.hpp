#pragma once

#include <QPainter>


class AbstractShape {
public:
	virtual void draw(QPainter* p) = 0;


};