# CMakeList.txt for building the project and linking with external libraries
#
#
#


cmake_minimum_required(VERSION 3.20)

project(GraphicEngine VERSION 1.0)

add_executable(GraphicEngineGL ./src/main.cpp ./src/SDLInterface.cpp ./libs/glad/src/glad.c) 

target_include_directories(GraphicEngineGL PRIVATE ./inc/ ./libs/glm-master/ ./libs/glad/include/glad/)
target_link_libraries(GraphicEngineGL PRIVATE SDL2)
