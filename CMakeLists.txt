cmake_minimum_required(VERSION 3.14)

project(qt_simple VERSION 1.0 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

qt6_add_resources(RESOURCES resources.qrc)

add_executable(qt_simple
    main.cpp
    mainwindow.cpp
    mainwindow.h
)

target_link_libraries(qt_simple PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)