set(TARGET app)

set(SOURCES
    main.cpp
    App.hpp
    App.cpp
    MainWindow.hpp
    DrawingArea.cpp
    DrawingArea.hpp
    ToolBar.hpp
    ToolBar.cpp
    AbstractShapeButton.hpp
    AbstractShapeButton.cpp
    TriangleButton.hpp
    RectangleButton.hpp
    EllipseButton.hpp
)

add_executable(${TARGET})


target_sources(${TARGET}
    PRIVATE
        ${SOURCES}
)

target_link_libraries(${TARGET} PRIVATE qt::qt)

set_target_properties(${TARGET} PROPERTIES AUTOMOC ON)
