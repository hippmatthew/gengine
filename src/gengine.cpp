#include <cstdlib>
#include <stdexcept>
#include <iostream>

#include "./include/app.hpp"

int main()
{
    gengine::App app{};

    try
    {
        app.Run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    
    return EXIT_SUCCESS;
}