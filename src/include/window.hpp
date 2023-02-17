#ifndef window_hpp
#define window_hpp

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace gengine
{

class Window
{

public:
    Window(int w, int h, std::string t);
    ~Window();

    Window(const Window &) = delete;
    Window & operator=(const Window &) = delete;

    bool ShouldClose() const;

private:
    const int height, width;
    const std::string windowTitle;

    GLFWwindow* window;

    void InitWindow();

};

} // namespace gengine

#endif /* window_hpp */