#pragma once

#include <QMainWindow>
#include <QWidget>

#include "DrawingArea.hpp"
#include "ToolBar.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(): m_toolBar{this}, m_drawingArea{this} {
        m_drawingArea.show();
    }

private:
    ToolBar m_toolBar;
    DrawingArea m_drawingArea;
};