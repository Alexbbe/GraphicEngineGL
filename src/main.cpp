#include "OpenGLInterface.hpp"
#include <SDL2/SDL.h>



int main()
{

    SDL_Window *window = SDL_CreateWindow("Window1", 0, 0, 640, 480, SDL_WINDOW_OPENGL);
    SDL_Event event;

    
    bool quit = false;

    if(window == nullptr)
    {

        std::cout<<"The window in not null ptr"<<std::endl;
        exit(0);
        
    }

    while(!quit)
    {
        
        SDL_PollEvent(&event);

        std::cout<<"Got here"<<std::endl;

        if(event.type == SDL_QUIT)
        {
            quit = true;
        }


        std::cout<<"Got here2"<<std::endl;


    }


    return 0;
}