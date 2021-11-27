cmake_minimum_required(VERSION 3.10)
project(SFMLOpenNUCES)

set(CMAKE_CXX_STANDARD 11)

add_executable(SFMLOpenNUCES main.cpp _frontend/AppFrontend.cpp _frontend/AppFrontend.h _backend/AppBackend.cpp _backend/AppBackend.h)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
endif()
