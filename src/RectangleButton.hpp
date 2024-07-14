#pragma once

#include "AbstractShapeButton.hpp"


class RectangleButton : public  AbstractShapeButton {
public:
	RectangleButton(const QString& text, QToolBar* parent) : AbstractShapeButton{ text, parent } { }
	void draw() override {
		AbstractShapeButton::notImplemented();
	}
};