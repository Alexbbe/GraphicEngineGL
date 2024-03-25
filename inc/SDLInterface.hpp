#ifndef __SDLINTERFACE__
#define __SDLINTERFACE__

#include <iostream>
#include <SDL2/SDL.h>
#include <string.h>
#include <glad.h>

typedef struct
{   
    std::string title;
    int xPosition;
    int yPosition;
    int width;
    int height;
    int flags;
}  _WindowFeat;


class SDLInterface
{
private:
    SDL_Window *window;
    SDL_GLContext glContext;
    _WindowFeat windowfeat;

    bool CreateWindow();
    bool CreateContext();
    void InitializeOpenGl();
    bool LoadGladFunction();
    bool InitSDL();

    void MainSDLProcess();

public:     
    SDLInterface();
    ~SDLInterface();   

};



#endif