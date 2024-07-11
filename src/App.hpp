#pragma once

#include <QApplication>
#include "MainWindow.hpp"

class App : public QApplication {
    Q_OBJECT
public:
    App(int argc, char* argv[]): QApplication{argc, argv} { 
        m_mw.show();
    }
private:
    MainWindow m_mw;
};