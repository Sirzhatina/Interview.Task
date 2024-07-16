#pragma once

#include <QPushButton>
#include <source_location>

class QToolBar;

class AbstractShapeButton : public QPushButton {
	Q_OBJECT
protected:
	static void notImplemented();
public:
	AbstractShapeButton(const QString& text, QToolBar* parent);
	~AbstractShapeButton() = default;

	virtual void draw() = 0;
};