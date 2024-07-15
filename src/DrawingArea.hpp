#pragma once

#include <QWidget>
#include "MainWindow.hpp"

class DrawingArea : public QWidget {
public:
	DrawingArea(MainWindow* parent) : QWidget{parent} {

	}
};