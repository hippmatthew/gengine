#include "./include/window.hpp"

namespace gengine
{

    Window::Window(int w, int h, std::string t): width{w}, height{h}, windowTitle{t}
    {
        InitWindow();
    }

    Window::~Window()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void Window::InitWindow()
    {
        glfwInit();
        
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowTitle.c_str(), nullptr, nullptr);
    }

    bool Window::ShouldClose() const
    {
        return glfwWindowShouldClose(window);
    }

}