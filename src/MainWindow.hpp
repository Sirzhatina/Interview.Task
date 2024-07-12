#pragma once

#include <QMainWindow>
#include <QWidget>

#include "DrawingArea.hpp"
#include "ToolBar.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow() : m_toolBar{ new ToolBar{this} }, m_drawingArea{ new DrawingArea{this} } {
        this->addToolBar(m_toolBar);
        this->setCentralWidget(m_drawingArea);

        this->setMinimumSize(DEFAULT_WINDOW_SIZE);
    }

private:
    ToolBar* m_toolBar;
    DrawingArea* m_drawingArea;

    static constexpr QSize DEFAULT_WINDOW_SIZE{ 640, 480 };
};