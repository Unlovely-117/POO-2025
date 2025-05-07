cmake_minimum_required(VERSION 3.16)
project(mi-proyecto)

# 1. Recolecta todos los .cpp (incluyendo main.cpp)
file(GLOB SRC_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
)

# 2. Declara el ejecutable
add_executable(mi-proyecto ${SRC_FILES})

# 3. Indícale dónde están los headers
target_include_directories(mi-proyecto
  PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)


#cmake_minimum_required(VERSION 3.10)

#project(MiProyectoCpp)

#set(CMAKE_CXX_STANDARD 11)

#include_directories(include)

#file(GLOB SOURCES "src/*.cpp")

#add_executable(MiProyectoCpp ${SOURCES})