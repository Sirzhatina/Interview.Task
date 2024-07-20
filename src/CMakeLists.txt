set(TARGET app)


file(GLOB SHAPE_BUTTONS ShapeButtons/*)

file(GLOB SHAPES Shapes/*)

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
    ${SHAPES}
)

add_executable(${TARGET})


target_sources(${TARGET}
    PRIVATE
        ${SOURCES}
)

target_link_libraries(${TARGET} PRIVATE qt::qt)

set_target_properties(${TARGET} PROPERTIES AUTOMOC ON)
