set(TARGET app)

set(SOURCES
    main.cpp
    App.hpp
    MainWindow.hpp
)

add_executable(${TARGET})


target_sources(${TARGET}
    PRIVATE
        ${SOURCES}
)

target_link_libraries(${TARGET} PRIVATE qt::qt)

set_target_properties(${TARGET} PROPERTIES AUTOMOC ON)
