# Set the minimum required version for CMake
cmake_minimum_required(VERSION 3.13)
project(Jarvis_3.0)

# Set Stadard Cmake variables
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE DEBUG)

# Set GLFW build variables to not build tests or examples
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(/home/pi/glfw /home/pi/glfw/src)

# Find source files
file(GLOB_RECURSE SOURCE_FILES ${CMAKE_SOURCE_DIR}/src/*.cpp)
# Find header files
file(GLOB_RECURSE HEADER_FILES ${CMAKE_SOURCE_DIR}/inc/*.hpp)
# Add the exectuble to start jarvis
add_executable(jarvis.csj jarvis.cpp)

# Set directories to search for header files
include_directories(${CMAKE_SOURCE_DIR}/inc)

# OpenGL
find_package(OpenGL REQUIRED)

# GLM
#find_package(GLM REQUIRED)
#message(STATUS "GLM included at ${GLM_INCLUDE_DIR}")

target_link_libraries(jarvis.csj glfw OpenGL::GL GLU glut)