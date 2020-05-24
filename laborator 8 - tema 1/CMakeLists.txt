cmake_minimum_required(VERSION 3.13)
project(laborator_8___tema_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(.idea/codeStyles)
include_directories(.idea/dictionaries)
include_directories(cmake-build-debug)

add_executable(laborator_8___tema_1
        .idea/codeStyles/Project.xml
        .idea/dictionaries/Mike_Wass.xml
        .idea/.name
        .idea/encodings.xml
        ".idea/laborator 8 - tema 1.iml"
        .idea/misc.xml
        .idea/modules.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/laborator_8___tema_1.cbp
        cmake-build-debug/laborator_8___tema_1.exe
        cmake-build-debug/laborator_8___tema_1.ilk
        cmake-build-debug/laborator_8___tema_1.pdb
        cmake-build-debug/Makefile
        CMakeLists.txt
        main.cpp)
