#!/bin/bash

source glslc_path.sh

GLSLC vert/simple_shader.vert -o spv/simple_shader.vert.spv
GLSLC frag/simple_shader.frag -o spv/simple_shader.frag.spv