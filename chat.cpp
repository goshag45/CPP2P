#include <iostream>
#include "chat.h"

// compiled with:
// g++ -g main.cpp chat.cpp -o build/Debug/outDebug.exe

std::string GetUserInput() {
    std::string input;
    std::cin >> input;

    return input;
}