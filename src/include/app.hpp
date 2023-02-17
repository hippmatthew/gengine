#ifndef app_hpp
#define app_hpp

#include "window.hpp"
#include "pipeline.hpp"

namespace gengine
{

class App
{
    
public:
    static constexpr int WIDTH = 500;
    static constexpr int HEIGHT = 600;

    void Run();


private:
    const Window window{WIDTH, HEIGHT, "Gengine"};
    const Pipeline pipeline{"spv/simple_shader.vert.spv", "spv/simple_shader.frag.spv"};

};

} // namespace gengine

#endif /* app_hpp */