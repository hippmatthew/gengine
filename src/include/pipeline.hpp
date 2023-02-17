#ifndef pipeline_hpp
#define pipeline_hpp

#include <string>
#include <vector>

namespace gengine
{

class Pipeline
{
    public:
        Pipeline(const std::string& vertPath, const std::string& fragPath);

    private:
        static std::vector<char> readFile(const std::string& filepath);
        void createPipeline(const std::string& vertPath, const std::string& fragPath);
};

}

#endif /* pipeline_hpp */