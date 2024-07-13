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

		m_triangle->setCheckable(true);
		m_rectangle->setCheckable(true);
		m_ellipse->setCheckable(true);
	}

private:
	QPushButton* m_triangle;
	QPushButton* m_rectangle;
	QPushButton* m_ellipse;
};