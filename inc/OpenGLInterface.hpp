#ifndef __OPENGLINTERFACE__
#define __OPENGLINTERFACE__


#include <iostream>
#include <SDL2/SDL.h>
#include <vector>
#include "SDLInterface.hpp"



class OpenGLInterface
{
private:

    bool LoadVertexBuffers(std::vector<float> buffer);
    bool LoadShaderFromFile();
    bool CompileShader();
    bool CreatePipelineProgram();
    bool PreDraw();
    bool Draw();
    bool HandleInput();


    SDLInterface sdlWorker;
    

public:
    OpenGLInterface();
    ~OpenGLInterface();


};


#endif
