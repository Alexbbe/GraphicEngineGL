#ifndef __SDLINTERFACE__
#define __SDLINTERFACE__

#include <iostream>
#include <SDL2/SDL.h>
#include <string.h>

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
    SDL_GLContext *glContext;
    _WindowFeat *windowfeat;






public:     
    SDLInterface();
    ~SDLInterface();   
    bool CreateWindow();
    bool CreateContext();
    bool InitSDL();

};



#endif