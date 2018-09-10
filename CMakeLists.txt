cmake_minimum_required(VERSION 3.0)  
project(Fly) 
 
set(OpenCV_DIR /usr/local/share/OpenCV)
find_package(OpenCV REQUIRED) 
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
#message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

add_definitions(-std=c++11)
include_directories(${OpenCV_INCLUDE_DIRS})  

add_executable(demo main.cpp fly.h cube.cpp boll.cpp)
target_link_libraries(demo ${OpenCV_LIBS})

#add_library(fly_shared SHARED 1.cpp)
#add_executable(demo main.cpp) 
#target_link_libraries(demo ${OpenCV_LIBS} fly_shared) 
