#include "OpenGLInterface.hpp"
#include "SDLInterface.hpp"



int main()
{

    // SDLInterface sdl; 
    OpenGLInterface opengl1;


    opengl1.LoadShaderFromFile("../shaders/file1.txt", opengl1.fragmentShader);

    std::cout<<"The fragment shader is this: "<<opengl1.fragmentShader<<"finished"<<std::endl;

    return 0;
}