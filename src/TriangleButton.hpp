#pragma once

#include "AbstractShapeButton.hpp"


class TriangleButton : public AbstractShapeButton {
public:
	TriangleButton(const QString& text, QToolBar* parent): AbstractShapeButton{ text, parent } { }
	void draw() override { }
};
