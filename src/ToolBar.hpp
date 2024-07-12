#pragma once

#include <QToolBar>
#include <QPushButton>
#include <QHBoxLayout>

class ToolBar : public QToolBar {
public:
	ToolBar(QWidget* parent)
		: QToolBar{parent}
		, m_triangle{ new QPushButton{"Triangle"} }
		, m_rectangle{ new QPushButton{"Rectangle"} }
		, m_ellipse{ new QPushButton{"Ellipse"} } {

		this->setMovable(false);

		this->addWidget(m_triangle);
		this->addWidget(m_rectangle);
		this->addWidget(m_ellipse);
	}

private:
	QPushButton* m_triangle;
	QPushButton* m_rectangle;
	QPushButton* m_ellipse;
};