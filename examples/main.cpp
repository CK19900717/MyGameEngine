#include <iostream>
#include "Engine.h"
#include <string>
int main()
{
    std::cout << "Hello, World!" << std::endl;

    Engine *engine = new Engine();
    std::string str =  engine->version();
    std::cout << str << std::endl;

    return 0;
}