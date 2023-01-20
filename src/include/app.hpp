#ifndef app_hpp
#define app_hpp

#include "window.hpp"

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

};

}

#endif /* app_hpp */