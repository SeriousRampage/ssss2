cmake_minimum_required(VERSION 3.10)
project(NNCPP)

# Add executable target
add_executable(MyExecutable main.cpp)

# Include directories
include_directories(Network)
include_directories(Neuron)

# Add source files
add_library(Network STATIC Network/Network.cpp)
add_library(Neuron STATIC Neuron/neuron.cpp)

# Link libraries
target_link_libraries(MyExecutable Network Neuron)
