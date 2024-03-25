#!/bin/sh

# This script will be used to build and run the project


echo "Building the project"
mkdir ./CmakeTemp
cd CmakeTemp 
cmake ../
make 
cp GraphicEngineGL ../build/GraphicEngineGL
cd ..
rm -rfv CmakeTemp
./build/GraphicEngineGL
rm  ./build/GraphicEngineGL
