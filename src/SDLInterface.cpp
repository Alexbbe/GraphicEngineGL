#include "SDLInterface.hpp"


SDLInterface::SDLInterface():
window(nullptr),
quit(false)
{
    std::cout<<"Calling default constructor"<<std::endl;
    windowfeat.xPosition = 0;
    windowfeat.yPosition = 0;
    windowfeat.title = "Window0";
    windowfeat.width = 600;
    windowfeat.height = 800;
    windowfeat.flags = SDL_WINDOW_OPENGL; 

    std::cout<<"Calling MainSDLProcess"<<std::endl;
    MainSDLProcess();

}


SDLInterface::~SDLInterface()
{

    std::cout<<"Calling destructor"<<std::endl;


}


void SDLInterface::MainSDLProcess()
{
    InitSDL();
    InitializeOpenGl();
    CreateWindow();
    CreateContext();
    LoadGladFunction();
    EventListener();
}

void SDLInterface::EventListener()
{
    while(quit == false)
    {
        SDL_PollEvent(&event);
        if(event.type == SDL_QUIT)
        {
            quit = true;
        }
    }

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

    window = SDL_CreateWindow (windowfeat.title.c_str(),
                                windowfeat.xPosition, 
                                windowfeat.yPosition, 
                                windowfeat.width, 
                                windowfeat.height, 
                                windowfeat.flags);

    if(window != nullptr)
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


    if(window != nullptr)
    { 
        glContext = SDL_GL_CreateContext(window);
        
        if(glContext != NULL)
        {
            std::cout<<"The OpenGL context was created sucessfully"<<std::endl;
        }
        else
        {
            std::cout<<"The glContext failed"<<std::endl;
            retval = false;
        }
    }
    else
    {
        std::cout<<"The OpenGL context cannot be created. Window is nullptr"<<std::endl;
        retval = false;
    }

    return retval;
}


void SDLInterface::InitializeOpenGl()
{

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);

}


bool SDLInterface::LoadGladFunction()
{

    bool retval = true;

    //initialize glad library
    if(!gladLoadGLLoader(SDL_GL_GetProcAddress))
    {   
        std::cout<<"The load of glad suite failed!"<<std::endl;
        retval = false;
    }


    return retval;

}

