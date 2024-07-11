#pragma once

#include <QMainWindow>
#include <QWidget>

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(): m_optionsBar{this}, m_paintingArea{this} {}

private:
    QWidget m_optionsBar;
    QWidget m_paintingArea;
};