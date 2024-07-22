#include "ToolBar.hpp"
#include "MainWindow.hpp"

ToolBar::ToolBar(MainWindow* parent)
	: QToolBar{ parent } {

	this->setMovable(false);

	for (const auto& b : m_shapeButtons) {
		this->addWidget(b);
		m_shapeButtonsGroup->addButton(b);
	}

	this->addSeparator();
}

AbstractShapeButton* ToolBar::checkedButton() const {
	return dynamic_cast<AbstractShapeButton*>(m_shapeButtonsGroup->checkedButton());
}