#pragma once

#include <QPushButton>

class QToolBar;

class AbstractShapeButton : public QPushButton {
	Q_OBJECT
public:
	AbstractShapeButton(QToolBar* parent);
	~AbstractShapeButton() = default;

	virtual void draw() = 0;
};