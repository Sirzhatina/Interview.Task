#include "AbstractShapeButton.hpp"
#include <QToolBar>

AbstractShapeButton::AbstractShapeButton(const QString& text, QToolBar* parent): QPushButton{text, parent} {
	this->setCheckable(true);
}