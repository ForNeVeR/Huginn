cmake_minimum_required(VERSION 2.8.11)

project(huginn)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Qml REQUIRED)
find_package(Qt5Quick REQUIRED)
find_package(Qt5Widgets REQUIRED)

QT5_ADD_RESOURCES (Resources qml.qrc)

add_executable(huginn WIN32 ${Resources}
                            main.cpp)

target_link_libraries(huginn Qt5::Widgets
                             Qt5::Quick
                             Qt5::Widgets)
