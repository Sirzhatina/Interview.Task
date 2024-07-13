#pragma once

#include <array>
#include <QToolBar>
#include "AbstractShapeButton.hpp"
#include "EllipseButton.hpp"
#include "RectangleButton.hpp"
#include "TriangleButton.hpp"

class ToolBar : public QToolBar {
public:
	ToolBar(QWidget* parent)
		: QToolBar{parent} {

		this->setMovable(false);

		for (const auto& b : m_shapeButtons) {
			this->addWidget(b);
			b->setCheckable(true);
		}
	}

private:
	std::array<AbstractShapeButton*, 3> m_shapeButtons{
		new TriangleButton { "Triangle" , this },
		new RectangleButton{ "Rectangle", this },
		new EllipseButton  { "Ellipse"  , this }
	};
};