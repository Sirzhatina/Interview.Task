set(TARGET app)


set(SHAPE_BUTTONS
    ShapeButtons/AbstractShapeButton.cpp
    ShapeButtons/AbstractShapeButton.hpp
    ShapeButtons/EllipseButton.hpp
    ShapeButtons/RectangleBUtton.hpp
    ShapeButtons/TriangleButton.hpp
)

set(SOURCES
    main.cpp
    App.hpp
    App.cpp
    MainWindow.hpp
    DrawingArea.cpp
    DrawingArea.hpp
    ToolBar.hpp
    ToolBar.cpp
    ${SHAPE_BUTTONS}
)

add_executable(${TARGET})


target_sources(${TARGET}
    PRIVATE
        ${SOURCES}
)

target_link_libraries(${TARGET} PRIVATE qt::qt)

set_target_properties(${TARGET} PROPERTIES AUTOMOC ON)
