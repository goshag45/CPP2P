#include <iostream>

#include "gui.h"

int main() {
    std::cout << "Hello glorb!" << std::endl;

    return 0;
}

/* 
    PREREQs
    CMAKE installed at least version 3.15
    A C++ compiler - im using https://www.msys2.org/

    BUILD PROCESS:
    1. 'cd build' in terminal
    # make sure build folder is empty

    2. cmake -G "MinGW Makefiles" -DBUILD_SHARED_LIBS=OFF ../
    # if there are any issues empty the build folder
    # if you have issues with this its probably compiler diff or not added to path 

    3. cmake --build .\
    4. voila, you have .exe file in build/src

*/