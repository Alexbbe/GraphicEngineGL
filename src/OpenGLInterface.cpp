#include "OpenGLInterface.hpp"


OpenGLInterface::OpenGLInterface()
{

    std::cout<<"Consturctor"<<std::endl;
}


OpenGLInterface::~OpenGLInterface()
{
    std::cout<<"Destructor"<<std::endl;

}

bool OpenGLInterface::LoadVertexBuffers(std::vector<float> buffer)
{
    bool retval = true;

    glGenBuffers(1, &vertexBuffer);

    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * sizeof(buffer), (void*) &buffer, GL_STATIC_DRAW);

    glGenVertexArrays(1, &vertexArrayBuffer);
    glBindVertexArray(vertexArrayBuffer);

    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, NULL);

    return retval;

}

bool OpenGLInterface::LoadShaderFromFile(const std::string fileName, std::string &output)
{
    std::cout<<"Calling LoaderShaderFromFile"<<std::endl;    
    
    bool retval = true;

    std::string line; 

    std::ifstream myFile(fileName);

    while(getline(myFile, line))
    {
        std::cout<<"lie is: "<<line<<std::endl;
        output+=line;
    }

    myFile.close();


    return retval;

}


bool OpenGLInterface::CompileShader()
{
    bool retval = true;


    return retval;

}


bool OpenGLInterface::CreatePipelineProgram()
{
    bool retval = true;


    return retval;

}


bool OpenGLInterface::PreDraw()
{

    bool retval = true;


    return retval;

}


bool OpenGLInterface::Draw()
{
    
    bool retval = true;


    return retval;
}


bool OpenGLInterface::HandleInput()
{

    bool retval = true;


    return retval;

}