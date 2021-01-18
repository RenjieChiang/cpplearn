cmake_minimum_required(VERSION 3.17)
project(my_cpp_learn)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

include_directories(/usr/lib)
include_directories(/usr/include)
include_directories(/usr/local/include)

add_executable(my_cpp_learn
        src/mycpp.cpp
        src/mycppmain.cpp)
