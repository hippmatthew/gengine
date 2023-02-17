#include <fstream>
#include <stdexcept>
#include <iostream>

#include "include/pipeline.hpp"

namespace gengine
{

    Pipeline::Pipeline(const std::string& vertPath, const std::string& fragPath)
    {
        createPipeline(vertPath, fragPath);
    }

    std::vector<char> Pipeline::readFile(const std::string& filepath)
    {
        std::ifstream file(filepath, std::ios::ate | std::ios::binary);

        if (!file.is_open())
        {
            throw std::runtime_error("failed to open file: " + filepath);
        }

        size_t fileSize = static_cast<size_t>(file.tellg());
        std::vector<char> buffer(fileSize);

        file.seekg(0);
        file.read(buffer.data(), fileSize);

        file.close();

        return buffer;
    }

    void Pipeline::createPipeline(const std::string& vertPath, const std::string& fragPath)
    {
        std::vector<char> vertShader = readFile(vertPath);
        std::vector<char> fragShader = readFile(fragPath);

        std::cout << "Vertex Shader Code Size:\t" << vertShader.size() << " char\n";
        std::cout << "Fragment Shader Code Size:\t" << fragShader.size() << "char";
    }

}