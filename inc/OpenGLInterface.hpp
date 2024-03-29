#ifndef __OPENGLINTERFACE__
#define __OPENGLINTERFACE__


#include <iostream>
#include <SDL2/SDL.h>
#include <vector>
#include "SDLInterface.hpp"
#include <iostream>
#include <fstream>



class OpenGLInterface
{
private:

    bool LoadVertexBuffers(std::vector<float> buffer);
    bool CompileShader();
    bool CreatePipelineProgram();
    bool PreDraw();
    bool Draw();
    bool HandleInput();


    SDLInterface sdlWorker;
    GLuint vertexBuffer;
    GLuint vertexArrayBuffer;
    
    

public:
    OpenGLInterface();
    ~OpenGLInterface();
    bool LoadShaderFromFile(std::string fileName, std::string &output);
    std::string fragmentShader;

};


#endif
