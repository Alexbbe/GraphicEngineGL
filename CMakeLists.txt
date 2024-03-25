# CMakeList.txt for building the project and linking with external libraries
#
#
#


cmake_minimum_required(VERSION 3.20)

project(GraphicEngine VERSION 1.0)

add_executable(GraphicEngineGL ./src/main.cpp ./src/SDLInterface.cpp) 

target_include_directories(GraphicEngineGL PRIVATE ./inc/ ./libs/glm-master/ ./libs/glad/)
target_link_libraries(GraphicEngineGL PRIVATE SDL2)
