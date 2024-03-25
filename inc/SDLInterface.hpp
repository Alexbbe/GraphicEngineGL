#ifndef __SDLINTERFACE__
#define __SDLINTERFACE__

#include <iostream>
#include <SDL2/SDL.h>


class SDLInterface
{
private:
    SDL_Window *window;
    SDL_GLContext *glContext;




public:     
    SDLInterface();
    ~SDLInterface();   
    bool CreateWindow();
    bool CreateContext();
    void Init();

};



#endif