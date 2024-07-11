#pragma once

#include <QMainWindow>
#include <QWidget>

#include "DrawingArea.hpp"
#include "ToolBar.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow() /*: m_toolBar{ new ToolBar{this} }, m_drawingArea{ new DrawingArea{this} }*/ {
        //this->addToolBar(m_toolBar);
        //m_drawingArea->show();
    }

private:
    //ToolBar* m_toolBar;
    //DrawingArea* m_drawingArea;
};