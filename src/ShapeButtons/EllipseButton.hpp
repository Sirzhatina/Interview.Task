#pragma once

#include "AbstractShapeButton.hpp"

class EllipseButton : public AbstractShapeButton {
public:
	EllipseButton(const QString& text, QToolBar* parent) : AbstractShapeButton{ text, parent } { }
	void draw() override { 
		AbstractShapeButton::notImplemented(); 
	}

};