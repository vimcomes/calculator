cmake_minimum_required(VERSION 3.23)
project(calculator)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "F:/Qt/5.15.2/mingw81_64/lib/cmake")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(calculator main.cpp calculator.ui calculatorMainWindow.h)
target_link_libraries(calculator
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

