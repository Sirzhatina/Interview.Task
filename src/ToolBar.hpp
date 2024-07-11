#pragma once

#include <QToolBar>
#include <QPushButton>

class ToolBar : public QToolBar {
public:
	ToolBar(QWidget* parent)
		: QToolBar{parent}
		, m_triangleButton{ new QPushButton{"Triangle"} }
		, m_rectangleButton{ new QPushButton{"Rectangle"} }
		, m_ellipseButton{ new QPushButton{"Ellipse"} } {
			this->addWidget(m_triangleButton);
		this->addWidget(m_rectangleButton);
		this->addWidget(m_ellipseButton);
	}

private:
	QPushButton* m_triangleButton;
	QPushButton* m_rectangleButton;
	QPushButton* m_ellipseButton;
};