#include "./include/app.hpp"

namespace gengine
{

void App::Run()
{
    while (!window.ShouldClose())
    {
        glfwPollEvents();
    }
}

}