#pragma once

#include <array>
#include <QToolBar>
#include <QButtonGroup>
#include "AbstractShapeButton.hpp"
#include "EllipseButton.hpp"
#include "RectangleButton.hpp"
#include "TriangleButton.hpp"

class ToolBar : public QToolBar {
	Q_OBJECT
public:
	ToolBar(QWidget* parent)
		: QToolBar{parent} {

		this->setMovable(false);

		for (const auto& b : m_shapeButtons) {
			this->addWidget(b);
			m_shapeButtonsGroup->addButton(b);
		}

		this->addSeparator();
	}

private:
	std::array<AbstractShapeButton*, 3> m_shapeButtons{
		new TriangleButton { "Triangle" , this },
		new RectangleButton{ "Rectangle", this },
		new EllipseButton  { "Ellipse"  , this }
	};

	QButtonGroup* m_shapeButtonsGroup{ new QButtonGroup{ this } };
};