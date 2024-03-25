#include "SDLInterface.hpp"



SDLInterface::SDLInterface()
{
    std::cout<<"Calling default constructor"<<std::endl;






}


SDLInterface::~SDLInterface()
{

    std::cout<<"Calling destructor"<<std::endl;





}


bool SDLInterface::CreateWindow()
{
    bool retval = false;









    return retval;
}


bool SDLInterface::CreateContext()
{
    bool retval = false;










    return retval;
}


void SDLInterface::Init()
{
    this->CreateWindow();
    this->CreateContext();




}


