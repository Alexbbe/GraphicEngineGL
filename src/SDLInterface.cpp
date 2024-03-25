#include "SDLInterface.hpp"



SDLInterface::SDLInterface()
{
    std::cout<<"Calling default constructor"<<std::endl;






}


SDLInterface::~SDLInterface()
{

    std::cout<<"Calling destructor"<<std::endl;





}



bool SDLInterface::InitSDL()
{
    bool retval = true;


    if(SDL_Init(SDL_INIT_VIDEO < 0))
    {
        std::cout<<"SDL - video mode could not be initialized"<<std::endl;
        retval = false;


    }

    return retval;

}



bool SDLInterface::CreateWindow()
{
    bool retval = true;

    window = SDL_CreateWindow(windowfeat->title.c_str(),
                                windowfeat->xPosition, 
                                windowfeat->yPosition, 
                                windowfeat->width, 
                                windowfeat->height, 
                                windowfeat->flags);

    if(window!=nullptr)
    {
        std::cout<<"Window was created with success"<<std::endl;       
    }
    else
    {
        std::cout<<"Window is null ptr"<<std::endl;
        retval = false;
    }



    return retval;
}


bool SDLInterface::CreateContext()
{
    bool retval = true;










    return retval;
}




