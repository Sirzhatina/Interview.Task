#pragma once

#include <QWidget>
#include <QMouseEvent>
#include "MainWindow.hpp"

class DrawingArea : public QWidget {
public:
	DrawingArea(MainWindow* parent) : QWidget{parent} {

	}

protected:
	void mousePressEvent(QMouseEvent* e) override {

	}
};