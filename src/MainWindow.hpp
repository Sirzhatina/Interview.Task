#pragma once

#include <QMainWindow>
#include <QWidget>

#include "DrawingArea.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(): m_optionsBar{this}, m_drawingArea{this} {
        m_drawingArea.show();
    }

private:
    QWidget m_optionsBar;
    DrawingArea m_drawingArea;
};