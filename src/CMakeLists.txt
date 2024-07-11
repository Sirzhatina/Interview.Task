set(TARGET app)

set(SOURCES
    main.cpp
    MainWindow.hpp
)

add_executable(${TARGET})


target_sources(${TARGET}
    PRIVATE
        ${SOURCES}
)

target_link_libraries(${TARGET} PRIVATE qt::qt)