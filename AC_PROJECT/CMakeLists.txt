cmake_minimum_required(VERSION 3.16)

project(AC_PROJECT LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AC_PROJECT main.cpp
    AC.h AC.cpp
    Switch.h Switch.cpp
    Wire.h Wire.cpp)

include(GNUInstallDirs)
install(TARGETS AC_PROJECT
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
