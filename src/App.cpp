#include "App.hpp"

App::App(int argc, char* argv[]) : QApplication{ argc, argv } {
    m_mw.show();
}